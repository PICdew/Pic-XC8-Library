/* 
 * Arquivo: Cpu.h
 * uC:      PIC18F
 * Autor:   JABNeto
 * Versão:  24.06.2017
 */

#ifndef CPU_H
#define	CPU_H

#include <xc.h>

#include "Definicoes Gerais.h"
#include "Cpu Config.h"


//Processamento das definições ------------------------------------------------

//Oscilador
#ifdef Cpu_Configura_Oscilador
    #if Cpu_Configura_Oscilador == Sim
        #include "Oscilador.h"
    #endif
#endif

//WatchDog
#ifdef Cpu_Configura_Wdt
    #if Cpu_Configura_Wdt == Sim
        #include "Wdt.h"
    #endif
#endif

//E2prom Interna
#ifdef Cpu_Configura_iE2prom
    #if Cpu_Configura_iE2prom == Sim
        #include "iE2prom.h"
    #endif
#endif

//Temporizadores
#ifdef Cpu_Configura_Timer0
    #if Cpu_Configura_Timer0 == Sim
        #include "Timer0.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer1
    #if Cpu_Configura_Timer1 == Sim
        #include "Timer1.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer2
    #if Cpu_Configura_Timer2 == Sim
        #include "Timer2.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer3
    #if Cpu_Configura_Timer3 == Sim
        #include "Timer3.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer4
    #if Cpu_Configura_Timer4 == Sim
        #include "Timer4.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer5
    #if Cpu_Configura_Timer5 == Sim
        #include "Timer5.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer6
    #if Cpu_Configura_Timer6 == Sim
        #include "Timer6.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer7
    #if Cpu_Configura_Timer7 == Sim
        #include "Timer7.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer8
    #if Cpu_Configura_Timer8 == Sim
        #include "Timer8.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer9
    #if Cpu_Configura_Timer9 == Sim
        #include "Timer9.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer10
    #if Cpu_Configura_Timer10 == Sim
        #include "Timer10.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer11
    #if Cpu_Configura_Timer11 == Sim
        #include "Timer11.h"
    #endif
#endif

#ifdef Cpu_Configura_Timer12
    #if Cpu_Configura_Timer12 == Sim
        #include "Timer12.h"
    #endif
#endif

//Rtcc - Real Time Clock Calendar
#ifdef Cpu_Configura_Rtcc
    #if Cpu_Configura_Rtcc == Sim
        #include "Rtcc.h"
    #endif
#endif


//Adcs
#ifdef Cpu_Configura_Adc1
    #if Cpu_Configura_Adc1 == Sim
        #include "Adc1.h"
    #endif
#endif

#ifdef Cpu_Configura_Adc2
    #if Cpu_Configura_Adc2 == Sim
        #include "Adc2.h"
    #endif
#endif


//Dacs
#ifdef Cpu_Configura_Dac1
    #if Cpu_Configura_Dac1 == Sim
        #include "Dac1.h"
    #endif
#endif

#ifdef Cpu_Configura_Dac2
    #if Cpu_Configura_Dac2 == Sim
        #include "Dac2.h"
    #endif
#endif


//Comparadores
#ifdef Cpu_Configura_Comp1
    #if Cpu_Configura_Comp1 == Sim
        #include "Comp1.h"
    #endif
#endif

#ifdef Cpu_Configura_Comp2
    #if Cpu_Configura_Comp2 == Sim
        #include "Comp2.h"
    #endif
#endif

#ifdef Cpu_Configura_Comp3
    #if Cpu_Configura_Comp3 == Sim
        #include "Comp3.h"
    #endif
#endif

#ifdef Cpu_Configura_Comp4
    #if Cpu_Configura_Comp4 == Sim
        #include "Comp4.h"
    #endif
#endif

//Usarts
#ifdef Cpu_Configura_Usart1
    #if Cpu_Configura_Usart1 == Sim
        #include "Usart1.h"
    #endif
#endif

#ifdef Cpu_Configura_Usart2
    #if Cpu_Configura_Usart2 == Sim
        #include "Usart2.h"
    #endif
#endif

#ifdef Cpu_Configura_Usart3
    #if Cpu_Configura_Usart3 == Sim
        #include "Usart3.h"
    #endif
#endif

#ifdef Cpu_Configura_Usart4
    #if Cpu_Configura_Usart4 == Sim
        #include "Usart4.h"
    #endif
