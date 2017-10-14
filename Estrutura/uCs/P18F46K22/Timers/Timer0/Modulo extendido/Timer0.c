/* 
 * Arquivo: Timer 0.c
 * Autor:   JABNeto
 * Versao:  150710
 */

#include "Timer0.h"

//Alocação de memória para o módulo--------------------------------------------
#ifdef TarefasHabilitadas
strTarefas  Tarefas;
#endif

#ifdef EventosHabilitados
strEventos  Eventos;
#endif

#ifdef TemporizadoresHabilitados
strTemporizadores Temporizadores;
#endif


//Funções locais --------------------------------------------------------------
/*
 * Timer0_Recarga
 * Recarga do temporizador
 */
void Timer0_Recarga (void)
{
    Uint16 ValorDeCarga;

    T0IF = 0;
    
    ValorDeCarga.valor =  Timer0_ValorDeCarga;

    TMR0H = ValorDeCarga.bytes.byte1;
    TMR0L = ValorDeCarga.bytes.byte0;
}


//Funções publicas ------------------------------------------------------------
/*
 * Timer0_Inicializacao
 * Faz a inicializacao do Temporizador Timer0
 */
void Timer0_Inicializacao (void)
{
    Timer0_Config();
    Timer0_Recarga();    
    
    #if Timer0_Usa_Interrupcao == Sim
        #ifdef Timer0_Usa_InterrupcoesDeBaixaPrioridade
            INTCON2bits.TMR0IP = 0;
        #endif

        INTCONbits.TMR0IE = 1; 
    #endif

    T0CONbits.TMR0ON = 1;
    
    #ifdef TarefasHabilitadas
        #if Tarefa1_Habilitada == Sim
        Tarefas.TemporizadorDaTarefa1 = 0;        
        #endif

        #if Tarefa2_Habilitada == Sim
        Tarefas.TemporizadorDaTarefa2 = 0;      
        #endif        

        #if Tarefa3_Habilitada == Sim
        Tarefas.TemporizadorDaTarefa3 = 0;        
        #endif

        #if Tarefa4_Habilitada == Sim
        Tarefas.TemporizadorDaTarefa4 = 0;        
        #endif

        #if Tarefa5_Habilitada == Sim
        Tarefas.TemporizadorDaTarefa5 = 0;         
        #endif
    #endif

    #ifdef EventosHabilitados
        #if Eventos1_Habilitados == Sim
        Eventos.Eventos1.valor = 0;
        Eventos.TemporizadorDosEventos1 = 0;
        #endif

        #if Eventos2_Habilitados == Sim
        Eventos.Eventos2.valor = 0;
        Eventos.TemporizadorDosEventos2 = 0;        
        #endif

        #if Eventos3_Habilitados == Sim
        Eventos.Eventos3.valor = 0;
        Eventos.TemporizadorDosEventos3 = 0;        
        #endif       

        #if Eventos4_Habilitados == Sim
        Eventos.Eventos4.valor = 0;
        Eventos.TemporizadorDosEventos4 = 0;        
        #endif        

        #if Eventos5_Habilitados == Sim
        Eventos.Eventos5.valor = 0;
        Eventos.TemporizadorDosEventos5 = 0;
        #endif 
    #endif    
        
    //Temporizadores
        
    #ifdef TemporizadoresHabilitados

    Temporizadores.Eventos.valor = 0;
        
    #if Temporizador1_Habilitado == Sim
    Temporizadores.Temporizador1 = 0;
    #endif
        
    #if Temporizador2_Habilitado == Sim
    Temporizadores.Temporizador2 = 0;
    #endif

    #if Temporizador3_Habilitado == Sim
    Temporizadores.Temporizador3 = 0;
    #endif

    #if Temporizador4_Habilitado == Sim
    Temporizadores.Temporizador4 = 0;
    #endif

    #if Temporizador5_Habilitado == Sim
    Temporizadores.Temporizador5 = 0;
    #endif    

    #endif
}



#ifdef TemporizadoresHabilitados

    #if Temporizador1_Habilitado == Sim
    Uchar Temporizador1_ExisteEvento (void)
    {
        Uchar Retorno;

        Retorno = (Uchar)Temporizadores.Eventos.eTemporizador1;

        if (Temporizadores.Eventos.eTemporizador1 == Sim)
        {
            Temporizadores.Eventos.eTemporizador1 = Nao;
        }

        return Retorno;
    }
    #endif

    #if Temporizador2_Habilitado == Sim
    Uchar Temporizador2_ExisteEvento (void)
    {
        Uchar Retorno;

        Retorno = (Uchar)Temporizadores.Eventos.eTemporizador2;

        if (Temporizadores.Eventos.eTemporizador2 == Sim)
        {
            Temporizadores.Eventos.eTemporizador2 = Nao;
        }

        return Retorno;
    }
    #endif


    #if Temporizador3_Habilitado == Sim
    Uchar Temporizador3_ExisteEvento (void)
    {
        Uchar Retorno;

        Retorno = (Uchar)Temporizadores.Eventos.eTemporizador3;

        if (Temporizadores.Eventos.eTemporizador3 == Sim)
        {
            Temporizadores.Eventos.eTemporizador3 = Nao;
        }

        return Retorno;
    }
    #endif

    #if Temporizador4_Habilitado == Sim
    Uchar Temporizador4_ExisteEvento (void)
    {
        Uchar Retorno;

        Retorno = (Uchar)Temporizadores.Eventos.eTemporizador4;

        if (Temporizadores.Eventos.eTemporizador4 == Sim)
        {
            Temporizadores.Eventos.eTemporizador4 = Nao;
        }

        return Retorno;
    }
    #endif    
    

    #if Temporizador5_Habilitado == Sim
    Uchar Temporizador5_ExisteEvento (void)
    {
        Uchar Retorno;

        Retorno = (Uchar)Temporizadores.Eventos.eTemporizador5;

        if (Temporizadores.Eventos.eTemporizador5 == Sim)
        {
            Temporizadores.Eventos.eTemporizador5 = Nao;
        }

        return Retorno;
    }
    #endif    
