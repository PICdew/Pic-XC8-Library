/* 
 * Arquivo: Cpu Config.h
 * uC:      PIC18F
 * Autor:   JABNeto
 * Versão:  24.06.2017
 */

#ifndef CPU_CONFIG_H
#define	CPU_CONFIG_H

/* Definições dos módulo que serão inicializados durante a configuração do
 * Sistema. Os módulo selecionados através da opção Sim devem estar presentes
 * na estrutura do projeto.
 */


//Oscillator
#define Cpu_Configura_Oscilador                         Nao

//Wdt
#define Cpu_Configura_Wdt                               Nao

//iE2prom
#define Cpu_Configura_iE2prom                           Nao

//Timer
#define Cpu_Configura_Timer0                            Nao   
#define Cpu_Configura_Timer1                            Nao  
#define Cpu_Configura_Timer2                            Nao  
#define Cpu_Configura_Timer3                            Nao  
#define Cpu_Configura_Timer4                            Nao  
#define Cpu_Configura_Timer5                            Nao  
#define Cpu_Configura_Timer6                            Nao  

//Adc
#define Cpu_Configura_Adc1                              Nao

//Dac
#define Cpu_Configura_Dac1                              Nao

//Comparator
#define Cpu_Configura_Comp1                             Nao
#define Cpu_Configura_Comp2                             Nao

//Usart
#define Cpu_Configura_Usart1                            Nao
#define Cpu_Configura_Usart2                            Nao

//Spi
#define Cpu_Configura_Spi1                              Nao
#define Cpu_Configura_Spi2                              Nao

//I2c
#define Cpu_Configura_I2c1                              Nao
#define Cpu_Configura_I2c2                              Nao

//Ccp - Capture-Compare-Pwm
#define Cpu_Configura_Ccp1                              Nao
#define Cpu_Configura_Ccp2                              Nao
#define Cpu_Configura_Ccp3                              Nao
#define Cpu_Configura_Ccp4                              Nao
#define Cpu_Configura_Ccp5                              Nao

//Int - External Interrupt
#define Cpu_Configura_Int0                              Nao
#define Cpu_Configura_Int1                              Nao
#define Cpu_Configura_Int2                              Nao

//Ioc - Interrupt on Change
#define Cpu_Configura_Ioc                               Nao

//Fvr - Fixed Voltage Reference
#define Cpu_Configura_Fvr                               Nao

//Hlvd - High and Low Voltage Detect
#define Cpu_Configura_Hldv                              Nao

//SrLatch - Set-Reset Latch
#define Cpu_Configura_SrLatch1                          Nao

//Ctmu - Charge Time Measurement Unit
#define Cpu_Configura_Ctmu1                             Nao













#endif	/* CPU_CONFIG_H */

