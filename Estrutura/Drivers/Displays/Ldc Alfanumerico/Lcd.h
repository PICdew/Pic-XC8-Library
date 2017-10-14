/* 
 * Arquivo: Lcd.h
 * Versão:  24.06.2017
 * Autor:   JABNeto
 */

#ifndef LCD_H
#define	LCD_H

#include "Definicoes Gerais.h"
#include "Ports.h"
#include "Oscilador.h"

//Definições do módulo --------------------------------------------------------
#define     LCD_ENDERECO_LINHA1                         0x00
#define     LCD_ENDERECO_LINHA2                         0x40
#define     LCD_ENDERECO_LINHA3                         0x14
#define     LCD_ENDERECO_LINHA4                         0x54


#include "Lcd Config.h"


//Processamento das definições ------------------------------------------------
#define BackLight_ValorDeCarga                 Lcd_TempoDoModoGreen * 1000

//Configura Port de dados
#if Lcd_NumeroDeBitsDaInterface == 8

    #if Lcd_PortUtilizado == PortA
        #ifdef ConfiguraPortA_Saidas
        #define ConfiguraPort()     ConfiguraPortA_Saidas(0)
        #define Lcd_PortWr(x)       PortA_Wr(x)
        #define Lcd_PortLatch()     LATA    
        #endif
    #endif

    #if Lcd_PortUtilizado == PortB
        #ifdef ConfiguraPortB_Saidas
        #define ConfiguraPort()     ConfiguraPortB_Saidas(0)
        #define Lcd_PortWr(x)       PortB_Wr(x)
        #define Lcd_PortLatch()     LATB   
        #endif
    #endif        
        
    #if Lcd_PortUtilizado == PortC
        #ifdef ConfiguraPortC_Saidas
        #define ConfiguraPort()     ConfiguraPortC_Saidas(0)
        #define Lcd_PortWr(x)       PortC_Wr(x)
        #define Lcd_PortLatch()     LATC   
        #endif
    #endif  
        
    #if Lcd_PortUtilizado == PortD
        #ifdef ConfiguraPortD_Saidas
        #define ConfiguraPort()     ConfiguraPortD_Saidas(0)
        #define Lcd_PortWr(x)       PortD_Wr(x)
        #define Lcd_PortLatch()     LATD   
        #endif
    #endif         
        
    #if Lcd_PortUtilizado == PortE
        #ifdef ConfiguraPortE_Saidas
        #define ConfiguraPort()     ConfiguraPortE_Saidas(0)]
        #define Lcd_PortWr(x)       PortE_Wr(x)
        #define Lcd_PortLatch()     LATE   
        #endif
    #endif  

    #if Lcd_PortUtilizado == PortF
        #ifdef ConfiguraPortF_Saidas
        #define ConfiguraPort()     ConfiguraPortF_Saidas(0)
        #define Lcd_PortWr(x)       PortF_Wr(x)
        #define Lcd_PortLatch()     LATF   
        #endif
    #endif  

    #if Lcd_PortUtilizado == PortG
        #ifdef ConfiguraPortG_Saidas
        #define ConfiguraPort()     ConfiguraPortG_Saidas(0)
        #define Lcd_PortWr(x)       PortG_Wr(x)
        #define Lcd_PortLatch()     LATG   
        #endif
    #endif

    #if Lcd_PortUtilizado == PortH
        #ifdef ConfiguraPortH_Saidas
        #define ConfiguraPort()     ConfiguraPortH_Saidas(0)
        #define Lcd_PortWr(x)       PortH_Wr(x)
        #define Lcd_PortLatch()     LATH   
        #endif
    #endif 
#endif


