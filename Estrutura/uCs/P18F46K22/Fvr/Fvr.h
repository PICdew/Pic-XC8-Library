/* 
 *  Arquivo:    Fvr.h
 *  uC:         PIC18F46K22
 *  Autor:      JABNeto
 *  Vers�o:     161011 
 */


#ifndef FVR_H
#define	FVR_H

#include <xc.h>
#include "Definicoes Gerais.h"


//Defini��es do m�dulo --------------------------------------------------------
#define FVR_1024            1
#define FVR_2048            2
#define FVR_4096            3


#include "Fvr Config.h"


//Fun��es p�blicas do m�dulo --------------------------------------------------
void Fvr_Inicializacao (void);



#endif	/* FVR_H */

