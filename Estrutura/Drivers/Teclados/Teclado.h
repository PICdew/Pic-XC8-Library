/* 
 * Arquivo: Teclado.h
 * Autor:   JABNeto
 * Versao:  150710
 */

#ifndef TECLADO_H
#define	TECLADO_H

#include <xc.h>
#include "Definicoes Gerais.h"

//Modos de opera��o do teclado
#define MANUAL             0
#define PERIODICO          1
#define DIRETO             2
#define RECUO              3


//Defini��e do m�dulo --------------------------------------------------------
#define S1                 PORTAbits.RA0
#define S2                 PORTAbits.RA1
#define S3                 PORTAbits.RA3
#define S4                 PORTAbits.RA4
#define S5                 PORTAbits.RA5


#define Pressionada        0
#define NPressionada       1



#include "Teclado Config.h"
//Estruturas do m�dulo --------------------------------------------------------




//Publica��o das fun��es do m�dulo -------------------------------------------




//Publica��o das vari�veis do m�dulo -----------------------------------------



//Fun��es estendidas ---------------------------------------------------------
#if Teclado_FuncoesEstendidas == Sim

typedef struct
{
    union
    {
        Uint Valor;

        struct
        {
            Uint Recuo:1;

        };
    }Controle;
        
    union
    {
        Uint Valor;

        struct
        {
            Uint TeclaS1:1;
            Uint TeclaS2:1;
            Uint TeclaS3:1;
            Uint TeclaS4:1;
            Uint TeclaS5:1;
        };
    }Eventos;    
}strTeclado;


//Publica��o das fun��es do m�dulo --------------------------------------------
void Teclado_Inicializacao (void);
void Teclado_Monitor(void);
Uchar Tecla_Pressionada (Uchar Tecla);

//Publica��o das vari�veis do m�dulo ------------------------------------------
extern strTeclado   Teclado;
#endif

#endif	/* TECLADO_H */