#endif

#ifdef Cpu_Configura_Usart5
    #if Cpu_Configura_Usart5 == Sim
        #include "Usart5.h"
    #endif
#endif


//Spi
#ifdef Cpu_Configura_Spi1
    #if Cpu_Configura_Spi1 == Sim
        #include "Spi1.h"
    #endif
#endif

#ifdef Cpu_Configura_Spi2
    #if Cpu_Configura_Spi2 == Sim
        #include "Spi2.h"
    #endif
#endif


//I2c
#ifdef Cpu_Configura_I2c1
    #if Cpu_Configura_I2c1 == Sim
        #include "I2c1.h"
    #endif
#endif

#ifdef Cpu_Configura_I2c2
    #if Cpu_Configura_I2c2 == Sim
        #include "I2c2.h"
    #endif
#endif

//Usb1
#ifdef Cpu_Configura_Usb1
    #if Cpu_Configura_Usb1 == Sim
        #include "Usb1.h"
    #endif
#endif

//Ethernet
#ifdef Cpu_Configura_Ethernet
    #if Cpu_Configura_Ethernet == Sim
        #include "Ethernet.h"
    #endif
#endif

//Ccp
#ifdef Cpu_Configura_Ccp1
    #if Cpu_Configura_Ccp1 == Sim
        #include "Ccp1.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp2
    #if Cpu_Configura_Ccp2 == Sim
        #include "Ccp2.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp3
    #if Cpu_Configura_Ccp3 == Sim
        #include "Ccp3.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp4
    #if Cpu_Configura_Ccp4 == Sim
        #include "Ccp4.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp5
    #if Cpu_Configura_Ccp5 == Sim
        #include "Ccp5.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp6
    #if Cpu_Configura_Ccp6 == Sim
        #include "Ccp6.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp7
    #if Cpu_Configura_Ccp7 == Sim
        #include "Ccp7.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp8
    #if Cpu_Configura_Ccp8 == Sim
        #include "Ccp8.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp9
    #if Cpu_Configura_Ccp9 == Sim
        #include "Ccp9.h"
    #endif
#endif

#ifdef Cpu_Configura_Ccp10
    #if Cpu_Configura_Ccp10 == Sim
        #include "Ccp10.h"
    #endif
#endif

//Int - External Interrupts
#ifdef Cpu_Configura_Int0
    #if Cpu_Configura_Int0 == Sim
        #include "Int0.h"
    #endif
#endif

#ifdef Cpu_Configura_Int1
    #if Cpu_Configura_Int1 == Sim
        #include "Int1.h"
    #endif
#endif

#ifdef Cpu_Configura_Int2
    #if Cpu_Configura_Int2 == Sim
        #include "Int2.h"
    #endif
#endif

#ifdef Cpu_Configura_Int3
    #if Cpu_Configura_Int3 == Sim
        #include "Int3.h"
    #endif
#endif

//Ioc - Interrupt on Change
#ifdef Cpu_Configura_Ioc
    #if Cpu_Configura_Ioc == Sim
        #include "Ioc.h"
    #endif
#endif

//Fvr - Fixed Voltage Reference
#ifdef Cpu_Configura_Fvr
    #if Cpu_Configura_Fvr == Sim
        #include "Fvr.h"
    #endif
#endif

//Hlvd - High an Low Voltage Detect
#ifdef Cpu_Configura_Hlvd
    #if Cpu_Configura_Hlvd == Sim
        #include "Hlvd.h"
    #endif
#endif

//SrLatch - Set-Reset Latch
#ifdef Cpu_Configura_SrLatch1
    #if Cpu_Configura_SrLatch1 == Sim
        #include "SrLatch1.h"
    #endif
#endif

//Clc - Configurable Logic Cell
#ifdef Cpu_Configura_Clc1
    #if Cpu_Configura_Clc1 == Sim
        #include "Clc1.h"
    #endif
#endif

#ifdef Cpu_Configura_Clc2
    #if Cpu_Configura_Clc2 == Sim
        #include "Clc2.h"
    #endif
#endif

#ifdef Cpu_Configura_Clc3
    #if Cpu_Configura_Clc3 == Sim
        #include "Clc3.h"
    #endif
#endif

#ifdef Cpu_Configura_Clc4
    #if Cpu_Configura_Clc4 == Sim
        #include "Clc4.h"
    #endif
#endif