#if Lcd_NumeroDeBitsDaInterface == 4

    #if Lcd_NibbleUtilizado == Low

        #if Lcd_PortUtilizado == PortA
            #ifdef ConfiguraPortA_NibbleLowSaidas
            #define ConfiguraPort()     ConfiguraPortA_NibbleLowSaidas(0)
            #define Lcd_PortWr(x)       PortA_Wr(x)
            #define Lcd_PortLatch()     LATA   
            #endif
        #endif

        #if Lcd_PortUtilizado == PortB
            #ifdef ConfiguraPortB_NibbleLowSaidas
            #define ConfiguraPort()     ConfiguraPortB_NibbleLowSaidas(0)
            #define Lcd_PortWr(x)       PortB_Wr(x)
            #define Lcd_PortLatch()     LATB 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortC
            #ifdef ConfiguraPortC_NibbleLowSaidas
            #define ConfiguraPort()     ConfiguraPortC_NibbleLowSaidas(0)
            #define Lcd_PortWr(x)       PortC_Wr(x)
            #define Lcd_PortLatch()     LATC 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortD
            #ifdef ConfiguraPortD_NibbleLowSaidas
            #define ConfiguraPort()     ConfiguraPortD_NibbleLowSaidas(0)
            #define Lcd_PortWr(x)       PortD_Wr(x)
            #define Lcd_PortLatch()     LATD 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortE
            #ifdef ConfiguraPortE_NibbleLowSaidas
            #define ConfiguraPort()     ConfiguraPortE_NibbleLowSaidas(0)
            #define Lcd_PortWr(x)       PortE_Wr(x)
            #define Lcd_PortLatch()     LATE 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortF
            #ifdef ConfiguraPortF_NibbleLowSaidas
            #define ConfiguraPort()     ConfiguraPortF_NibbleLowSaidas(0)
            #define Lcd_PortWr(x)       PortF_Wr(x)
            #define Lcd_PortLatch()     LATF 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortG
            #ifdef ConfiguraPortG_NibbleLowSaidas
            #define ConfiguraPort()     ConfiguraPortG_NibbleLowSaidas(0)
            #define Lcd_PortWr(x)       PortG_Wr(x)
            #define Lcd_PortLatch()     LATG
            #endif
        #endif


        #if Lcd_PortUtilizado == PortH
            #ifdef ConfiguraPortH_NibbleLowSaidas
            #define ConfiguraPort()     ConfiguraPortH_NibbleLowSaidas(0)
            #define Lcd_PortWr(x)       PortH_Wr(x)
            #define Lcd_PortLatch()     LATH 
            #endif
        #endif
    #endif

    #if Lcd_NibbleUtilizado == High

        #if Lcd_PortUtilizado == PortA
            #ifdef ConfiguraPortA_NibbleHighSaidas
            #define ConfiguraPort()     ConfiguraPortA_NibbleHighSaidas(0)
            #define Lcd_PortWr(x)       PortA_Wr(x)
            #define Lcd_PortLatch()     LATA 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortB
            #ifdef ConfiguraPortB_NibbleHighSaidas
            #define ConfiguraPort()     ConfiguraPortB_NibbleHighSaidas(0)
            #define Lcd_PortWr(x)       PortB_Wr(x)
            #define Lcd_PortLatch()     LATB 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortC
            #ifdef ConfiguraPortC_NibbleHighSaidas
            #define ConfiguraPort()     ConfiguraPortC_NibbleHighSaidas(0)
            #define Lcd_PortWr(x)       PortC_Wr(x)
            #define Lcd_PortLatch()     LATC 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortD
            #ifdef ConfiguraPortD_NibbleHighSaidas
            #define ConfiguraPort()     ConfiguraPortD_NibbleHighSaidas(0)
            #define Lcd_PortWr(x)       PortD_Wr(x)
            #define Lcd_PortLatch()     LATD 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortE
            #ifdef ConfiguraPortE_NibbleHighSaidas
            #define ConfiguraPort()     ConfiguraPortE_NibbleHighSaidas(0)
            #define Lcd_PortWr(x)       PortE_Wr(x)
            #define Lcd_PortLatch()     LATE 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortF
            #ifdef ConfiguraPortF_NibbleHighSaidas
            #define ConfiguraPort()     ConfiguraPortF_NibbleHighSaidas(0)
            #define Lcd_PortWr(x)       PortF_Wr(x)
            #define Lcd_PortLatch()     LATF 
            #endif
        #endif

        #if Lcd_PortUtilizado == PortG
            #ifdef ConfiguraPortG_NibbleHighSaidas
            #define ConfiguraPort()     ConfiguraPortG_NibbleHighSaidas(0)
            #define Lcd_PortWr(x)       PortG_Wr(x)
            #define Lcd_PortLatch()     LATG
            #endif
        #endif

        #if Lcd_PortUtilizado == PortH
            #ifdef ConfiguraPortH_NibbleHighSaidas
            #define ConfiguraPort()     ConfiguraPortH_NibbleHighSaidas(0)
            #define Lcd_PortWr(x)       PortH_Wr(x)
            #define Lcd_PortLatch()     LATH
            #endif
        #endif
    #endif        
#endif


