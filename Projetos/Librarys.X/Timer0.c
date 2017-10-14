/* 
 * Arquivo: Timer 0.c
 * Autor:   JABNeto
 * Versao:  150710
 */

#include <xc.h>
#include "Timer0.h"


//Alocação de memória para o módulo--------------------------------------------



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
}



#if Timer0_Usa_Interrupcao == Sim
#include "Timer0 Tarefas.h"

/*
 * Timer0_ServicoDeInterrupcao()
 * Atendimento dos pedidos de interrupção do módulo
 */
void Timer0_ServicoDeInterrupcao (void)
{
    if (T0IE && T0IF)
    {
        Timer0_Recarga();
        Timer0_Tarefas();
    }
}

#endif
