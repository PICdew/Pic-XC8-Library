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
#include "Tarefas.h"
#include "Eventos Config.h"
#include "Temporizadores Config.h"


//Definições do módulo --------------------------------------------------------
#define Timer0_Usa_Interrupcao                          Sim
#define Timer0_PrioridadeDaInterrupcao                  Alta
#define Timer0_Tempo                                    1000


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

//Tarefas
#if Tarefa1_Habilitada == Sim || Tarefa2_Habilitada == Sim || \
    Tarefa3_Habilitada == Sim || Tarefa4_Habilitada == Sim || \
    Tarefa5_Habilitada == Sim

#define TarefasHabilitadas
typedef struct
{
    #if Tarefa1_Habilitada == Sim
    Uint TemporizadorDaTarefa1;
    #endif

    #if Tarefa2_Habilitada == Sim
    Uint TemporizadorDaTarefa2;
    #endif    

    #if Tarefa3_Habilitada == Sim
    Uint TemporizadorDaTarefa3;
    #endif    

    #if Tarefa4_Habilitada == Sim
    Uint TemporizadorDaTarefa4;
    #endif

    #if Tarefa5_Habilitada == Sim
    Uint TemporizadorDaTarefa5;
    #endif    
}strTarefas;
#endif


//Eventos
#if Eventos1_Habilitados == Sim || Eventos2_Habilitados == Sim || \
    Eventos3_Habilitados == Sim || Eventos4_Habilitados == Sim || \
    Eventos5_Habilitados == Sim

#define EventosHabilitados

typedef struct
{
    #if Eventos1_Habilitados == Sim
    strEventos1 Eventos1;
    Uint        TemporizadorDosEventos1;
    #endif

    #if Eventos2_Habilitados == Sim
    strEventos2 Eventos2;
    Uint        TemporizadorDosEventos2;
    #endif
   
    #if Eventos3_Habilitados == Sim
    strEventos3 Eventos3;
    Uint        TemporizadorDosEventos3;
    #endif

    #if Eventos4_Habilitados == Sim
    strEventos4 Eventos4;
    Uint        TemporizadorDosEventos4;
    #endif    
    
    #if Eventos5_Habilitados == Sim
    strEventos5 Eventos5;
    Uint        TemporizadorDosEventos5;
    #endif
}strEventos;

#endif


//Temporizadores
#if Temporizador1_Habilitado == Sim || Temporizador2_Habilitado == Sim || \
    Temporizador3_Habilitado == Sim || Temporizador4_Habilitado == Sim || \
    Temporizador5_Habilitado == Sim

#define TemporizadoresHabilitados

typedef struct
{
    #if Temporizador1_Habilitado == Sim
    Uint Temporizador1;
    #endif    

    #if Temporizador2_Habilitado == Sim
    Uint Temporizador2;
    #endif

    #if Temporizador3_Habilitado == Sim
    Uint Temporizador3;
    #endif 

    #if Temporizador4_Habilitado == Sim
    Uint Temporizador4;
    #endif 

    #if Temporizador5_Habilitado == Sim
    Uint Temporizador5;
    #endif     

    union
    {
        Uchar valor;
        
        struct
        {
            Uint eTemporizador1:1;
            Uint eTemporizador2:1;
            Uint eTemporizador3:1;
            Uint eTemporizador4:1;
            Uint eTemporizador5:1;            
        };
    }Eventos;
}strTemporizadores;


#if Temporizador1_Habilitado == Sim
#define Temporizador1Start(Tempo)      Temporizadores.Temporizador1 = Tempo
#endif

#if Temporizador2_Habilitado == Sim
#define Temporizador2Start(Tempo)      Temporizadores.Temporizador2 = Tempo
#endif

#if Temporizador3_Habilitado == Sim
#define Temporizador1Start(Tempo)      Temporizadores.Temporizador3 = Tempo
#endif

#if Temporizador4_Habilitado == Sim
#define Temporizador4Start(Tempo)      Temporizadores.Temporizador4 = Tempo
#endif

#if Temporizador5_Habilitado == Sim
#define Temporizador5Start(Tempo)      Temporizadores.Temporizador5 = Tempo
#endif

#endif

//Publicação das variáveis e funções do módulo --------------------------------
void Timer0_Inicializacao (void);
void Timer0_ServicoDeInterrupcao (void);


#ifdef EventosHabilitados
extern strEventos  Eventos;
#endif


#if Temporizador1_Habilitado == Sim
Uchar Temporizador1_ExisteEvento (void);
#endif

#if Temporizador2_Habilitado == Sim
Uchar Temporizador2_ExisteEvento (void);
#endif        
        
#if Temporizador3_Habilitado == Sim
Uchar Temporizador3_ExisteEvento (void);
#endif        
        
#if Temporizador4_Habilitado == Sim
Uchar Temporizador4_ExisteEvento (void);
#endif

#if Temporizador5_Habilitado == Sim
Uchar Temporizador5_ExisteEvento (void);
#endif

#ifdef TemporizadoresHabilitados
extern strTemporizadores Temporizadores;
#endif


#endif	/* TIMER_0_H */