//Configura pino Enable
#if Lcd_PinoEnable == PinoRA0
    #ifdef ConfiguraPinoRA0_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRA0_Saida(0)
    #define PinoEnable_Wr(x)            PinoRA0_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRA1
    #ifdef ConfiguraPinoRA1_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRA1_Saida(0)
    #define PinoEnable_Wr(x)            PinoRA1_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRA2
    #ifdef ConfiguraPinoRA2_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRA2_Saida(0)
    #define PinoEnable_Wr(x)            PinoRA2_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRA3
    #ifdef ConfiguraPinoRA3_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRA3_Saida(0)
    #define PinoEnable_Wr(x)            PinoRA3_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRA4
    #ifdef ConfiguraPinoRA4_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRA4_Saida(0)
    #define PinoEnable_Wr(x)            PinoRA4_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRA5
    #ifdef ConfiguraPinoRA5_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRA5_Saida(0)
    #define PinoEnable_Wr(x)            PinoRA5_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRA6
    #ifdef ConfiguraPinoRA6_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRA6_Saida(0)
    #define PinoEnable_Wr(x)            PinoRA6_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRA7
    #ifdef ConfiguraPinoRA7_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRA7_Saida(0)
    #define PinoEnable_Wr(x)            PinoRA7_Wr(x)
    #endif
#endif


#if Lcd_PinoEnable == PinoRB0
    #ifdef ConfiguraPinoRB0_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRB0_Saida(0)
    #define PinoEnable_Wr(x)            PinoRB0_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRB1
    #ifdef ConfiguraPinoRB1_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRB1_Saida(0)
    #define PinoEnable_Wr(x)            PinoRB1_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRB2
    #ifdef ConfiguraPinoRB2_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRB2_Saida(0)
    #define PinoEnable_Wr(x)            PinoRB2_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRB3
    #ifdef ConfiguraPinoRB3_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRB3_Saida(0)
    #define PinoEnable_Wr(x)            PinoRB3_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRB4
    #ifdef ConfiguraPinoRB4_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRB4_Saida(0)
    #define PinoEnable_Wr(x)            PinoRB4_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRB5
    #ifdef ConfiguraPinoRB5_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRB5_Saida(0)
    #define PinoEnable_Wr(x)            PinoRB5_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRB6
    #ifdef ConfiguraPinoRB6_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRB6_Saida(0)
    #define PinoEnable_Wr(x)            PinoRB6_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRB7
    #ifdef ConfiguraPinoRB7_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRB7_Saida(0)
    #define PinoEnable_Wr(x)            PinoRB7_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRC0
    #ifdef ConfiguraPinoRC0_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRC0_Saida(0)
    #define PinoEnable_Wr(x)            PinoRC0_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRC1
    #ifdef ConfiguraPinoRC1_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRC1_Saida(0)
    #define PinoEnable_Wr(x)            PinoRC1_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRC2
    #ifdef ConfiguraPinoRC2_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRC2_Saida(0)
    #define PinoEnable_Wr(x)            PinoRC2_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRC3
    #ifdef ConfiguraPinoRC3_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRC3_Saida(0)
    #define PinoEnable_Wr(x)            PinoRC3_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRC4
    #ifdef ConfiguraPinoRC4_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRC4_Saida(0)
    #define PinoEnable_Wr(x)            PinoRC4_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRC5
    #ifdef ConfiguraPinoRC5_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRC5_Saida(0)
    #define PinoEnable_Wr(x)            PinoRC5_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRC6
    #ifdef ConfiguraPinoRC6_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRC6_Saida(0)
    #define PinoEnable_Wr(x)            PinoRC6_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRC7
    #ifdef ConfiguraPinoRC7_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRC7_Saida(0)
    #define PinoEnable_Wr(x)            PinoRC7_Wr(x)
    #endif
#endif


#if Lcd_PinoEnable == PinoRD0
    #ifdef ConfiguraPinoRD0_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRD0_Saida(0)
    #define PinoEnable_Wr(x)            PinoRD0_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRD1
    #ifdef ConfiguraPinoRD1_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRD1_Saida(0)
    #define PinoEnable_Wr(x)            PinoRD1_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRD2
    #ifdef ConfiguraPinoRD2_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRD2_Saida(0)
    #define PinoEnable_Wr(x)            PinoRD2_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRD3
    #ifdef ConfiguraPinoRD3_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRD3_Saida(0)
    #define PinoEnable_Wr(x)            PinoRD3_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRD4
    #ifdef ConfiguraPinoRD4_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRD4_Saida(0)
    #define PinoEnable_Wr(x)            PinoRD4_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRD5
    #ifdef ConfiguraPinoRD5_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRD5_Saida(0)
    #define PinoEnable_Wr(x)            PinoRD5_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRD6
    #ifdef ConfiguraPinoRD6_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRD6_Saida(0)
    #define PinoEnable_Wr(x)            PinoRD6_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRD7
    #ifdef ConfiguraPinoRD7_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRD7_Saida(0)
    #define PinoEnable_Wr(x)            PinoRD7_Wr(x)
    #endif
#endif


