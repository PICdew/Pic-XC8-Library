/* 
 * Arquivo: Lcd CGRam.h
 * Versão:  24.06.2017
 * Autor:   JABNeto
 */

#ifndef LCD_CGRAM_H
#define	LCD_CGRAM_H

#include "Definicoes Gerais.h"
#include "Lcd CGRam Config.h"


//Definições do módulo --------------------------------------------------------

//Endereços da CGRam
#define CGRAM_0         0
#define CGRAM_1         8
#define CGRAM_2         16
#define CGRAM_3         24
#define CGRAM_4         32
#define CGRAM_5         40
#define CGRAM_6         48
#define CGRAM_7         56


//Macros para alocação dos caracteres na memória ------------------------------
#if CGRam_Usar_0p == Sim
#define CGRam_0p()              const char CGRam_0p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_0p[];
#endif

#if CGRam_Usar_1p == Sim
#define CGRam_1p()              const char CGRam_1p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_1p[];
#endif

#if CGRam_Usar_2p == Sim
#define CGRam_02p()              const char CGRam_2p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_2p[];
#endif

#if CGRam_Usar_3p == Sim
#define CGRam_3p()              const char CGRam_3p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_3p[];
#endif

#if CGRam_Usar_4p == Sim
#define CGRam_4p()              const char CGRam_4p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_4p[];
#endif

#if CGRam_Usar_5p == Sim
#define CGRam_5p()              const char CGRam_5p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_5p[];
#endif

#if CGRam_Usar_6p == Sim
#define CGRam_6p()              const char CGRam_6p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_6p[];
#endif

#if CGRam_Usar_7p == Sim
#define CGRam_7p()              const char CGRam_7p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_7p[];
#endif

#if CGRam_Usar_8p == Sim
#define CGRam_8p()              const char CGRam_8p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_8p[];
#endif

#if CGRam_Usar_9p == Sim
#define CGRam_9p()              const char CGRam_9p[] = {0x00,0x00,0x00,0x00,\
                                                         0x00,0x00,0x00,0x00}
extern const char CGRam_9p[];
#endif

#if CGRam_Usar_Left1 == Sim
#define CGRam_Left1()       const char CGRam_Left1[] = {0x00,0x00,0x00,0x00,\
                                                        0x00,0x00,0x00,0x00}
extern const char CGRam_Left1[];
#endif

#if CGRam_Usar_Right1 == Sim
#define CGRam_Right1()       const char CGRam_Right1[] = {0x00,0x00,0x00,0x00,\
                                                          0x00,0x00,0x00,0x00}
extern const char CGRam_Right1[];
#endif

#if CGRam_Usar_Up1 == Sim
#define CGRam_Up1()             const char CGRam_Up1[] = {0x00,0x00,0x00,0x00,\
                                                          0x00,0x00,0x00,0x00}
extern const char CGRam_Up1[];
#endif

#if CGRam_Usar_Down1 == Sim
#define CGRam_Down1()       const char CGRam_Down1[] = {0x00,0x00,0x00,0x00,\
                                                          0x00,0x00,0x00,0x00}
extern const char CGRam_Down1[];
#endif

#if CGRam_Usar_Enter1 == Sim
#define CGRam_Enter1()       const char CGRam_Enter1[] = {0x00,0x00,0x00,0x00,\
                                                          0x00,0x00,0x00,0x00}
extern const char CGRam_Enter1[];
#endif

#if CGRam_Usar_NotaMusical1 == Sim
#define CGRam_NotaMusical1()    const char CGRam_NotaMusical1[] = {0x00,0x00,0x00,0x00,\
                                                                   0x00,0x00,0x00,0x00}
extern const char CGRam_NotaMusical1[];
#endif

#if CGRam_Usar_PacManDA == Sim
#define CGRam_PacManDA()    const char CGRam_PacManDA[] = {0x00,0x0E,0x1F,0x1C,\
                                                           0x1C,0x1F,0x0E,0x00}
extern const char CGRam_PacManDA[];
#endif 

#if CGRam_Usar_PacManDF == Sim
#define CGRam_PacManDF()    const char CGRam_PacManDF[] = {0x00,0x0E,0x1F,0x1F,\
                                                           0x1F,0x1F,0x0E,0x00}
extern const char CGRam_PacManDF[];
#endif 


#if CGRam_Usar_Man1 == Sim
#define CGRam_Man1()    const char CGRam_Man1[] = {0x04,0x0E,0x04,0x1F,\
                                                   0x04,0x04,0x0A,0x11}
extern const char CGRam_Man1[];
#endif 

#if CGRam_Usar_Man2 == Sim
#define CGRam_Man2()    const char CGRam_Man2[] = {0x04,0x0E,0x04,0x0E,\
                                                   0x15,0x04,0x0A,0x0A}
extern const char CGRam_Man2[];
#endif 






//Publicação das funções do módulo --------------------------------------------
void Lcd_CriaCaractereNaCGRAM (Uchar Local, Cchar *Caractere);






#endif	/* LCD_CGRAM_H */

