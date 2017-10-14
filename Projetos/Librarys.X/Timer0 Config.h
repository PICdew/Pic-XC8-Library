/* 
 * Arquivo: Timer 0 Config.h
 * Autor:   JABNeto
 * Versao:  150710
 */

 
#ifndef TIMER_0_CONFIG_H
#define	TIMER_0_CONFIG_H


/*
 * 1. Configurações do Timer
 * 
 * 1.1. Timer0_Usa_Interrupcao
 * Habilita ou não a geração de pedidos de interrupção pelo modulo
 * 
 * Opções
 * Não: O módulo não gera pedidos de interrupção
 * Sim: O módulo gera pedidos de interrupção
 * 
 * 1.2. Timer0_PrioridadeDaInterrupcao
 * Define o nível de prioridade de interrupção caso esta esteja habilitada
 * 
 * Opções
 * Baixa: Interrupção de Baixa prioridade
 * Alta: Interrupção de Alta prioridade
 * 
 * 1.3. Timer0_Tempo
 * Define o intervalo de tempo entre os pedidos de interrupção gerados. O tempo
 * deve ser fornecido em us.
 * Ex. 1000 (configura a gerção de interrupções em intervalos de 1ms)
 */

#define Timer0_Usa_Interrupcao                          Sim
#define Timer0_PrioridadeDaInterrupcao                  Alta
#define Timer0_Tempo                                    1000





#endif	/* TIMER_0_CONFIG_H */