#if Lcd_PinoEnable == PinoRE0
    #ifdef ConfiguraPinoRE0_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRE0_Saida(0)
    #define PinoEnable_Wr(x)            PinoRE0_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRE1
    #ifdef ConfiguraPinoRE1_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRE1_Saida(0)
    #define PinoEnable_Wr(x)            PinoRE1_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRE2
    #ifdef ConfiguraPinoRE2_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRE2_Saida(0)
    #define PinoEnable_Wr(x)            PinoRE2_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRE3
    #ifdef ConfiguraPinoRE3_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRE3_Saida(0)
    #define PinoEnable_Wr(x)            PinoRE3_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRE4
    #ifdef ConfiguraPinoRE4_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRE4_Saida(0)
    #define PinoEnable_Wr(x)            PinoRE4_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRE5
    #ifdef ConfiguraPinoRE5_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRE5_Saida(0)
    #define PinoEnable_Wr(x)            PinoRE5_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRE6
    #ifdef ConfiguraPinoRE6_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRE6_Saida(0)
    #define PinoEnable_Wr(x)            PinoRE6_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRE7
    #ifdef ConfiguraPinoRE7_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRE7_Saida(0)
    #define PinoEnable_Wr(x)            PinoRE7_Wr(x)
    #endif
#endif


#if Lcd_PinoEnable == PinoRF0
    #ifdef ConfiguraPinoRF0_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRF0_Saida(0)
    #define PinoEnable_Wr(x)            PinoRF0_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRF1
    #ifdef ConfiguraPinoRF1_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRF1_Saida(0)
    #define PinoEnable_Wr(x)            PinoRF1_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRF2
    #ifdef ConfiguraPinoRF2_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRF2_Saida(0)
    #define PinoEnable_Wr(x)            PinoRF2_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRF3
    #ifdef ConfiguraPinoRF3_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRF3_Saida(0)
    #define PinoEnable_Wr(x)            PinoRF3_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRF4
    #ifdef ConfiguraPinoRF4_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRF4_Saida(0)
    #define PinoEnable_Wr(x)            PinoRF4_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRF5
    #ifdef ConfiguraPinoRF5_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRF5_Saida(0)
    #define PinoEnable_Wr(x)            PinoRF5_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRF6
    #ifdef ConfiguraPinoRF6_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRF6_Saida(0)
    #define PinoEnable_Wr(x)            PinoRF6_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRF7
    #ifdef ConfiguraPinoRF7_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRF7_Saida(0)
    #define PinoEnable_Wr(x)            PinoRF7_Wr(x)
    #endif
#endif


#if Lcd_PinoEnable == PinoRG0
    #ifdef ConfiguraPinoRG0_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRG0_Saida(0)
    #define PinoEnable_Wr(x)            PinoRG0_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRG1
    #ifdef ConfiguraPinoRG1_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRG1_Saida(0)
    #define PinoEnable_Wr(x)            PinoRG1_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRG2
    #ifdef ConfiguraPinoRG2_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRG2_Saida(0)
    #define PinoEnable_Wr(x)            PinoRG2_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRG3
    #ifdef ConfiguraPinoRG3_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRG3_Saida(0)
    #define PinoEnable_Wr(x)            PinoRG3_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRG4
    #ifdef ConfiguraPinoRG4_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRG4_Saida(0)
    #define PinoEnable_Wr(x)            PinoRG4_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRG5
    #ifdef ConfiguraPinoRG5_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRG5_Saida(0)
    #define PinoEnable_Wr(x)            PinoRG5_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRG6
    #ifdef ConfiguraPinoRG6_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRG6_Saida(0)
    #define PinoEnable_Wr(x)            PinoRG6_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRG7
    #ifdef ConfiguraPinoRG7_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRG7_Saida(0)
    #define PinoEnable_Wr(x)            PinoRG7_Wr(x)
    #endif
#endif


#if Lcd_PinoEnable == PinoRH0
    #ifdef ConfiguraPinoRH0_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRH0_Saida(0)
    #define PinoEnable_Wr(x)            PinoRH0_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRH1
    #ifdef ConfiguraPinoRH1_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRH1_Saida(0)
    #define PinoEnable_Wr(x)            PinoRH1_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRH2
    #ifdef ConfiguraPinoRH2_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRH2_Saida(0)
    #define PinoEnable_Wr(x)            PinoRH2_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRH3
    #ifdef ConfiguraPinoRH3_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRH3_Saida(0)
    #define PinoEnable_Wr(x)            PinoRH3_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRH4
    #ifdef ConfiguraPinoRH4_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRH4_Saida(0)
    #define PinoEnable_Wr(x)            PinoRH4_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRH5
    #ifdef ConfiguraPinoRH5_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRH5_Saida(0)
    #define PinoEnable_Wr(x)            PinoRH5_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRH6
    #ifdef ConfiguraPinoRH6_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRH6_Saida(0)
    #define PinoEnable_Wr(x)            PinoRH6_Wr(x)
    #endif
#endif

