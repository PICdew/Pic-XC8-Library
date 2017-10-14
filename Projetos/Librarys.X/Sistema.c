/*
 * File:    Sistema.c
 * Autor:   JABNeto 
 * Versão:  10.09.2017
 */


#include <xc.h>

#include "Cpu.h"
#include "App.h"



//Funções locais --------------------------------------------------------------

/*
 * Sistema_Inicializacao
 * Faz a inicialização do sistema. Iniciliza e configura os módulos do uC e 
 * do aplicativo.
 */
void Sistema_Inicializacao (void)
{
    Cpu_Inicializacao();
    App_Inicializacao();
    Cpu_InicializaInterrupcoes();
}



/*
 * main()
 * Função principal.
 */
void main(void)
{
    Sistema_Inicializacao();
    
    while (1)
    {
        App_Monitor();
    }
}
