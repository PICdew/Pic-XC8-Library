/* 
 * Arquivo: Cpu.c
 * uC:      PIC18F
 * Autor:   JABNeto
 * Versão:  24.06.2017
 */

#include <xc.h>
#include "Cpu.h"

//Bits de Configuração --------------------------------------------------------






//Funções Locais --------------------------------------------------------------





//Funções Públicas ------------------------------------------------------------
void Cpu_Inicializacao (void)
{
    //Oscilador
    #ifdef Cpu_Configura_Oscilador
        #if Cpu_Configura_Oscilador == Sim
            Oscilador_Inicializacao();
        #endif
    #endif

    //WatchDog
    #ifdef Cpu_Configura_Wdt
        #if Cpu_Configura_Wdt == Sim
            Wdt_Inicializacao();
        #endif
    #endif

    //E2prom Interna
    #ifdef Cpu_Configura_iE2prom
        #if Cpu_Configura_iE2prom == Sim
            iE2prom_Inicializacao();
        #endif
    #endif

    //Temporizadores
    #ifdef Cpu_Configura_Timer0
        #if Cpu_Configura_Timer0 == Sim
            Timer0_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer1
        #if Cpu_Configura_Timer1 == Sim
            Timer1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer2
        #if Cpu_Configura_Timer2 == Sim
            Timer2_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer3
        #if Cpu_Configura_Timer3 == Sim
            Timer3_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer4
        #if Cpu_Configura_Timer4 == Sim
            Timer4_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer5
        #if Cpu_Configura_Timer5 == Sim
            Timer5_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer6
        #if Cpu_Configura_Timer6 == Sim
            Timer6_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer7
        #if Cpu_Configura_Timer7 == Sim
            Timer7_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer8
        #if Cpu_Configura_Timer8 == Sim
            Timer8_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer9
        #if Cpu_Configura_Timer9 == Sim
            Timer9_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer10
        #if Cpu_Configura_Timer10 == Sim
            Timer10_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer11
        #if Cpu_Configura_Timer11 == Sim
            Timer11_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Timer12
        #if Cpu_Configura_Timer12 == Sim
            Timer12_Inicializacao();
        #endif
    #endif

    //Rtcc - Real Time Clock Calendar
    #ifdef Cpu_Configura_Rtcc
        #if Cpu_Configura_Rtcc == Sim
            Rtcc_Inicializacao();
        #endif
    #endif


    //Adcs
    #ifdef Cpu_Configura_Adc1
        #if Cpu_Configura_Adc1 == Sim
            Adc1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Adc2
        #if Cpu_Configura_Adc2 == Sim
            Adc2_Inicializacao();
        #endif
    #endif


    //Dacs
    #ifdef Cpu_Configura_Dac1
        #if Cpu_Configura_Dac1 == Sim
            Dac1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Dac2
        #if Cpu_Configura_Dac2 == Sim
            Dac2_Inicializacao();
        #endif
    #endif


    //Comparadores
    #ifdef Cpu_Configura_Comp1
        #if Cpu_Configura_Comp1 == Sim
            Comp1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Comp2
        #if Cpu_Configura_Comp2 == Sim
            Comp2_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Comp3
        #if Cpu_Configura_Comp3 == Sim
            Comp3_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Comp4
        #if Cpu_Configura_Comp4 == Sim
            Comp4_Inicializacao();
        #endif
    #endif

    //Usarts
    #ifdef Cpu_Configura_Usart1
        #if Cpu_Configura_Usart1 == Sim
           Usart1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Usart2
        #if Cpu_Configura_Usart2 == Sim
           Usart2_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Usart3
        #if Cpu_Configura_Usart3 == Sim
           Usart3_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Usart4
        #if Cpu_Configura_Usart4 == Sim
           Usart4_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Usart5
        #if Cpu_Configura_Usart5 == Sim
           Usart5_Inicializacao();
        #endif
    #endif


    //Spi
    #ifdef Cpu_Configura_Spi1
        #if Cpu_Configura_Spi1 == Sim
           Spi1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Spi2
        #if Cpu_Configura_Spi2 == Sim
           Spi2_Inicializacao();
        #endif
    #endif


    //I2c
    #ifdef Cpu_Configura_I2c1
        #if Cpu_Configura_I2c1 == Sim
           I2c1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_I2c2
        #if Cpu_Configura_I2c2 == Sim
           I2c2_Inicializacao();
        #endif
    #endif

    //Usb1
    #ifdef Cpu_Configura_Usb1
        #if Cpu_Configura_Usb1 == Sim
           Usb1_Inicializacao();
        #endif
    #endif

    //Ethernet
    #ifdef Cpu_Configura_Ethernet
        #if Cpu_Configura_Ethernet == Sim
            Ethernet_Inicializacao();
        #endif
    #endif
           
           
    //Ccp
    #ifdef Cpu_Configura_Ccp1
        #if Cpu_Configura_Ccp1 == Sim
           Ccp1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp2
        #if Cpu_Configura_Ccp2 == Sim
           Ccp2_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp3
        #if Cpu_Configura_Ccp3 == Sim
           Ccp3_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp4
        #if Cpu_Configura_Ccp4 == Sim
           Ccp4_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp5
        #if Cpu_Configura_Ccp5 == Sim
           Ccp5_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp6
        #if Cpu_Configura_Ccp6 == Sim
           Ccp6_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp7
        #if Cpu_Configura_Ccp7 == Sim
           Ccp7_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp8
        #if Cpu_Configura_Ccp8 == Sim
           Ccp8_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp9
        #if Cpu_Configura_Ccp9 == Sim
           Ccp9_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Ccp10
        #if Cpu_Configura_Ccp10 == Sim
           Ccp10_Inicializacao();
        #endif
    #endif

    //Int - External Interrupts
    #ifdef Cpu_Configura_Int0
        #if Cpu_Configura_Int0 == Sim
           Int0_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Int1
        #if Cpu_Configura_Int1 == Sim
           Int1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Int2
        #if Cpu_Configura_Int2 == Sim
           Int2_Inicializacao();
        #endif
    #endif

    //Ioc - Interrupt on Change
    #ifdef Cpu_Configura_Ioc
        #if Cpu_Configura_Ioc == Sim
           Ioc_Inicializacao();
        #endif
    #endif

    //Fvr - Fixed Voltage Reference
    #ifdef Cpu_Configura_Fvr
        #if Cpu_Configura_Fvr == Sim
           Fvr_Inicializacao();
        #endif
    #endif

    //Hlvd - High an Low Voltage Detect
    #ifdef Cpu_Configura_Hlvd
        #if Cpu_Configura_Hlvd == Sim
           Hlvd_Inicializacao();
        #endif
    #endif

    //SrLatch - Set-Reset Latch
    #ifdef Cpu_Configura_SrLatch1
        #if Cpu_Configura_SrLatch1 == Sim
           SrLatch1_Inicializacao();
        #endif
    #endif

    //Clc - Configurable Logic Cell
    #ifdef Cpu_Configura_Clc1
        #if Cpu_Configura_Clc1 == Sim
           Clc1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Clc2
        #if Cpu_Configura_Clc2 == Sim
           Clc2_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Clc3
        #if Cpu_Configura_Clc3 == Sim
           Clc3_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Clc4
        #if Cpu_Configura_Clc4 == Sim
           Clc4_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Clc5
        #if Cpu_Configura_Clc5 == Sim
           Clc5_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Clc6
        #if Cpu_Configura_Clc6 == Sim
           Clc6_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Clc7
        #if Cpu_Configura_Clc7 == Sim
           Clc7_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Clc8
        #if Cpu_Configura_Clc8 == Sim
           Clc8_Inicializacao();
        #endif
    #endif


    //Pps - Peripheral Pin Select
    #ifdef Cpu_Configura_Pps1
        #if Cpu_Configura_Pps1 == Sim
           Pps_Inicializacao();
        #endif
    #endif

    //Crc - Cyclic Redundancy Check
    #ifdef Cpu_Configura_Crc1
        #if Cpu_Configura_Crc1 == Sim
           Crc1_Inicializacao();
        #endif
    #endif


    //Dma - Direct Memory Access
    #ifdef Cpu_Configura_Dma1
        #if Cpu_Configura_Dma1 == Sim
           Dma1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Dma2
        #if Cpu_Configura_Dma2 == Sim
           Dma2_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Dma3
        #if Cpu_Configura_Dma3 == Sim
           Dma3_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Dma4
        #if Cpu_Configura_Dma4 == Sim
           Dma4_Inicializacao();
        #endif
    #endif

    //Pmd - Peripheral Module Disable
    #ifdef Cpu_Configura_Pmd1
        #if Cpu_Configura_Pmd11 == Sim
           Pmd1_Inicializacao();
        #endif
    #endif

    //Smt - Signal Measurement Timer
    #ifdef Cpu_Configura_Smt1
        #if Cpu_Configura_Smt1 == Sim
           Smt1_Inicializacao();
        #endif
    #endif

    //Cwg - Complementary Wave Generator
    #ifdef Cpu_Configura_Cwg1
        #if Cpu_Configura_Cwg1 == Sim
           Cwg1_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Cwg2
        #if Cpu_Configura_Cwg2 == Sim
           Cwg2_Inicializacao();
        #endif
    #endif

    #ifdef Cpu_Configura_Cwg3
        #if Cpu_Configura_Cwg3 == Sim
           Cwg3_Inicializacao();
        #endif
    #endif

    //Nco - Numerically Controlled Oscilator
    #ifdef Cpu_Configura_Nco1
        #if Cpu_Configura_Nco1 == Sim
           Nco1_Inicializacao();
        #endif
    #endif

    //Zcd - Zero Cross Detect
    #ifdef Cpu_Configura_Zcd1
        #if Cpu_Configura_Zcd1 == Sim
           Zcd1_Inicializacao();
        #endif
    #endif

    //Dsm - Data Signal Modulator
    #ifdef Cpu_Configura_Dsm1
        #if Cpu_Configura_Dsm1 == Sim
           Dsm1_Inicializacao();
        #endif
    #endif


    //Clkr - Reference Clock Out
    #ifdef Cpu_Configura_Clkr1
        #if Cpu_Configura_Clkr1 == Sim
           Clkr1_Inicializacao();
        #endif
    #endif


    //Ctmu - Charge Time Measurement Unit
    #ifdef Cpu_Configura_Ctmu
        #if Cpu_Configura_Ctmu == Sim
           Ctmu_Inicializacao();
        #endif
    #endif


    //CapTouch - Capture Touch
    #ifdef Cpu_Configura_CapTouch
        #if Cpu_Configura_CapTouch == Sim
           CapTouch_Inicializacao();
        #endif
    #endif


    //iLcd - Internal Lcd Controller
    #ifdef Cpu_Configura_iLcd
        #if Cpu_Configura_iLcd == Sim
           iLcd_Inicializacao();
        #endif
    #endif
}