#if Lcd_PinoEnable == PinoRH7
    #ifdef ConfiguraPinoRH7_Saida
    #define ConfiguraPinoEnable()       ConfiguraPinoRH7_Saida(0)
    #define PinoEnable_Wr(x)            PinoRH7_Wr(x)
    #endif
#endif



//Configura pino Rs
#if Lcd_PinoRs == PinoRA0
    #ifdef ConfiguraPinoRA0_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRA0_Saida(0)
    #define PinoRs_Wr(x)            PinoRA0_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRA1
    #ifdef ConfiguraPinoRA1_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRA1_Saida(0)
    #define PinoRs_Wr(x)            PinoRA1_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRA2
    #ifdef ConfiguraPinoRA2_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRA2_Saida(0)
    #define PinoRs_Wr(x)            PinoRA2_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRA3
    #ifdef ConfiguraPinoRA3_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRA3_Saida(0)
    #define PinoRs_Wr(x)            PinoRA3_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRA4
    #ifdef ConfiguraPinoRA4_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRA4_Saida(0)
    #define PinoRs_Wr(x)            PinoRA4_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRA5
    #ifdef ConfiguraPinoRA5_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRA5_Saida(0)
    #define PinoRs_Wr(x)            PinoRA5_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRA6
    #ifdef ConfiguraPinoRA6_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRA6_Saida(0)
    #define PinoRs_Wr(x)            PinoRA6_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRA7
    #ifdef ConfiguraPinoRA7_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRA7_Saida(0)
    #define PinoRs_Wr(x)            PinoRA7_Wr(x)
    #endif
#endif


#if Lcd_PinoRs == PinoRB0
    #ifdef ConfiguraPinoRB0_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRB0_Saida(0)
    #define PinoRs_Wr(x)            PinoRB0_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRB1
    #ifdef ConfiguraPinoRB1_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRB1_Saida(0)
    #define PinoRs_Wr(x)            PinoRB1_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRB2
    #ifdef ConfiguraPinoRB2_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRB2_Saida(0)
    #define PinoRs_Wr(x)            PinoRB2_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRB3
    #ifdef ConfiguraPinoRB3_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRB3_Saida(0)
    #define PinoRs_Wr(x)            PinoRB3_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRB4
    #ifdef ConfiguraPinoRB4_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRB4_Saida(0)
    #define PinoRs_Wr(x)            PinoRB4_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRB5
    #ifdef ConfiguraPinoRB5_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRB5_Saida(0)
    #define PinoRs_Wr(x)            PinoRB5_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRB6
    #ifdef ConfiguraPinoRB6_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRB6_Saida(0)
    #define PinoRs_Wr(x)            PinoRB6_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRB7
    #ifdef ConfiguraPinoRB7_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRB7_Saida(0)
    #define PinoRs_Wr(x)            PinoRB7_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRC0
    #ifdef ConfiguraPinoRC0_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRC0_Saida(0)
    #define PinoRs_Wr(x)            PinoRC0_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRC1
    #ifdef ConfiguraPinoRC1_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRC1_Saida(0)
    #define PinoRs_Wr(x)            PinoRC1_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRC2
    #ifdef ConfiguraPinoRC2_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRC2_Saida(0)
    #define PinoRs_Wr(x)            PinoRC2_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRC3
    #ifdef ConfiguraPinoRC3_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRC3_Saida(0)
    #define PinoRs_Wr(x)            PinoRC3_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRC4
    #ifdef ConfiguraPinoRC4_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRC4_Saida(0)
    #define PinoRs_Wr(x)            PinoRC4_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRC5
    #ifdef ConfiguraPinoRC5_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRC5_Saida(0)
    #define PinoRs_Wr(x)            PinoRC5_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRC6
    #ifdef ConfiguraPinoRC6_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRC6_Saida(0)
    #define PinoRs_Wr(x)            PinoRC6_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRC7
    #ifdef ConfiguraPinoRC7_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRC7_Saida(0)
    #define PinoRs_Wr(x)            PinoRC7_Wr(x)
    #endif
#endif


#if Lcd_PinoRs == PinoRD0
    #ifdef ConfiguraPinoRD0_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRD0_Saida(0)
    #define PinoRs_Wr(x)            PinoRD0_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRD1
    #ifdef ConfiguraPinoRD1_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRD1_Saida(0)
    #define PinoRs_Wr(x)            PinoRD1_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRD2
    #ifdef ConfiguraPinoRD2_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRD2_Saida(0)
    #define PinoRs_Wr(x)            PinoRD2_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRD3
    #ifdef ConfiguraPinoRD3_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRD3_Saida(0)
    #define PinoRs_Wr(x)            PinoRD3_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRD4
    #ifdef ConfiguraPinoRD4_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRD4_Saida(0)
    #define PinoRs_Wr(x)            PinoRD4_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRD5
    #ifdef ConfiguraPinoRD5_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRD5_Saida(0)
    #define PinoRs_Wr(x)            PinoRD5_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRD6
    #ifdef ConfiguraPinoRD6_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRD6_Saida(0)
    #define PinoRs_Wr(x)            PinoRD6_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRD7
    #ifdef ConfiguraPinoRD7_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRD7_Saida(0)
    #define PinoRs_Wr(x)            PinoRD7_Wr(x)
    #endif
