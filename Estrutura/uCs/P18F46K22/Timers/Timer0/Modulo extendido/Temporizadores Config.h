/* 
 * Arquivo: Temporizadores Config.h
 * Autor:   JABNeto
 * Versão:  10.09.2017
 */

#ifndef TEMPORIZADORES_H
#define	TEMPORIZADORES_H

/*
 * 1. Temporizadores
 * Habilita/Desabilitas os temporizadores (1 a 5)
 * 
 * 1.1. Temporizador(n)_Habilitado
 * Habilita o módulo Temporizador n
 * 
 * Opções:
 * Nao: O temporizador não é habilitado
 * Sim: O temporizador é habilitado
 * 
 * 1.2. Utilização
 * A temporização deve ser iniciada pelo comando TemporizadorStart (Id,Tempo),
 * ond Id representa o temporizador de 1 a 5 e Tempo o tempo desejado em ms.
 * O maior tempo é 65535ms.
 * 
 * Ex. TemporizadorStart (1,100) Inicializa uma temporização de 100ms
 * utilizando-se o Temporizador1.
 * 
 * A verificação do término da temporização é feita pela função
 * Temporizador(n)_ExisteEvento(). Essa função retorna Sim se a temporização
 * terminou e não se a temporização está em andamento. Quando existe o evento, 
 * a função retorna Sim e limpa o evento.
 * 
 * Ex. if Temporizador1_ExisteEvento() == Sim
 *     {
 * 
 *     }
 */
#define Temporizador1_Habilitado                       Nao
#define Temporizador2_Habilitado                       Nao
#define Temporizador3_Habilitado                       Nao
#define Temporizador4_Habilitado                       Nao
#define Temporizador5_Habilitado                       Nao

#endif	/* TEMPORIZADORES_H */

