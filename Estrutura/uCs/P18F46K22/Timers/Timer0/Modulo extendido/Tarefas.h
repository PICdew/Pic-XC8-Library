/* 
 * Arquivo: Tarefas.h
 * Autor:   JABNeto
 * Vers�o:  10.09.2017
 */

#ifndef TAREFAS_H
#define	TAREFAS_H

#include "Definicoes Gerais.h"
#include "Tarefas Config.h"




//Publica��o das fun��es e vari�veis do m�dulo --------------------------------
#if Tarefa1_Habilitada == Sim
void Tarefa1(void);
#endif

#if Tarefa2_Habilitada == Sim
void Tarefa2(void);
#endif

#if Tarefa3_Habilitada == Sim
void Tarefa3(void);
#endif

#if Tarefa4_Habilitada == Sim
void Tarefa4(void);
#endif

#if Tarefa5_Habilitada == Sim
void Tarefa5(void);
#endif

#endif	/* TAREFAS_H */