#endif


#if Lcd_PinoRs == PinoRE0
    #ifdef ConfiguraPinoRE0_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRE0_Saida(0)
    #define PinoRs_Wr(x)            PinoRE0_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRE1
    #ifdef ConfiguraPinoRE1_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRE1_Saida(0)
    #define PinoRs_Wr(x)            PinoRE1_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRE2
    #ifdef ConfiguraPinoRE2_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRE2_Saida(0)
    #define PinoRs_Wr(x)            PinoRE2_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRE3
    #ifdef ConfiguraPinoRE3_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRE3_Saida(0)
    #define PinoRs_Wr(x)            PinoRE3_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRE4
    #ifdef ConfiguraPinoRE4_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRE4_Saida(0)
    #define PinoRs_Wr(x)            PinoRE4_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRE5
    #ifdef ConfiguraPinoRE5_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRE5_Saida(0)
    #define PinoRs_Wr(x)            PinoRE5_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRE6
    #ifdef ConfiguraPinoRE6_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRE6_Saida(0)
    #define PinoRs_Wr(x)            PinoRE6_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRE7
    #ifdef ConfiguraPinoRE7_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRE7_Saida(0)
    #define PinoRs_Wr(x)            PinoRE7_Wr(x)
    #endif
#endif


#if Lcd_PinoRs == PinoRF0
    #ifdef ConfiguraPinoRF0_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRF0_Saida(0)
    #define PinoRs_Wr(x)            PinoRF0_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRF1
    #ifdef ConfiguraPinoRF1_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRF1_Saida(0)
    #define PinoRs_Wr(x)            PinoRF1_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRF2
    #ifdef ConfiguraPinoRF2_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRF2_Saida(0)
    #define PinoRs_Wr(x)            PinoRF2_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRF3
    #ifdef ConfiguraPinoRF3_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRF3_Saida(0)
    #define PinoRs_Wr(x)            PinoRF3_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRF4
    #ifdef ConfiguraPinoRF4_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRF4_Saida(0)
    #define PinoRs_Wr(x)            PinoRF4_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRF5
    #ifdef ConfiguraPinoRF5_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRF5_Saida(0)
    #define PinoRs_Wr(x)            PinoRF5_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRF6
    #ifdef ConfiguraPinoRF6_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRF6_Saida(0)
    #define PinoRs_Wr(x)            PinoRF6_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRF7
    #ifdef ConfiguraPinoRF7_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRF7_Saida(0)
    #define PinoRs_Wr(x)            PinoRF7_Wr(x)
    #endif
#endif


#if Lcd_PinoRs == PinoRG0
    #ifdef ConfiguraPinoRG0_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRG0_Saida(0)
    #define PinoRs_Wr(x)            PinoRG0_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRG1
    #ifdef ConfiguraPinoRG1_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRG1_Saida(0)
    #define PinoRs_Wr(x)            PinoRG1_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRG2
    #ifdef ConfiguraPinoRG2_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRG2_Saida(0)
    #define PinoRs_Wr(x)            PinoRG2_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRG3
    #ifdef ConfiguraPinoRG3_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRG3_Saida(0)
    #define PinoRs_Wr(x)            PinoRG3_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRG4
    #ifdef ConfiguraPinoRG4_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRG4_Saida(0)
    #define PinoRs_Wr(x)            PinoRG4_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRG5
    #ifdef ConfiguraPinoRG5_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRG5_Saida(0)
    #define PinoRs_Wr(x)            PinoRG5_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRG6
    #ifdef ConfiguraPinoRG6_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRG6_Saida(0)
    #define PinoRs_Wr(x)            PinoRG6_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRG7
    #ifdef ConfiguraPinoRG7_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRG7_Saida(0)
    #define PinoRs_Wr(x)            PinoRG7_Wr(x)
    #endif
#endif


