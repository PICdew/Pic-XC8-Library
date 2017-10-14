/*
 * File:   App.c
 * Author: jose__000
 *
 * Created on 26 de Setembro de 2017, 11:37
 */


#include <xc.h>

#include "Ports.h"
#include "Cpu.h"


void main(void)
{
    Cpu_Inicializacao();
    
    ConfiguraPinoRB0_Saida(0);
    ConfiguraPinoRB1_Saida(0);
    ConfiguraPinoRB2_Saida(0);
    ConfiguraPinoRB3_Saida(0);    
    ConfiguraPinoRB4_Saida(0);    
    
    Cpu_InicializaInterrupcoes();
    
    
    while (1)
    {

    }

}