#ifdef Cpu_Configura_Clc5
    #if Cpu_Configura_Clc5 == Sim
        #include "Clc5.h"
    #endif
#endif

#ifdef Cpu_Configura_Clc6
    #if Cpu_Configura_Clc6 == Sim
        #include "Clc6.h"
    #endif
#endif

#ifdef Cpu_Configura_Clc7
    #if Cpu_Configura_Clc7 == Sim
        #include "Clc7.h"
    #endif
#endif

#ifdef Cpu_Configura_Clc8
    #if Cpu_Configura_Clc8 == Sim
        #include "Clc8.h"
    #endif
#endif


//Pps - Peripheral Pin Select
#ifdef Cpu_Configura_Pps1
    #if Cpu_Configura_Pps1 == Sim
        #include "Pps1.h"
    #endif
#endif

//Crc - Cyclic Redundancy Check
#ifdef Cpu_Configura_Crc1
    #if Cpu_Configura_Crc1 == Sim
        #include "Crc1.h"
    #endif
#endif


//Dma - Direct Memory Access
#ifdef Cpu_Configura_Dma1
    #if Cpu_Configura_Dma1 == Sim
        #include "Dma1.h"
    #endif
#endif

#ifdef Cpu_Configura_Dma2
    #if Cpu_Configura_Dma2 == Sim
        #include "Dma2.h"
    #endif
#endif

#ifdef Cpu_Configura_Dma3
    #if Cpu_Configura_Dma3 == Sim
        #include "Dma3.h"
    #endif
#endif

#ifdef Cpu_Configura_Dma4
    #if Cpu_Configura_Dma4 == Sim
        #include "Dma4.h"
    #endif
#endif

//Pmd - Peripheral Module Disable
#ifdef Cpu_Configura_Pmd1
    #if Cpu_Configura_Pmd11 == Sim
        #include "Pmd1.h"
    #endif
#endif

//Smt - Signal Measurement Timer
#ifdef Cpu_Configura_Smt1
    #if Cpu_Configura_Smt1 == Sim
        #include "Smt1.h"
    #endif
#endif

//Cwg - Complementary Wave Generator
#ifdef Cpu_Configura_Cwg1
    #if Cpu_Configura_Cwg1 == Sim
        #include "Cwg1.h"
    #endif
#endif

#ifdef Cpu_Configura_Cwg2
    #if Cpu_Configura_Cwg2 == Sim
        #include "Cwg2.h"
    #endif
#endif

#ifdef Cpu_Configura_Cwg3
    #if Cpu_Configura_Cwg3 == Sim
        #include "Cwg3.h"
    #endif
#endif

//Nco - Numerically Controlled Oscilator
#ifdef Cpu_Configura_Nco1
    #if Cpu_Configura_Nco1 == Sim
        #include "Nco1.h"
    #endif
#endif

//Zcd - Zero Cross Detect
#ifdef Cpu_Configura_Zcd1
    #if Cpu_Configura_Zcd1 == Sim
        #include "Zcd1.h"
    #endif
#endif

//Dsm - Data Signal Modulator
#ifdef Cpu_Configura_Dsm1
    #if Cpu_Configura_Dsm1 == Sim
        #include "Dsm1.h"
    #endif
#endif


//Clkr - Reference Clock Out
#ifdef Cpu_Configura_Clkr1
    #if Cpu_Configura_Clkr1 == Sim
        #include "Clkr1.h"
    #endif
#endif


//Ctmu - Charge Time Measurement Unit
#ifdef Cpu_Configura_Ctmu
    #if Cpu_Configura_Ctmu == Sim
        #include "Ctmu.h"
    #endif
#endif


//CapTouch - Capture Touch
#ifdef Cpu_Configura_CapTouch
    #if Cpu_Configura_CapTouch == Sim
        #include "CapTouch.h"
    #endif
#endif


//iLcd - Internal Lcd Controller
#ifdef Cpu_Configura_iLcd
    #if Cpu_Configura_iLcd == Sim
        #include "iLcd.h"
    #endif
#endif

//Macros do módulo ------------------------------------------------------------


//Publicação das funções do módulo --------------------------------------------
void Cpu_Inicializacao (void);
void Cpu_InicializaInterrupcoes (void);
void Cpu_LigaInterrupcoes(void);
void Cpu_DesligaInterrupcoes(void);
#endif	/* CPU_H */