#if Lcd_PinoRs == PinoRH0
    #ifdef ConfiguraPinoRH0_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRH0_Saida(0)
    #define PinoRs_Wr(x)            PinoRH0_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRH1
    #ifdef ConfiguraPinoRH1_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRH1_Saida(0)
    #define PinoRs_Wr(x)            PinoRH1_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRH2
    #ifdef ConfiguraPinoRH2_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRH2_Saida(0)
    #define PinoRs_Wr(x)            PinoRH2_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRH3
    #ifdef ConfiguraPinoRH3_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRH3_Saida(0)
    #define PinoRs_Wr(x)            PinoRH3_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRH4
    #ifdef ConfiguraPinoRH4_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRH4_Saida(0)
    #define PinoRs_Wr(x)            PinoRH4_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRH5
    #ifdef ConfiguraPinoRH5_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRH5_Saida(0)
    #define PinoRs_Wr(x)            PinoRH5_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRH6
    #ifdef ConfiguraPinoRH6_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRH6_Saida(0)
    #define PinoRs_Wr(x)            PinoRH6_Wr(x)
    #endif
#endif

#if Lcd_PinoRs == PinoRH7
    #ifdef ConfiguraPinoRH7_Saida
    #define ConfiguraPinoRs()       ConfiguraPinoRH7_Saida(0)
    #define PinoRs_Wr(x)            PinoRH7_Wr(x)
    #endif
#endif


//Configura pino do Back Light
#if Lcd_PinoBackLight == PinoRA0
    #ifdef ConfiguraPinoRA0_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRA0_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRA0_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRA1
    #ifdef ConfiguraPinoRA1_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRA1_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRA1_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRA2
    #ifdef ConfiguraPinoRA2_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRA2_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRA2_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRA3
    #ifdef ConfiguraPinoRA3_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRA3_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRA3_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRA4
    #ifdef ConfiguraPinoRA4_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRA4_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRA4_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRA5
    #ifdef ConfiguraPinoRA5_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRA5_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRA5_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRA6
    #ifdef ConfiguraPinoRA6_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRA6_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRA6_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRA7
    #ifdef ConfiguraPinoRA7_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRA7_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRA7_Wr(x)
    #endif
#endif


#if Lcd_PinoBackLight == PinoRB0
    #ifdef ConfiguraPinoRB0_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRB0_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRB0_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRB1
    #ifdef ConfiguraPinoRB1_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRB1_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRB1_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRB2
    #ifdef ConfiguraPinoRB2_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRB2_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRB2_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRB3
    #ifdef ConfiguraPinoRB3_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRB3_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRB3_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRB4
    #ifdef ConfiguraPinoRB4_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRB4_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRB4_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRB5
    #ifdef ConfiguraPinoRB5_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRB5_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRB5_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRB6
    #ifdef ConfiguraPinoRB6_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRB6_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRB6_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRB7
    #ifdef ConfiguraPinoRB7_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRB7_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRB7_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRC0
    #ifdef ConfiguraPinoRC0_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRC0_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRC0_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRC1
    #ifdef ConfiguraPinoRC1_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRC1_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRC1_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRC2
    #ifdef ConfiguraPinoRC2_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRC2_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRC2_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRC3
    #ifdef ConfiguraPinoRC3_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRC3_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRC3_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRC4
    #ifdef ConfiguraPinoRC4_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRC4_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRC4_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRC5
    #ifdef ConfiguraPinoRC5_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRC5_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRC5_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRC6
    #ifdef ConfiguraPinoRC6_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRC6_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRC6_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRC7
    #ifdef ConfiguraPinoRC7_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRC7_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRC7_Wr(x)
    #endif
#endif


#if Lcd_PinoBackLight == PinoRD0
    #ifdef ConfiguraPinoRD0_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRD0_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRD0_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRD1
    #ifdef ConfiguraPinoRD1_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRD1_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRD1_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRD2
    #ifdef ConfiguraPinoRD2_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRD2_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRD2_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRD3
    #ifdef ConfiguraPinoRD3_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRD3_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRD3_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRD4
    #ifdef ConfiguraPinoRD4_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRD4_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRD4_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRD5
    #ifdef ConfiguraPinoRD5_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRD5_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRD5_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRD6
    #ifdef ConfiguraPinoRD6_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRD6_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRD6_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRD7
    #ifdef ConfiguraPinoRD7_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRD7_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRD7_Wr(x)
    #endif
#endif


#if Lcd_PinoBackLight == PinoRE0
    #ifdef ConfiguraPinoRE0_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRE0_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRE0_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRE1
    #ifdef ConfiguraPinoRE1_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRE1_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRE1_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRE2
    #ifdef ConfiguraPinoRE2_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRE2_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRE2_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRE3
    #ifdef ConfiguraPinoRE3_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRE3_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRE3_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRE4
    #ifdef ConfiguraPinoRE4_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRE4_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRE4_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRE5
    #ifdef ConfiguraPinoRE5_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRE5_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRE5_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRE6
    #ifdef ConfiguraPinoRE6_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRE6_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRE6_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRE7
    #ifdef ConfiguraPinoRE7_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRE7_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRE7_Wr(x)
    #endif
