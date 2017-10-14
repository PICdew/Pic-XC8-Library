/* 
 * Arquivo: Display de Leds.C
 * Autor:   JABNeto
 * Data:    17/08/2015
 */

#include <xc.h>
#include "Display de Leds.h"


//Alocação de memória para o módulo -------------------------------------------
strDisplay Display;



//Funções locais do módulo ----------------------------------------------------




//Funções públicas do módulo --------------------------------------------------

/*
 * Display_Inicializacao
 * Faz a inicialização do display. Essa função deve ser chamada antes da
 * utilização das demais funções do módulo.
 */
void Display_Inicializacao (void)
{
    //Latch (OE) - Pino RD3 do uC
    ANSELDbits.ANSD3 = 0;    
    LATDbits.LATD3 = 1;    
    TRISDbits.TRISD3 = 0;     

    //Latch (CLK) - Pino RD2 do uC 
    ANSELDbits.ANSD2 = 0;      
    LATDbits.LATD2 = 0;    
    TRISDbits.TRISD2 = 0;     
  
    //PORTB
    ANSELB = 0;
    LATB = 0;
    TRISB = 0;
    
    //Inicialização do digito
    Display_LigaDigito (0,0);
    
    Display.Buffers._Digito1 = _br;
    Display.Buffers._Digito2 = _br;    
    Display.Buffers._Digito3 = _br;
    Display.Buffers._Digito4 = _br;
    Display.Buffers._Digito5 = _br;
    Display.Buffers._Digito6 = _br;
    Display.Buffers._Leds = _br;
    Display.Controle.sequencia = 0;
}


/*
 * Display_LigaDigito
 * Liga o transistor de controle de um dos displays ou Leds, e escreve o
 * codigo do caractere fornecido.
 * 
 * CodigoDoDigito: código que liga o digito desejado.
 *                 Ex. _Leds, _Digito1, _Digito2 ... 
 * Caractere: Código de 7 segmentos para a excitação dos segmentos do display.
 *                 Ex. _0, _4, _Sa ... 
 */
void Display_LigaDigito (Uchar CodigoDoDigito,Uchar Caractere)
{
    LATDbits.LATD3 = 1;
    
    LATB = CodigoDoDigito;
    LATDbits.LATD2 = 1;
    NOP();
    NOP();
    LATDbits.LATD2 = 0;
  
    LATB = Caractere;
    LATDbits.LATD3 = 0;
}

/*
 * Display_ExibeCaractere
 * Escreve caractere fornecido no display ou leds. O digito deve estar ligado
 * para que o caractere seja exibido
 */
void Display_ExibeCaractere (Uchar Caractere)
{
    LATB = Caractere;    
}


/*
 * Display_Varredura
 * Faz o controle de varredurado display. Deve ser chamada periodicamente pela
 * rotina de controle de tempo
 */
void Display_Varredura (void)
{
    Display_LigaDigito(0,0);
    
    switch (Display.Controle.sequencia)
    {
        case 0:
            Display_LigaDigito(Digito1,Display.Buffers._Digito1);
            Display.Controle.sequencia++;
            break;

        case 1:
            Display_LigaDigito(Digito2,Display.Buffers._Digito2);
            Display.Controle.sequencia++;
            break;            
            
        case 2:
            Display_LigaDigito(Digito3,Display.Buffers._Digito3);
            Display.Controle.sequencia++;
            break; 
            
        case 3:
            Display_LigaDigito(Digito4,Display.Buffers._Digito4);
            Display.Controle.sequencia++;
            break;            

        case 4:
            Display_LigaDigito(Digito5,Display.Buffers._Digito5);
            Display.Controle.sequencia++;
            break;  
            
        case 5:
            Display_LigaDigito(Digito6,Display.Buffers._Digito6);
            Display.Controle.sequencia++;
            break;

        case 6:
            Display_LigaDigito(Leds,Display.Buffers._Leds);
            Display.Controle.sequencia = 0;
            break;            
    }
}