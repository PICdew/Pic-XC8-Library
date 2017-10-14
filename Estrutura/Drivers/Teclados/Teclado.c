/* 
 * Arquivo: Teclado.c
 * Autor:   JABNeto
 * Versao:  150710
 */


#include "Teclado.h"


//Alocação de memória para o módulo -------------------------------------------
#if Teclado_FuncoesEstendidas == Sim
strTeclado       Teclado;
#endif



//Funções locais do módulo ----------------------------------------------------




//Funções públicas do módulo --------------------------------------------------
void Teclado_Inicializacao (void)
{
    ANSELA = 0;
    
    #if Teclado_FuncoesEstendidas == Sim
        Teclado.Controle.Valor = 0;
        Teclado.Eventos.Valor = 0;
    #endif
}


#if Teclado_FuncoesEstendidas == Sim
/*
 * Teclado_Monitor
 * Faz o monitoramento do teclado no modo estendido
 */
void Teclado_Monitor(void)
{
    #if Teclado_ModoDeCaptura == DIRETO
    {
        if (S1 == Pressionada) Teclado.Eventos.TeclaS1 = Sim;
        if (S2 == Pressionada) Teclado.Eventos.TeclaS2 = Sim;
        if (S3 == Pressionada) Teclado.Eventos.TeclaS3 = Sim;
        if (S4 == Pressionada) Teclado.Eventos.TeclaS4 = Sim;
        if (S5 == Pressionada) Teclado.Eventos.TeclaS5 = Sim;        
    }
    #else
    {
        if ((PORTA | 0b11000100) == 0xFF) Teclado.Controle.Recuo = Sim;
        else
        {
            if (Teclado.Controle.Recuo == Sim)
            {
                Teclado.Controle.Recuo = Nao;
                
                if (S1 == Pressionada) Teclado.Eventos.TeclaS1 = Sim;
                else if (S2 == Pressionada) Teclado.Eventos.TeclaS2 = Sim;
                else if (S3 == Pressionada) Teclado.Eventos.TeclaS3 = Sim;              
                else if (S4 == Pressionada) Teclado.Eventos.TeclaS4 = Sim;                
                else if (S5 == Pressionada) Teclado.Eventos.TeclaS5 = Sim;
            }
        }
    }
    #endif
}

/*
 * Tecla_Pressionada
 * Detecta se existe evento para a tecla fornecida
 * Retorno:
 * Nao (0): Não existe evento de tecla pressionda para a tecla fornecida
 * Sim (1): Existe evento de tecla pressionda para a tecla fornecida
 * 
 * Tecla: corresponde ao numero da tecla que se deseja detectar a existencia
 * do evento. (1,2,3,4 ou 5). O evento é removido após a detecção e, somente
 * para a tecla em teste.
 * 
 * Ex de aplicação. if (Tecla_Pressionada(1) == Sim)
 */
Uchar Tecla_Pressionada (Uchar Tecla)
{
    Uchar Retorno = Nao;

    switch (Tecla)
    {
        case 1:
            if (Teclado.Eventos.TeclaS1 == Sim)
            {
                Teclado.Eventos.TeclaS1 = Nao;
                Retorno = Sim;
            }
            break;

        case 2:
            if (Teclado.Eventos.TeclaS2 == Sim)
            {
                Teclado.Eventos.TeclaS2 = Nao;
                Retorno = Sim;
            }
            break;

        case 3:
            if (Teclado.Eventos.TeclaS3 == Sim)
            {
                Teclado.Eventos.TeclaS3 = Nao;
                Retorno = Sim;
            }
            break;

        case 4:
            if (Teclado.Eventos.TeclaS4 == Sim)
            {
                Teclado.Eventos.TeclaS4 = Nao;
                Retorno = Sim;
            }
            break;
            
        case 5:
            if (Teclado.Eventos.TeclaS5 == Sim)
            {
                Teclado.Eventos.TeclaS5 = Nao;
                Retorno = Sim;
            }
    }
    return Retorno;
}

#endif




