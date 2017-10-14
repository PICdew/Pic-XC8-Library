/*
 * File:    Sistema.c
 * Autor:   JABNeto 
 * Vers�o:  10.09.2017
 */


#include <xc.h>

#include "Cpu.h"
#include "App.h"



//Fun��es locais --------------------------------------------------------------

/*
 * Sistema_Inicializacao
 * Faz a inicializa��o do sistema. Iniciliza e configura os m�dulos do uC e 
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
 * Fun��o principal.
 */
void main(void)
{
    Sistema_Inicializacao();
    
    while (1)
    {
        App_Monitor();
    }
}
