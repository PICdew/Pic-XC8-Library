/* 
 * Arquivo: Temporizadores Config.h
 * Autor:   JABNeto
 * Vers�o:  10.09.2017
 */

#ifndef TEMPORIZADORES_H
#define	TEMPORIZADORES_H

/*
 * 1. Temporizadores
 * Habilita/Desabilitas os temporizadores (1 a 5)
 * 
 * 1.1. Temporizador(n)_Habilitado
 * Habilita o m�dulo Temporizador n
 * 
 * Op��es:
 * Nao: O temporizador n�o � habilitado
 * Sim: O temporizador � habilitado
 * 
 * 1.2. Utiliza��o
 * A temporiza��o deve ser iniciada pelo comando TemporizadorStart (Id,Tempo),
 * ond Id representa o temporizador de 1 a 5 e Tempo o tempo desejado em ms.
 * O maior tempo � 65535ms.
 * 
 * Ex. TemporizadorStart (1,100) Inicializa uma temporiza��o de 100ms
 * utilizando-se o Temporizador1.
 * 
 * A verifica��o do t�rmino da temporiza��o � feita pela fun��o
 * Temporizador(n)_ExisteEvento(). Essa fun��o retorna Sim se a temporiza��o
 * terminou e n�o se a temporiza��o est� em andamento. Quando existe o evento, 
 * a fun��o retorna Sim e limpa o evento.
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

