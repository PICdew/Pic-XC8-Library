/* 
 * Arquivo: Timer 0 Config.h
 * Autor:   JABNeto
 * Versao:  150710
 */

 
#ifndef TIMER_0_CONFIG_H
#define	TIMER_0_CONFIG_H


/*
 * 1. Configura��es do Timer
 * 
 * 1.1. Timer0_Usa_Interrupcao
 * Habilita ou n�o a gera��o de pedidos de interrup��o pelo modulo
 * 
 * Op��es
 * N�o: O m�dulo n�o gera pedidos de interrup��o
 * Sim: O m�dulo gera pedidos de interrup��o
 * 
 * 1.2. Timer0_PrioridadeDaInterrupcao
 * Define o n�vel de prioridade de interrup��o caso esta esteja habilitada
 * 
 * Op��es
 * Baixa: Interrup��o de Baixa prioridade
 * Alta: Interrup��o de Alta prioridade
 * 
 * 1.3. Timer0_Tempo
 * Define o intervalo de tempo entre os pedidos de interrup��o gerados. O tempo
 * deve ser fornecido em us.
 * Ex. 1000 (configura a ger��o de interrup��es em intervalos de 1ms)
 */

#define Timer0_Usa_Interrupcao                          Sim
#define Timer0_PrioridadeDaInterrupcao                  Alta
#define Timer0_Tempo                                    1000





#endif	/* TIMER_0_CONFIG_H */