#endif


#if Lcd_PinoBackLight == PinoRF0
    #ifdef ConfiguraPinoRF0_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRF0_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRF0_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRF1
    #ifdef ConfiguraPinoRF1_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRF1_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRF1_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRF2
    #ifdef ConfiguraPinoRF2_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRF2_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRF2_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRF3
    #ifdef ConfiguraPinoRF3_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRF3_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRF3_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRF4
    #ifdef ConfiguraPinoRF4_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRF4_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRF4_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRF5
    #ifdef ConfiguraPinoRF5_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRF5_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRF5_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRF6
    #ifdef ConfiguraPinoRF6_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRF6_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRF6_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRF7
    #ifdef ConfiguraPinoRF7_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRF7_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRF7_Wr(x)
    #endif
#endif


#if Lcd_PinoBackLight == PinoRG0
    #ifdef ConfiguraPinoRG0_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRG0_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRG0_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRG1
    #ifdef ConfiguraPinoRG1_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRG1_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRG1_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRG2
    #ifdef ConfiguraPinoRG2_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRG2_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRG2_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRG3
    #ifdef ConfiguraPinoRG3_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRG3_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRG3_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRG4
    #ifdef ConfiguraPinoRG4_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRG4_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRG4_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRG5
    #ifdef ConfiguraPinoRG5_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRG5_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRG5_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRG6
    #ifdef ConfiguraPinoRG6_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRG6_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRG6_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRG7
    #ifdef ConfiguraPinoRG7_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRG7_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRG7_Wr(x)
    #endif
#endif


#if Lcd_PinoBackLight == PinoRH0
    #ifdef ConfiguraPinoRH0_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRH0_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRH0_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRH1
    #ifdef ConfiguraPinoRH1_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRH1_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRH1_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRH2
    #ifdef ConfiguraPinoRH2_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRH2_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRH2_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRH3
    #ifdef ConfiguraPinoRH3_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRH3_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRH3_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRH4
    #ifdef ConfiguraPinoRH4_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRH4_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRH4_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRH5
    #ifdef ConfiguraPinoRH5_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRH5_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRH5_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRH6
    #ifdef ConfiguraPinoRH6_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRH6_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRH6_Wr(x)
    #endif
#endif

#if Lcd_PinoBackLight == PinoRH7
    #ifdef ConfiguraPinoRH7_Saida
    #define ConfiguraPinoBackLight()       ConfiguraPinoRH7_Saida(0)
    #define PinoBackLight_Wr(x)            PinoRH7_Wr(x)
    #endif
#endif



//Estruturas do módulo --------------------------------------------------------
typedef struct
{
    struct
    {
        Uchar Linha1[Lcd_NumeroDeColunas];
        
        #if Lcd_NumeroDeLinhas > 1
            Uchar Linha2[Lcd_NumeroDeColunas];
        #endif

        #if Lcd_NumeroDeLinhas > 2
            Uchar Linha3[Lcd_NumeroDeColunas];
            Uchar Linha4[Lcd_NumeroDeColunas];
        #endif        
    }Buffers;
    
    struct
    {
        Uint    Intermitencia;
        #if Lcd_UsarBackLight == Sim
        Ulong    BackLight;
        #endif
    }Temporizadores;
    
    union
    {
        Uchar valor;
            
        struct
        {
            Uint IntermitenciaAtiva:1;
            Uint IntermitenciaEstado:1;
        };
    }Controle;
}StrLcd;




//Publicação das funções do módulo --------------------------------------------
void Lcd_Inicializacao (void);
void Lcd_Monitor (void);
void Lcd_EnviaComando (Uchar Comando);
void Lcd_PosicionaCursorNaDDRam (Uchar Linha, Uchar Coluna);
void Lcd_EscreveNaDDRam (Uchar Caractere);
void Lcd_LimpaBuffer (Uchar Linha);
void Lcd_LimpaBuffers(void);
Uchar *Lcd_RetornaEnderecoDoBuffer (Uchar Linha, Uchar Coluna);
Uchar *Lcd_TransfereMensagemParaBuffer (Uchar *Buffer, Cchar *Mensagem);
void Lcd_TransfereMensagemParaLinhaBuffer (Uchar Linha, Cchar *Mensagem);
Uchar *Lcd_EscreveCaractereNoBuffer (Uchar *Buffer, Uchar Caractere);
void Lcd_AtualizaLinha (Uchar Linha);
void Lcd_AtualizaDisplay (void);

#if Lcd_UsarBackLight == Sim
void Lcd_BackLightReset(void);
void Lcd_DesligaBacklight (void);
void Lcd_LigaBacklight (void);
#endif


#endif	/* LCD_H */

