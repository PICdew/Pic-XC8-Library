/* 
 * Arquivo: Timer 0.h
 * Autor:   JABNeto
 * Versao:  150710
 */

#ifndef TIMER_0_H
#define	TIMER_0_H

#include <xc.h>
#include "Definicoes Gerais.h"
#include "Oscilador.h"


//Definições do módulo --------------------------------------------------------
#define Timer0_Usa_Interrupcao                          Sim
#define Timer0_PrioridadeDaInterrupcao                  Alta

#include "Timer0 Config.h"


//Processamento das definicoes-------------------------------------------------
#if Timer0_Usa_Interrupcao == Sim
    #if Timer0_PrioridadeDaInterrupcao == Alta
        #define Timer0_Usa_InterrupcoesDeAltaPrioridade
        #ifndef Cpu_Usa_InterrupcoesDeAltaPrioridade
            #define Cpu_Usa_InterrupcoesDeAltaPrioridade
        #endif
    #else
        #define Timer0_Usa_InterrupcoesDeBaixaPrioridade
        #ifndef Cpu_Usa_InterrupcoesDeBaixaPrioridade
            #define Cpu_Usa_InterrupcoesDeBaixaPrioridade
        #endif
    #endif
#endif



//Valor de carga
#define Contagens(x)            Timer0_Tempo * (Fop()/1000000)/x

#if Contagens(1) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 1;}
#define Timer0_ValorDeCarga     65535 - Contagens(1) + 1
#elif Contagens(2) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 0; T0CONbits.T0PS = 0;}
#define Timer0_ValorDeCarga     65535 - Contagens(2) + 1
#elif Contagens(4) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 0; T0CONbits.T0PS = 1;}
#define Timer0_ValorDeCarga     65535 - Contagens(4) + 1
#elif Contagens(8) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 0; T0CONbits.T0PS = 2;}
#define Timer0_ValorDeCarga     65535 - Contagens(8) + 1
#elif Contagens(16) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 0; T0CONbits.T0PS = 3;}
#define Timer0_ValorDeCarga     65535 - Contagens(16) + 1
#elif Contagens(32) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 0; T0CONbits.T0PS = 4;}
#define Timer0_ValorDeCarga     65535 - Contagens(32) + 1
#elif Contagens(64) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 0; T0CONbits.T0PS = 5;}
#define Timer0_ValorDeCarga     65535 - Contagens(64) + 1
#elif Contagens(128) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 0; T0CONbits.T0PS = 6;}
#define Timer0_ValorDeCarga     65535 - Contagens(128) + 1
#elif Contagens(256) <= 65500
#define Timer0_Config()   {T0CONbits.T0CS = 0; T0CONbits.T08BIT = 0; T0CONbits.PSA = 0; T0CONbits.T0PS = 7;}
#define Timer0_ValorDeCarga     65535 - Contagens(256) + 1
#endif



//Publicação das funções do módulo --------------------------------------------
void Timer0_Inicializacao (void);
void Timer0_ServicoDeInterrupcao (void);


//Publicacão das variáveis do módulo ------------------------------------------



#endif	/* TIMER_0_H */

