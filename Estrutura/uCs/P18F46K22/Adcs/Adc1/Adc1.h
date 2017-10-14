/* 
 *  Arquivo:    Adc1.h
 *  uC:         PIC18F46K22
 *  Autor:      JABNeto
 *  Versão:     161011 
 */

#ifndef ADC1_H
#define	ADC1_H

#include "Definicoes Gerais.h"
#include "Oscilador.h"
#include "Ports.h"


//Definições do módulo --------------------------------------------------------
#define ADC1_RESOLUCAO_10BITS

//Canais
#define ADC1_CANAL0                     0
#define ADC1_CANAL1                     1
#define ADC1_CANAL2                     2
#define ADC1_CANAL3                     3
#define ADC1_CANAL4                     4
#define ADC1_CANAL5                     5
#define ADC1_CANAL6                     6
#define ADC1_CANAL7                     7
#define ADC1_CANAL8                     8
#define ADC1_CANAL9                     9
#define ADC1_CANAL10                    10
#define ADC1_CANAL11                    11
#define ADC1_CANAL12                    12
#define ADC1_CANAL13                    13
#define ADC1_CANAL14                    14
#define ADC1_CANAL15                    15
#define ADC1_CANAL16                    16
#define ADC1_CANAL17                    17
#define ADC1_CANAL18                    18
#define ADC1_CANAL19                    19
#define ADC1_CANAL20                    20
#define ADC1_CANAL21                    21
#define ADC1_CANAL22                    22
#define ADC1_CANAL23                    23
#define ADC1_CANAL24                    24
#define ADC1_CANAL25                    25
#define ADC1_CANAL26                    26
#define ADC1_CANAL27                    27
#define ADC1_CANAL_CTMU                 29
#define ADC1_CANAL_DAC                  30
#define ADC1_CANAL_FVR                  31


//Tensão de Referência Positiva
#define ADC1_VREF_POSITIVA_AVDD         0
#define ADC1_VREF_POSITIVA_VREF         1       
#define ADC1_VREF_POSITIVA_FVR          2

//Tensão de Referência Negativa
#define ADC1_VREF_NEGATIVA_AVSS         0
#define ADC1_VREF_NEGATIVA_VREF         1   

//Formatação
#define ADC1_FORMATACAO_ESQUERDA        0
#define ADC1_FORMATACAO_DIREITA         1

//Especial Event Trigger
#define ADC1_TRIGGER_CCP5               0
#define ADC1_TRIGGER_CTMU               1

//Aquisição
#define ADC1_TAD_0                      0
#define ADC1_TAD_2                      1
#define ADC1_TAD_4                      2
#define ADC1_TAD_6                      3
#define ADC1_TAD_8                      4
#define ADC1_TAD_12                     5     
#define ADC1_TAD_16                     6
#define ADC1_TAD_20                     7

//Frequencia de clock
#define ADC1_FOSC_2                     0
#define ADC1_FOSC_4                     4
#define ADC1_FOSC_8                     1
#define ADC1_FOSC_16                    5
#define ADC1_FOSC_32                    2
#define ADC1_FOSC_64                    6
#define ADC1_FRC                        7


//Pinos de controle do conversor
#define Adc1_ConfiguraAN0()             ConfiguraPinoRA0_Analogico()
#define Adc1_ConfiguraAN1()             ConfiguraPinoRA1_Analogico()
#define Adc1_ConfiguraAN2()             ConfiguraPinoRA2_Analogico()
#define Adc1_ConfiguraAN3()             ConfiguraPinoRA3_Analogico()
#define Adc1_ConfiguraAN4()             ConfiguraPinoRA5_Analogico()
#define Adc1_ConfiguraAN5()             ConfiguraPinoRE0_Analogico()
#define Adc1_ConfiguraAN6()             ConfiguraPinoRE1_Analogico()
#define Adc1_ConfiguraAN7()             ConfiguraPinoRE2_Analogico()
#define Adc1_ConfiguraAN8()             ConfiguraPinoRB2_Analogico()
#define Adc1_ConfiguraAN9()             ConfiguraPinoRB3_Analogico()
#define Adc1_ConfiguraAN10()            ConfiguraPinoRB1_Analogico()
#define Adc1_ConfiguraAN11()            ConfiguraPinoRB4_Analogico()
#define Adc1_ConfiguraAN12()            ConfiguraPinoRB0_Analogico()
#define Adc1_ConfiguraAN13()            ConfiguraPinoRB5_Analogico()
#define Adc1_ConfiguraAN14()            ConfiguraPinoRC2_Analogico()
#define Adc1_ConfiguraAN15()            ConfiguraPinoRC3_Analogico()
#define Adc1_ConfiguraAN16()            ConfiguraPinoRC4_Analogico()
#define Adc1_ConfiguraAN17()            ConfiguraPinoRC5_Analogico()
#define Adc1_ConfiguraAN18()            ConfiguraPinoRC6_Analogico()
#define Adc1_ConfiguraAN19()            ConfiguraPinoRC7_Analogico()
#define Adc1_ConfiguraAN20()            ConfiguraPinoRD0_Analogico()
#define Adc1_ConfiguraAN21()            ConfiguraPinoRD1_Analogico()
#define Adc1_ConfiguraAN22()            ConfiguraPinoRD2_Analogico()
#define Adc1_ConfiguraAN23()            ConfiguraPinoRD3_Analogico()
#define Adc1_ConfiguraAN24()            ConfiguraPinoRD4_Analogico()
#define Adc1_ConfiguraAN25()            ConfiguraPinoRD6_Analogico()
#define Adc1_ConfiguraAN26()            ConfiguraPinoRD6_Analogico()
#define Adc1_ConfiguraAN27()            ConfiguraPinoRD7_Analogico()


