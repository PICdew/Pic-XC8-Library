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

//Definicoes do módulo --------------------------------------------------------

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

#define Contagens1          Contagens(1)
#define Contagens2          Contagens(2)
#define Contagens4          Contagens(4)
#define Contagens8          Contagens(8)
#define Contagens16         Contagens(16)
#define Contagens32         Contagens(32)
#define Contagens64         Contagens(64)
#define Contagens128        Contagens(128)
#define Contagens256        Contagens(256)


#if Contagens1 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 0;}
#define Timer0_ValorDeCarga     65535 - Contagens1 + 1
#elif Contagens2 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 1; T0CONbits.T0PS = 0;}
#define Timer0_ValorDeCarga     65535 - Contagens2 + 1
#elif Contagens4 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 1; T0CONbits.T0PS = 1;}
#define Timer0_ValorDeCarga     65535 - Contagens4 + 1
#elif Contagens8 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 1; T0CONbits.T0PS = 2;}
#define Timer0_ValorDeCarga     65535 - Contagens8 + 1
#elif Contagens16 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 1; T0CONbits.T0PS = 3;}
#define Timer0_ValorDeCarga     65535 - Contagens16 + 1
#elif Contagens32 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 1; T0CONbits.T0PS = 4;}
#define Timer0_ValorDeCarga     65535 - Contagens32 + 1
#elif Contagens64 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 1; T0CONbits.T0PS = 5;}
#define Timer0_ValorDeCarga     65535 - Contagens64 + 1
#elif Contagens128 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 1; T0CONbits.T0PS = 6;}
#define Timer0_ValorDeCarga     65535 - Contagens128 + 1
#elif Contagens256 <= 65500
#define Timer0_Config()   {T0CONbits.T08BIT = 1; T0CONbits.PSA = 1; T0CONbits.T0PS = 7;}
#define Timer0_ValorDeCarga     65535 - Contagens256 + 1
#endif



//Publicação das funções do módulo --------------------------------------------
void Timer0_Inicializacao (void);

#if Timer0_Usa_Interrupcao == Sim
void Timer0_ServicoDeInterrupcao (void);
#endif

//Publicacão das variáveis do módulo ------------------------------------------



#endif	/* TIMER_0_H */