//Interrupções ----------------------------------------------------------------

/*
 *  Cpu_InicializaInterrupcoes
 *  Faz a inicialização do sistema de interrupção da Cpu
 */
void Cpu_InicializaInterrupcoes (void)
{
#if defined Cpu_Usa_InterrupcoesDeBaixaPrioridade || \
    defined Cpu_Usa_InterrupcoesDeAltaPrioridade    
    
    #ifdef Cpu_Usa_InterrupcoesDeBaixaPrioridade
    RCONbits.IPEN = 1;
    #else
    RCONbits.IPEN = 0;
    #endif    
    
    Cpu_LigaInterrupcoes();
#endif    
}


#ifdef Cpu_Usa_InterrupcoesDeAltaPrioridade
/*
 *  Isr_AltaPrioridade
 *  Atendimento dos pedidos de interrupção de alta prioridade
 */
void interrupt high_priority Isr_AltaPrioridade (void)
{
    //Intx
    #ifdef Int0_Usa_InterrupcoesDeAltaPrioridade
    Int0_ServicoDeInterrupcao();
    #endif
    
    #ifdef Int1_Usa_InterrupcoesDeAltaPrioridade
    Int1_ServicoDeInterrupcao();
    #endif    

    #ifdef Int2_Usa_InterrupcoesDeAltaPrioridade
    Int2_ServicoDeInterrupcao();
    #endif   

    #ifdef Int3_Usa_InterrupcoesDeAltaPrioridade
    Int3_ServicoDeInterrupcao();
    #endif       
    
    //Timers
    #ifdef Timer0_Usa_InterrupcoesDeAltaPrioridade
    Timer0_ServicoDeInterrupcao();
    #endif
        
    #ifdef Timer1_Usa_InterrupcoesDeAltaPrioridade
    Timer1_ServicoDeInterrupcao();
    #endif    
    
    #ifdef Timer2_Usa_InterrupcoesDeAltaPrioridade
    Timer2_ServicoDeInterrupcao();
    #endif    
    
    #ifdef Timer3_Usa_InterrupcoesDeAltaPrioridade
    Timer3_ServicoDeInterrupcao();
    #endif    

    #ifdef Timer40_Usa_InterrupcoesDeAltaPrioridade
    Timer4_ServicoDeInterrupcao();
    #endif    
    
    #ifdef Timer5_Usa_InterrupcoesDeAltaPrioridade
    Timer5_ServicoDeInterrupcao();
    #endif    
    
    #ifdef Timer6_Usa_InterrupcoesDeAltaPrioridade
    Timer6_ServicoDeInterrupcao();
    #endif    
    
    #ifdef Timer7_Usa_InterrupcoesDeAltaPrioridade
    Timer7_ServicoDeInterrupcao();
    #endif    
    
    #ifdef Timer8_Usa_InterrupcoesDeAltaPrioridade
    Timer8_ServicoDeInterrupcao();
    #endif    
    
    #ifdef Timer9_Usa_InterrupcoesDeAltaPrioridade
    Timer9_ServicoDeInterrupcao();
    #endif    
    
    #ifdef Timer10_Usa_InterrupcoesDeAltaPrioridade
    Timer10_ServicoDeInterrupcao();
    #endif

    #ifdef Timer11_Usa_InterrupcoesDeAltaPrioridade
    Timer11_ServicoDeInterrupcao();
    #endif

    #ifdef Timer12_Usa_InterrupcoesDeAltaPrioridade
    Timer12_ServicoDeInterrupcao();
    #endif


    //Adc
    #ifdef Adc1_Usa_InterrupcoesDeAltaPrioridade
    Adc1_ServicoDeInterrupcoes();
    #endif
    
    #ifdef Adc2_Usa_InterrupcoesDeAltaPrioridade
    Adc2_ServicoDeInterrupcoes();
    #endif    
    
    
    //Dac
    #ifdef Dac1_Usa_InterrupcoesDeAltaPrioridade
    Dac1_ServicoDeInterrupcoes();
    #endif    
    
    #ifdef Dac2_Usa_InterrupcoesDeAltaPrioridade
    Dac2_ServicoDeInterrupcoes();
    #endif     
    
    //Comparador
    #ifdef Comp1_Usa_InterrupcoesDeAltaPrioridade
    Comp1_ServicoDeInterrupcoes();
    #endif     
    
    #ifdef Comp2_Usa_InterrupcoesDeAltaPrioridade
    Comp2_ServicoDeInterrupcoes();
    #endif         
    
    #ifdef Comp3_Usa_InterrupcoesDeAltaPrioridade
    Comp3_ServicoDeInterrupcoes();
    #endif         
    
    #ifdef Comp4_Usa_InterrupcoesDeAltaPrioridade
    Comp4_ServicoDeInterrupcoes();
    #endif 
    
    //iE2prom
    #ifdef iE2prom_Usa_InterrupcoesDeAltaPrioridade
    iE2prom_ServicoDeInterrupcoes();
    #endif    


    //Usb
    #ifdef Usb1_Usa_InterrupcoesDeAltaPrioridade
    Usb1_ServicoDeInterrupcoes();
    #endif          

    //Usart
    #ifdef Usart1_Usa_InterrupcoesDeAltaPrioridade
    Usart1_ServicoDeInterrupcoes();
    #endif         
    
    #ifdef Usart2_Usa_InterrupcoesDeAltaPrioridade
    Usart2_ServicoDeInterrupcoes();
    #endif          
    
    #ifdef Usart3_Usa_InterrupcoesDeAltaPrioridade
    Usart3_ServicoDeInterrupcoes();
    #endif          
    
    #ifdef Usart4_Usa_InterrupcoesDeAltaPrioridade
    Usart4_ServicoDeInterrupcoes();
    #endif          
    
    #ifdef Usart5_Usa_InterrupcoesDeAltaPrioridade
    Usart5_ServicoDeInterrupcoes();
    #endif          
    
    //Spi
    #ifdef Spi1_Usa_InterrupcoesDeAltaPrioridade
    Spi1_ServicoDeInterrupcoes();
    #endif          
    
    #ifdef Spi2_Usa_InterrupcoesDeAltaPrioridade
    Spi2_ServicoDeInterrupcoes();
    #endif      
    
    //I2c
    #ifdef I2c1_Usa_InterrupcoesDeAltaPrioridade
    I2c1_ServicoDeInterrupcoes();
    #endif          
    
    #ifdef I2c2_Usa_InterrupcoesDeAltaPrioridade
    I2c2_ServicoDeInterrupcoes();
    #endif      
    
    //Ccp
    #ifdef Ccp1_Usa_InterrupcoesDeAltaPrioridade
    Ccp1_ServicoDeInterrupcoes();
    #endif       
    
    #ifdef Ccp2_Usa_InterrupcoesDeAltaPrioridade
    Ccp2_ServicoDeInterrupcoes();
    #endif     

    #ifdef Ccp3_Usa_InterrupcoesDeAltaPrioridade
    Ccp3_ServicoDeInterrupcoes();
    #endif     
    
    #ifdef Ccp4_Usa_InterrupcoesDeAltaPrioridade
    Ccp4_ServicoDeInterrupcoes();
    #endif     
    
    #ifdef Ccp5_Usa_InterrupcoesDeAltaPrioridade
    Ccp5_ServicoDeInterrupcoes();
    #endif     
    
    #ifdef Ccp6_Usa_InterrupcoesDeAltaPrioridade
    Ccp6_ServicoDeInterrupcoes();
    #endif     
    
    #ifdef Ccp7_Usa_InterrupcoesDeAltaPrioridade
    Ccp7_ServicoDeInterrupcoes();
    #endif     
    
    #ifdef Ccp8_Usa_InterrupcoesDeAltaPrioridade
    Ccp8_ServicoDeInterrupcoes();
    #endif     

    #ifdef Ccp9_Usa_InterrupcoesDeAltaPrioridade
    Ccp9_ServicoDeInterrupcoes();
    #endif 

    #ifdef Ccp10_Usa_InterrupcoesDeAltaPrioridade
    Ccp10_ServicoDeInterrupcoes();
    #endif 

    //Ioc
    #ifdef Ioc1_Usa_InterrupcoesDeAltaPrioridade
    Ioc1_ServicoDeInterrupcoes();
    #endif     
}

/*
 * Cpu_LigaInterrupcoes()
 * Habilita o atendimento das dos pedidos de interrupções enviados pelos
 * dispositi vos do sistema.
 */
void Cpu_LigaInterrupcoes(void)
{
    INTCONbits.GIEL = 1;
    INTCONbits.GIEH = 1;    
}

/*
 * Cpu_DesligaInterrupcoes()
 * Desativa o atendimento dos pedidos de interrupções enviados pelos dispositi-
 * vos do sistema.
 */
void Cpu_DesligaInterrupcoes(void)
{
    INTCONbits.GIEL = 0;
    INTCONbits.GIEH = 0;    
}


#ifdef Cpu_Usa_InterrupcoesDeBaixaPrioridade
/*
 *  Isr_BaixaPrioridade
 *  Atendimento dos pedidos de interrupção de baixa prioridade
 */
void interrupt low_priority Isr_BaixaPrioridade (void)
{

    
    
    
    
    
    
}
#endif











#endif