#include "Adc1 Config.h"

//Macros ----------------------------------------------------------------------
#define ConfiguraAdc1(Freq,Tad,Form,Vp,Vn)     {ADCON2bits.ADCS = Freq;\
                                                ADCON2bits.ACQT = Tad;\
                                                ADCON2bits.ADFM = Form;\
                                                ADCON1bits.PVCFG = Vp;\
                                                ADCON1bits.NVCFG = Vp;}                                               

#define Adc1_SelecionaCanal(Canal)              ADCON0bits.CHS = Canal
#define Adc1_IniciaConversao()                  ADCON0bits.GO = Sim


//Processamento das definições ------------------------------------------------

//Ajuste da frequencia de operação do módulo
#if (Fosc() > 32000000)
    #define Adc1_Adcs   ADC1_FOSC_64
#elif (Fosc() > 16000000)
    #define Adc1_Adcs   ADC1_FOSC_32
#elif (Fosc() > 8000000)
    #define Adc1_Adcs   ADC1_FOSC_16
#elif (Fosc() > 4000000)
    #define Adc1_Adcs   ADC1_FOSC_8
#elif (Fosc() > 2000000)
    #define Adc1_Adcs   ADC1_FOSC_4
#elif (Fosc() > 1000000)
    #define Adc1_Adcs   ADC1_FOSC_2
#else
    #define Adc1_Adcs   ADC1_FOSC_FRC
#endif

//Tempo da amostra
#define Adc1_Acqt       ADC1_TAD_8


// Event Trigger
#if Adc1_Modo_EventTrigger == Sim
    #if Adc1_FonteDoTrigger == ADC1_TRIGGER_CCP5
    #include "Ccp5.h"
    #elif Adc1_FonteDoTrigger == ADC1_TRIGGER_CTMU
    #include "Ctmu.h"
    #endif

    #define Adc1_Usa_Interrupcao                            Sim
    #define Adc1_PrioridadeDaInterrupcao                    Alta   
#else
    #define Adc1_Usa_Interrupcao                            Nao
    #define Adc1_PrioridadeDaInterrupcao                    Alta    
#endif


#if Adc1_Usa_Interrupcao == Sim
    #if Adc1_PrioridadeDaInterrupcao == Alta
        #define Adc1_Usa_InterrupcoesDeAltaPrioridade
        #ifndef Cpu_Usa_InterrupcoesDeAltaPrioridade
            #define Cpu_Usa_InterrupcoesDeAltaPrioridade
        #endif
    #else
        #define Adc1_Usa_InterrupcoesDeBaixaPrioridade
        #ifndef Cpu_Usa_InterrupcoesDeBaixaPrioridade
            #define Cpu_Usa_InterrupcoesDeBaixaPrioridade
        #endif
    #endif
#endif


//estruturas do módulo -------------------------------------------------------
#if Adc1_BufferDeAmostras > 0
typedef struct
{
    struct
    {
        Uint    Amostras[Adc1_BufferDeAmostras];
        Uchar   NumeroDeAmostras;
        Uchar   Index;
        Ulong   Somatoria;
        float   Media;
    }Buffer;   
}strAdc1;
#endif



//Publicação das funções e variáveis do módulo -------------------------------------------
void Adc1_Inicializacao (void);

#if Adc1_Usa_Interrupcao == Sim
void Adc1_ServicoDeInterrupcao (void);
#endif

#if Adc1_BufferDeAmostras > 0
void Adc1_ResetaBuffer (void);
Uchar Adc1_PreencheBuffer (void);
void Adc1_IniciaAquisicao (Uchar NumAmostras);

extern strAdc1 Adc1;
#else
Uint Adc1_ConverteCanal(Uchar Canal);
#endif


#endif	/* ADC1_H */

