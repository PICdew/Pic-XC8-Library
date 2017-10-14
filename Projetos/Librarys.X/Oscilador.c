/* 
 * Arquivo: Oscilador.c
 * uC:      PIC18F46K22
 * Autor:   JABNeto
 * Versão:  10.09.2017
 */

#include <xc.h>
#include "Oscilador.h"


//Bits de Configuração
#pragma config PRICLKEN = ON    // Clock primario sempre habilitado
#pragma config PLLCFG = OFF     // Pll habilitado por software
#pragma config FCMEN = ON       // Fail-Safe Clock Habilitado 
#pragma config IESO = OFF       // Internal/External Oscillator Switchover Desligado


#if OsciladorPrimario_Utilizado == Sim
#pragma config FOSC = OsciladorPrimario_Tipo
#else
#pragma config FOSC = OsciladorInterno_Tipo
#endif



//Alocação de memória para o módulo -------------------------------------------




//Funções do módulo -----------------------------------------------------------

/*
 * Oscilador_Inicializacao
 * 
 * Faz a inicialização do módulo oscilador. Essa função deve ser chamadada
 * na inicialização do sistema.
 */
void Oscilador_Inicializacao (void)
{
    OSCCONbits.SCS = 0;
    
#if OsciladorInterno_Frequencia == HF_16MHz
    OSCCONbits.IRCF = 7;
#elif  OsciladorInterno_Frequencia == HF_8MHz
    OSCCONbits.IRCF = 6;
#elif  OsciladorInterno_Frequencia == HF_4MHz
    OSCCONbits.IRCF = 5;
#elif  OsciladorInterno_Frequencia == HF_2MHz
    OSCCONbits.IRCF = 4;    
#elif  OsciladorInterno_Frequencia == HF_1MHz
    OSCCONbits.IRCF = 3;
#elif  OsciladorInterno_Frequencia == HF_500KHz
    OSCCONbits.IRCF = 2;       
    OSCTUNEbits.INTSRC = 1; 
    OSCCON2bits.MFIOSEL = 0;
#elif  OsciladorInterno_Frequencia == HF_250KHz
    OSCCONbits.IRCF = 1;       
    OSCTUNEbits.INTSRC = 1; 
    OSCCON2bits.MFIOSEL = 0;     
#elif  OsciladorInterno_Frequencia == HF_31KHz
    OSCCONbits.IRCF = 0;       
    OSCTUNEbits.INTSRC = 1; 
    OSCCON2bits.MFIOSEL = 0;   
#elif  OsciladorInterno_Frequencia == MF_500KHz
    OSCCONbits.IRCF = 2;       
    OSCTUNEbits.INTSRC = 1; 
    OSCCON2bits.MFIOSEL = 1; 
#elif  OsciladorInterno_Frequencia == MF_250KHz
    OSCCONbits.IRCF = 1;       
    OSCTUNEbits.INTSRC = 1; 
    OSCCON2bits.MFIOSEL = 1;  
#elif  OsciladorInterno_Frequencia == MF_31KHz
    OSCCONbits.IRCF = 0;       
    OSCTUNEbits.INTSRC = 1; 
    OSCCON2bits.MFIOSEL = 1;    
#elif  OsciladorInterno_Frequencia == LF_31KHz
    OSCCONbits.IRCF = 0;       
    OSCTUNEbits.INTSRC = 0; 
    OSCCON2bits.MFIOSEL = 1;       
#endif
    
    
#if Oscilador_PllAtivado == Sim
    OSCTUNEbits.PLLEN= 1; 
#else
    OSCTUNEbits.PLLEN= 0; 
#endif    
}












