/* 
 * Arquivo: Oscilador.h
 * uC:      PIC18F46K22
 * Autor:   JABNeto
  * Versão:  10.09.2017
 */

#ifndef OSCILADOR_H
#define	OSCILADOR_H

#include "Definicoes Gerais.h"



//Tipos do oscilador primario -------------------------------------------------
#define XTAL_LP                                0
#define XTAL_XT                                1
#define XTAL_HS_MP                             2
#define XTAL_HS_HP                             3
#define EC_HP_CLOCK_OUT_OSC2                   4                                    
#define EC_HP                                  5 
#define RC_CLOCK_OUT_OSC2                      6
#define RC                                     7
#define INTOSC                                 8
#define INTOSC_CLOCK_OUT_OSC2                  9
#define EC_MP_CLOCK_OUT_OSC2                   10                                    
#define EC_MP                                  11 
#define EC_LP_CLOCK_OUT_OSC2                   12                                    
#define EC_LP                                  13 

#define OSC_INTERNO_HF                         0
#define OSC_INTERNO_MF                         1
#define OSC_INTERNO_LF                         2

#define HF_31KHz                               31250
#define HF_250KHz                              250000
#define HF_500KHz                              500000
#define HF_1MHz                                1000000
#define HF_2MHz                                2000000
#define HF_4MHz                                4000000
#define HF_8MHz                                8000000
#define HF_16MHz                               16000000
#define MF_31KHz                               31250
#define MF_250KHz                              250000
#define MF_500KHz                              500000
#define LF_31KHz                               31250


#include "Oscilador Config.h"


//Processamento das definicoes do módulo -------------------------------------

#if OsciladorPrimario_Utilizado == Sim
    #if Oscilador_PllAtivado == Sim
    #define FrequenciaDoClockPrimario   OsciladorPrimario_Frequencia * 4
    #else    
    #define FrequenciaDoClockPrimario   OsciladorPrimario_Frequencia
    #endif    
#else
    #if Oscilador_PllAtivado == Sim
        #define FrequenciaDoClockPrimario    OsciladorInterno_Frequencia * 4
    #else
        #define FrequenciaDoClockPrimario    OsciladorInterno_Frequencia
    #endif
#endif


#define _XTAL_FREQ                              FrequenciaDoClockPrimario
#define Fosc()                                  FrequenciaDoClockPrimario
#define Fop()                                   Fosc()/4


//Publicação das funções do módulo -------------------
void Oscilador_Inicializacao (void);

#endif	/* OSCILADOR_H */