#endif


/*
 * Timer0_ServicoDeInterrupcao()
 * Atendimento dos pedidos de interrupção do módulo
 */
void Timer0_ServicoDeInterrupcao (void)
{
    
    if (T0IE && T0IF)
    {
        Timer0_Recarga();
        
        
        //Eventos
        #ifdef EventosHabilitados
            #if Eventos1_Habilitados == Sim
            if (++Eventos.TemporizadorDosEventos1 == Eventos1_Tempo)
            {
                Eventos.TemporizadorDosEventos1 = 0;
                Eventos.Eventos1.valor = 0xFF;
            }
            #endif

            #if Eventos2_Habilitados == Sim
            if (++Eventos.TemporizadorDosEventos2 == Eventos2_Tempo)
            {
                Eventos.TemporizadorDosEventos2 = 0;
                Eventos.Eventos2.valor = 0xFF;
            }
            #endif        

            #if Eventos3_Habilitados == Sim
            if (++Eventos.TemporizadorDosEventos3 == Eventos3_Tempo)
            {
                Eventos.TemporizadorDosEventos3 = 0;
                Eventos.Eventos3.valor = 0xFF;
            }
            #endif        

            #if Eventos4_Habilitados == Sim
            if (++Eventos.TemporizadorDosEventos4 == Eventos4_Tempo)
            {
                Eventos.TemporizadorDosEventos4 = 0;
                Eventos.Eventos4.valor = 0xFF;
            }
            #endif        

            #if Eventos5_Habilitados == Sim
            if (++Eventos.TemporizadorDosEventos5 == Eventos5_Tempo)
            {
                Eventos.TemporizadorDosEventos5 = 0;
                Eventos.Eventos5.valor = 0xFF;
            }
            #endif
        #endif

        
        //Tarefas
        #ifdef TarefasHabilitadas
            #if Tarefa1_Habilitada == Sim
            if (++Tarefas.TemporizadorDaTarefa1 == Tarefa1_Tempo)
            {
                Tarefas.TemporizadorDaTarefa1 = 0;
                Tarefa1();
            }
            #endif

            #if Tarefa2_Habilitada == Sim
            if (++Tarefas.TemporizadorDaTarefa2 == Tarefa2_Tempo)
            {
                Tarefas.TemporizadorDaTarefa2 = 0;
                Tarefa2();
            }
            #endif

            #if Tarefa3_Habilitada == Sim
            if (++Tarefas.TemporizadorDaTarefa3 == Tarefa3_Tempo)
            {
                Tarefas.TemporizadorDaTarefa3 = 0;
                Tarefa3();
            }
            #endif        

            #if Tarefa4_Habilitada == Sim
            if (++Tarefas.TemporizadorDaTarefa4 == Tarefa4_Tempo)
            {
                Tarefas.TemporizadorDaTarefa4 = 0;
                Tarefa4();
            }
            #endif       

            #if Tarefa5_Habilitada == Sim
            if (++Tarefas.TemporizadorDaTarefa5 == Tarefa5_Tempo)
            {
                Tarefas.TemporizadorDaTarefa5 = 0;
                Tarefa5();
            }
            #endif
        #endif
        
        
        //Temporizadores
        #ifdef TemporizadoresHabilitados
            #if Temporizador1_Habilitado == Sim
            if (Temporizadores.Temporizador1 > 0)
            {
                if(--Temporizadores.Temporizador1 == 0) Temporizadores.Eventos.eTemporizador1 = Sim;
            }
            #endif

            #if Temporizador2_Habilitado == Sim
            if (Temporizadores.Temporizador2 > 0)
            {
                if(--Temporizadores.Temporizador2 == 0) Temporizadores.Eventos.eTemporizador2 = Sim;
            }
            #endif        

            #if Temporizador3_Habilitado == Sim
            if (Temporizadores.Temporizador3 > 0)
            {
                if(--Temporizadores.Temporizador3 == 0) Temporizadores.Eventos.eTemporizador3 = Sim;
            }
            #endif        

            #if Temporizador4_Habilitado == Sim
            if (Temporizadores.Temporizador4 > 0)
            {
                if(--Temporizadores.Temporizador4 == 0) Temporizadores.Eventos.eTemporizador4 = Sim;
            }
            #endif        

            #if Temporizador5_Habilitado == Sim
            if (Temporizadores.Temporizador5 > 0)
            {
                if(--Temporizadores.Temporizador5 == 0) Temporizadores.Eventos.eTemporizador5 = Sim;
            }
            #endif        
        #endif
    }
}

