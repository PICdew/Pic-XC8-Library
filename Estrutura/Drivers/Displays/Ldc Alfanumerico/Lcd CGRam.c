/* 
 * Arquivo: Lcd CGRam.h
 * Versão:  24.06.2017
 * Autor:   JABNeto
 */

#include "Lcd.h"
#include "Lcd CGRam.h"


//Alocação de memória para o módulo -------------------------------------------
#if CGRam_Usar_0p == Sim
CGRam_0p();
#endif

#if CGRam_Usar_1p == Sim
CGRam_1p();
#endif

#if CGRam_Usar_2p == Sim
CGRam_2p();
#endif

#if CGRam_Usar_3p == Sim
CGRam_3p();
#endif

#if CGRam_Usar_4p == Sim
CGRam_4p();
#endif

#if CGRam_Usar_5p == Sim
CGRam_5p();
#endif

#if CGRam_Usar_6p == Sim
CGRam_6p();
#endif

#if CGRam_Usar_7p == Sim
CGRam_7p();
#endif

#if CGRam_Usar_8p == Sim
CGRam_8p();
#endif

#if CGRam_Usar_9p == Sim
CGRam_9p();
#endif

#if CGRam_Usar_Left1 == Sim
CGRam_Left1();
#endif

#if CGRam_Usar_Right1 == Sim
CGRam_Right1();
#endif

#if CGRam_Usar_Up1 == Sim
CGRam_Up1();
#endif

#if CGRam_Usar_Down1 == Sim
CGRam_Down1();
#endif

#if CGRam_Usar_Enter1 == Sim
CGRam_Enter1();
#endif

#if CGRam_Usar_NotaMusical1 == Sim
CGRam_NotaMusical1();
#endif

#if CGRam_Usar_PacManDA == Sim
CGRam_PacManDA();
#endif 

#if CGRam_Usar_PacManDF == Sim
CGRam_PacManDF();
#endif 

#if CGRam_Usar_Man1 == Sim
CGRam_Man1();
#endif 

#if CGRam_Usar_Man2 == Sim
CGRam_Man2();
#endif 


//Funções do módulo -----------------------------------------------------------

/*
 * Lcd_CriaCaractereNaCGRam
 * Cria um caractere ou simbolo na CGRam.
 * 
 * Local: Define o endereço de armazenamento (CGRAM_0 a CGRAM_7)
 * Caractere: Endereço da matriz do caractere.
 */
void Lcd_CriaCaractereNaCGRAM (Uchar Local, Cchar *Caractere)
{
    Uchar i;
    
    Local |= 0x40;
    Lcd_EnviaComando (Local);

    
    for (i = 0; i < 8; i++)
    {
        Lcd_EscreveNaDDRam(*Caractere++);
    }
}