/* 
 * Arquivo: Portas.h
 * uC:      PIC18F46K22
 * Autor:   JABNeto
 * Versão:  10.09.2017
 */

#ifndef PORTAS_IO_H
#define	PORTAS_IO_H

#include <xc.h>

#define Saida       0
#define Entrada     1

#define Digital     0
#define Analogico   1

//Portas
#define PortA   1
#define PortB   2
#define PortC   3
#define PortD   4
#define PortE   5


//Pinos
#define PinoRA0  1
#define PinoRA1  2
#define PinoRA2  3
#define PinoRA3  4
#define PinoRA4  5
#define PinoRA5  6
#define PinoRA6  7
#define PinoRA7  8

#define PinoRB0  9
#define PinoRB1  10
#define PinoRB2  11
#define PinoRB3  12
#define PinoRB4  13
#define PinoRB5  14
#define PinoRB6  15
#define PinoRB7  16

#define PinoRC0  17
#define PinoRC1  18
#define PinoRC2  19
#define PinoRC3  20
#define PinoRC4  21
#define PinoRC5  22
#define PinoRC6  23
#define PinoRC7  24

#define PinoRD0  25
#define PinoRD1  26
#define PinoRD2  27
#define PinoRD3  28
#define PinoRD4  29
#define PinoRD5  30
#define PinoRD6  31
#define PinoRD7  32

#define PinoRE0  33
#define PinoRE1  34
#define PinoRE2  35
#define PinoRE3  36


//Macros do PORT A -----------------------------------------------------------
#define ConfiguraPortA_Entradas()               {ANSELA = 0x00; TRISA = 0xFF;}
#define ConfiguraPortA_NibbleLowEntradas()      {ANSELA &= 0xF0; TRISA |= 0x0F;}
#define ConfiguraPortA_NibbleHighEntradas()     {ANSELA &= 0xEF; TRISA |= 0xF0;}
#define PortA_Wr(x)                             LATA = x

#define ConfiguraPortA_Saidas(x)                {ANSELA = 0x00; LATA = x; TRISA = 0x00;}
#define ConfiguraPortA_NibbleLowSaidas(x)       {ANSELA &= 0xF0; LATA &= 0xF0; LATA |= (x & 0x0F);TRISA &= 0xF0;}
#define ConfiguraPortA_NibbleHighSaidas(x)      {ANSELA &= 0xF0; LATA &= 0x0F; LATA |= (x & 0xF0);TRISA &= 0xF0;}
#define PortA_Rd()                              PORTA

#define ConfiguraPinoRA0_Analogico()            {ANSELAbits.ANSA0 = Analogico; TRISAbits.TRISA0 = Entrada;}
#define ConfiguraPinoRA0_Entrada()              {ANSELAbits.ANSA0 = Digital; TRISAbits.TRISA0 = Entrada;}                                            
#define ConfiguraPinoRA0_Saida(x)               {ANSELAbits.ANSA0 = Digital; TRISAbits.TRISA0 = Saida; LATAbits.LATA0 = x;}
#define PinoRA0_Wr(x)                           LATAbits.LATA0 = x
#define PinoRA0_Rd()                            PORTAbits.RA0
#define PinoRA0_Toggle()                        asm ("BTG LATA,0,0")

#define ConfiguraPinoRA1_Analogico()            {ANSELAbits.ANSA1 = Analogico; TRISAbits.TRISA1 = Entrada;}
#define ConfiguraPinoRA1_Entrada()              {ANSELAbits.ANSA1 = Digital; TRISAbits.TRISA1 = Entrada;}                                            
#define ConfiguraPinoRA1_Saida(x)               {ANSELAbits.ANSA1 = Digital; TRISAbits.TRISA1 = Saida; LATAbits.LATA1 = x;}
#define PinoRA1_Wr(x)                           LATAbits.LATA1 = x
#define PinoRA1_Rd()                            PORTAbits.RA1
#define PinoRA1_Toggle()                        asm ("BTG LATA,1,0")

#define ConfiguraPinoRA2_Analogico()            {ANSELAbits.ANSA2 = Analogico; TRISAbits.TRISA2 = Entrada;}
#define ConfiguraPinoRA2_Entrada()              {ANSELAbits.ANSA2 = Digital;TRISAbits.TRISA2 = Entrada;}                                            
#define ConfiguraPinoRA2_Saida(x)               {ANSELAbits.ANSA2 = Digital; TRISAbits.TRISA2 = Saida; LATAbits.LATA2 = x;}
#define PinoRA2_Wr(x)                           LATAbits.LATA2 = x
#define PinoRA2_Rd()                            PORTAbits.RA2
#define PinoRA2_Toggle()                        asm ("BTG LATA,2,0")

#define ConfiguraPinoRA3_Analogico()            {ANSELAbits.ANSA3 = Analogico; TRISAbits.TRISA3 = Entrada;}
#define ConfiguraPinoRA3_Entrada()              {ANSELAbits.ANSA3 = Digital; TRISAbits.TRISA3 = Entrada;}                                            
#define ConfiguraPinoRA3_Saida(x)               {ANSELAbits.ANSA3 = Digital; TRISAbits.TRISA3 = Saida; LATAbits.LATA3 = x;}
#define PinoRA3_Wr(x)                           LATAbits.LATA3 = x
#define PinoRA3_Rd()                            PORTAbits.RA3
#define PinoRA3_Toggle()                        asm ("BTG LATA,3,0")

#define ConfiguraPinoRA4_Entrada()              {TRISAbits.TRISA4 = Entrada;}                                            
#define ConfiguraPinoRA4_Saida(x)               {TRISAbits.TRISA4 = Saida; LATAbits.LATA4 = x;}
#define PinoRA4_Wr(x)                           LATAbits.LATA4 = x
#define PinoRA4_Rd()                            PORTAbits.RA4
#define PinoRA4_Toggle()                        asm ("BTG LATA,4,0")

#define ConfiguraPinoRA5_Analogico()            {ANSELAbits.ANSA5 = Analogico; TRISAbits.TRISA5 = Entrada;}
#define ConfiguraPinoRA5_Entrada()              {ANSELAbits.ANSA5 = Digital; TRISAbits.TRISA5 = Entrada;}                                            
#define ConfiguraPinoRA5_Saida(x)               {ANSELAbits.ANSA5 = Digital; TRISAbits.TRISA5 = Saida; LATAbits.LATA5 = x;}
#define PinoRA5_Wr(x)                           LATAbits.LATA5 = x
#define PinoRA5_Rd()                            PORTAbits.RA5
#define PinoRA5_Toggle()                        asm ("BTG LATA,5,0")

#define ConfiguraPinoRA6_Entrada()              {TRISAbits.TRISA6 = Entrada;}                                            
#define ConfiguraPinoRA6_Saida(x)               {TRISAbits.TRISA6 = Saida; LATAbits.LATA6 = x;}
#define PinoRA6_Wr(x)                           LATAbits.LATA6 = x
#define PinoRA6_Rd()                            PORTAbits.RA6
#define PinoRA6_Toggle()                        asm ("BTG LATA,6,0")

#define ConfiguraPinoRA7_Entrada()              {TRISAbits.TRISA7 = Entrada;}                                            
#define ConfiguraPinoRA7_Saida(x)               {TRISAbits.TRISA7 = Saida; LATAbits.LATA7 = x;}
#define PinoRA7_Wr(x)                           LATAbits.LATA7 = x
#define PinoRA7_Rd()                            PORTAbits.RA7
#define PinoRA7_Toggle()                        asm ("BTG LATA,7,0")

//Macros do PORT B -----------------------------------------------------------
#define ConfiguraPortB_Entradas()               {ANSELB = 0x00; TRISB = 0xFF;}
#define ConfiguraPortB_NibbleLowEntradas()      {ANSELB &= 0xF0; TRISB |= 0x0F;}
#define ConfiguraPortB_NibbleHighEntradas()     {ANSELB &= 0xEF; TRISB |= 0xF0;}
#define PortB_Wr(x)                             LATB = x

#define ConfiguraPortB_Saidas(x)                {ANSELB = 0x00; LATB = x; TRISB = 0x00;}
#define ConfiguraPortB_NibbleLowSaidas(x)       {ANSELB &= 0xF0; LATB &= 0xF0; LATB |= (x & 0x0F);TRISB &= 0xF0;}
#define ConfiguraPortB_NibbleHighSaidas(x)      {ANSELB &= 0x0F; LATB &= 0x0F; LATB |= (x & 0xF0);TRISB &= 0x0F;}
#define PortB_Rd()                              PORTB
#define Portb_LigaPullUps()                     INTCON2bits.RBPU = 0
#define Portb_DesligaPullUps()                  INTCON2bits.RBPU = 1

#define ConfiguraPinoRB0_Analogico()            {ANSELBbits.ANSB0 = Analogico; TRISBbits.TRISB0 = Entrada;}
#define ConfiguraPinoRB0_Entrada()              {ANSELBbits.ANSB0 = Digital; TRISBbits.TRISB0 = Entrada;}                                            
#define ConfiguraPinoRB0_Saida(x)               {ANSELBbits.ANSB0 = Digital; TRISBbits.TRISB0 = Saida; LATBbits.LATB0 = x;}
#define PinoRB0_Wr(x)                           LATBbits.LATB0 = x
#define PinoRB0_Rd()                            PORTBbits.RB0
#define PinoRB0_Toggle()                        asm ("BTG LATB,0,0")
#define PinoRB0_LigaPullUp()                    WPUBbits.WPUB0 = 1
#define PinoRB0_DesligaPullUp()                 WPUBbits.WPUB0 = 0

#define ConfiguraPinoRB1_Analogico()            {ANSELBbits.ANSB1 = Analogico; TRISBbits.TRISB1 = Entrada;}
#define ConfiguraPinoRB1_Entrada()              {ANSELBbits.ANSB1 = Digital; TRISBbits.TRISB1 = Entrada;}                                            
#define ConfiguraPinoRB1_Saida(x)               {ANSELBbits.ANSB1 = Digital; TRISBbits.TRISB1 = Saida; LATBbits.LATB1 = x;}
#define PinoRB1_Wr(x)                           LATBbits.LATB1 = x
#define PinoRB1_Rd()                            PORTBbits.RB1
#define PinoRB1_Toggle()                        asm ("BTG LATB,1,0")
#define PinoRB1_LigaPullUp()                    WPUBbits.WPUB1 = 1
#define PinoRB1_DesligaPullUp()                 WPUBbits.WPUB1 = 0

#define ConfiguraPinoRB2_Analogico()            {ANSELBbits.ANSB2 = Analogico; TRISBbits.TRISB2 = Entrada;}
#define ConfiguraPinoRB2_Entrada()              {ANSELBbits.ANSB2 = Digital; TRISBbits.TRISB2 = Entrada;}                                            
#define ConfiguraPinoRB2_Saida(x)               {ANSELBbits.ANSB2 = Digital; TRISBbits.TRISB2 = Saida; LATBbits.LATB2 = x;}
#define PinoRB2_Wr(x)                           LATBbits.LATB2 = x
#define PinoRB2_Rd()                            PORTBbits.RB2
#define PinoRB2_Toggle()                        asm ("BTG LATB,2,0")
#define PinoRB2_LigaPullUp()                    WPUBbits.WPUB2 = 1
#define PinoRB2_DesligaPullUp()                 WPUBbits.WPUB2 = 0

#define ConfiguraPinoRB3_Analogico()            {ANSELBbits.ANSB3 = Analogico; TRISBbits.TRISB3 = Entrada;}
#define ConfiguraPinoRB3_Entrada()              {ANSELBbits.ANSB3 = Digital; TRISBbits.TRISB3 = Entrada;}                                            
#define ConfiguraPinoRB3_Saida(x)               {ANSELBbits.ANSB3 = Digital; TRISBbits.TRISB3 = Saida; LATBbits.LATB3 = x;}
#define PinoRB3_Wr(x)                           LATBbits.LATB3 = x
#define PinoRB3_Rd()                            PORTBbits.RB3
#define PinoRB3_Toggle()                        asm ("BTG LATB,3,0")
#define PinoRB3_LigaPullUp()                    WPUBbits.WPUB3 = 1
#define PinoRB3_DesligaPullUp()                 WPUBbits.WPUB3 = 0

#define ConfiguraPinoRB4_Analogico()            {ANSELBbits.ANSB4 = Analogico; TRISBbits.TRISB4 = Entrada;}
#define ConfiguraPinoRB4_Entrada()              {ANSELBbits.ANSB4 = Digital; TRISBbits.TRISB4 = Entrada;}                                             
#define ConfiguraPinoRB4_Saida(x)               {ANSELBbits.ANSB4 = Digital; TRISBbits.TRISB4 = Saida; LATBbits.LATB4 = x;}
#define PinoRB4_Wr(x)                           LATBbits.LATB4 = x
#define PinoRB4_Rd()                            PORTBbits.RB4
#define PinoRB4_Toggle()                        asm ("BTG LATB,4,0")
#define PinoRB4_LigaPullUp()                    WPUBbits.WPUB4 = 1
#define PinoRB4_DesligaPullUp()                 WPUBbits.WPUB4 = 0

#define ConfiguraPinoRB5_Analogico()            {ANSELBbits.ANSB5 = Analogico; TRISBbits.TRISB5 = Entrada;}
#define ConfiguraPinoRB5_Entrada()              {ANSELBbits.ANSB5 = Digital; TRISBbits.TRISB5 = Entrada;}                                            
#define ConfiguraPinoRB5_Saida(x)               {ANSELBbits.ANSB5 = Digital; TRISBbits.TRISB5 = Saida; LATBbits.LATB5 = x;}
#define PinoRB5_Wr(x)                           LATBbits.LATB5 = x
#define PinoRB5_Rd()                            PORTBbits.RB5
#define PinoRB5_Toggle()                        asm ("BTG LATB,5,0")
#define PinoRB5_LigaPullUp()                    WPUBbits.WPUB5 = 1
#define PinoRB5_DesligaPullUp()                 WPUBbits.WPUB5 = 0

#define ConfiguraPinoRB6_Entrada()              {TRISBbits.TRISB6 = Entrada;}                                            
#define ConfiguraPinoRB6_Saida(x)               {TRISBbits.TRISB6 = Saida; LATBbits.LATB6 = x;}
#define PinoRB6_Wr(x)                           LATBbits.LATB6 = x
#define PinoRB6_Rd()                            PORTBbits.RB6
#define PinoRB6_Toggle()                        asm ("BTG LATB,6,0")
#define PinoRB6_LigaPullUp()                    WPUBbits.WPUB6 = 1
#define PinoRB6_DesligaPullUp()                 WPUBbits.WPUB6 = 0

#define ConfiguraPinoRB7_Entrada()              {TRISBbits.TRISB7 = Entrada;}                                            
#define ConfiguraPinoRB7_Saida(x)               {TRISBbits.TRISB7 = Saida; LATBbits.LATB7 = x;}
#define PinoRB7_Wr(x)                           LATBbits.LATB7 = x
#define PinoRB7_Rd()                            PORTBbits.RB7
#define PinoRB7_Toggle()                        asm ("BTG LATB,7,0")
#define PinoRB7_LigaPullUp()                    WPUBbits.WPUB7 = 1
#define PinoRB7_DesligaPullUp()                 WPUBbits.WPUB7 = 0


//Macros do PORT C -----------------------------------------------------------
#define ConfiguraPortC_Entradas()               {ANSELC = 0x00; TRISC = 0xFF;}
#define ConfiguraPortC_NibbleLowEntradas()      {ANSELC &= 0xF0; TRISC |= 0x0F;}
#define ConfiguraPortC_NibbleHighEntradas()     {ANSELC &= 0xEF; TRISC |= 0xF0;}
#define PortC_Wr(x)                             LATC = x

#define ConfiguraPortC_Saidas(x)                {ANSELC = 0x00; LATC = x; TRISC = 0x00;}
#define ConfiguraPortC_NibbleLowSaidas(x)       {ANSELC &= 0xF0; LATC &= 0xF0; LATC |= (x & 0x0F);TRISC &= 0xF0;}
#define ConfiguraPortC_NibbleHighSaidas(x)      {ANSELC &= 0x0F; LATC &= 0x0F; LATC |= (x & 0xF0);TRISC &= 0x0F;}
#define PortC_Rd()                              PORTC

#define ConfiguraPinoRC0_Entrada()              {TRISCbits.TRISC0 = Entrada;}                                            
#define ConfiguraPinoRC0_Saida(x)               {TRISCbits.TRISC0 = Saida; LATCbits.LATC0 = x;}
#define PinoRC0_Wr(x)                           LATCbits.LATC0 = x
#define PinoRC0_Rd()                            PORTCbits.RC0
#define PinoRC0_Toggle()                        asm ("BTG LATC,0,0")

#define ConfiguraPinoRC1_Entrada()              {TRISCbits.TRISC1 = Entrada;}                                            
#define ConfiguraPinoRC1_Saida(x)               {TRISCbits.TRISC1 = Saida; LATCbits.LATC1 = x;}
#define PinoRC1_Wr(x)                           LATCbits.LATC1 = x
#define PinoRC1_Rd()                            PORTCbits.RC1
#define PinoRC1_Toggle()                        asm ("BTG LATC,1,0")

#define ConfiguraPinoRC2_Analogico()            {ANSELCbits.ANSC2 = Analogico; TRISCbits.TRISC2 = Entrada;}
#define ConfiguraPinoRC2_Entrada()              {ANSELCbits.ANSC2 = Digital; TRISCbits.TRISC2 = Entrada;}                                            
#define ConfiguraPinoRC2_Saida(x)               {ANSELCbits.ANSC2 = Digital; TRISCbits.TRISC2 = Saida; LATCbits.LATC2 = x;}
#define PinoRC2_Wr(x)                           LATCbits.LATC2 = x
#define PinoRC2_Rd()                            PORTCbits.RC2
#define PinoRC2_Toggle()                        asm ("BTG LATC,2,0")

#define ConfiguraPinoRC3_Analogico()            {ANSELCbits.ANSC3 = Analogico; TRISCbits.TRISC3 = Entrada;}
#define ConfiguraPinoRC3_Entrada()              {ANSELCbits.ANSC3 = Digital; TRISCbits.TRISC3 = Entrada;}                                            
#define ConfiguraPinoRC3_Saida(x)               {ANSELCbits.ANSC3 = Digital; TRISCbits.TRISC3 = Saida; LATCbits.LATC3 = x;}
#define PinoRC3_Wr(x)                           LATCbits.LATC3 = x
#define PinoRC3_Rd()                            PORTCbits.RC3
#define PinoRC3_Toggle()                        asm ("BTG LATC,3,0")

#define ConfiguraPinoRC4_Analogico()            {ANSELCbits.ANSC4 = Analogico; TRISCbits.TRISC4 = Entrada;}
#define ConfiguraPinoRC4_Entrada()              {ANSELCbits.ANSC4 = Digital; TRISCbits.TRISC4 = Entrada;}                                             
#define ConfiguraPinoRC4_Saida(x)               {ANSELCbits.ANSC4 = Digital; TRISCbits.TRISC4 = Saida; LATCbits.LATC4 = x;}
#define PinoRC4_Wr(x)                           LATCbits.LATC4 = x
#define PinoRC4_Rd()                            PORTCbits.RC4
#define PinoRC4_Toggle()                        asm ("BTG LATC,4,0")

#define ConfiguraPinoRC5_Analogico()            {ANSELCbits.ANSC5 = Analogico; TRISCbits.TRISC5 = Entrada;}
#define ConfiguraPinoRC5_Entrada()              {ANSELCbits.ANSC5 = Digital; TRISCbits.TRISC5 = Entrada;}                                            
#define ConfiguraPinoRC5_Saida(x)               {ANSELCbits.ANSC5 = Digital; TRISCbits.TRISC5 = Saida; LATCbits.LATC5 = x;}
#define PinoRC5_Wr(x)                           LATCbits.LATC5 = x
#define PinoRC5_Rd()                            PORTCbits.RC5
#define PinoRC5_Toggle()                        asm ("BTG LATC,5,0")

#define ConfiguraPinoRC6_Analogico()            {ANSELCbits.ANSC6 = Analogico; TRISCbits.TRISC6 = Entrada;}
#define ConfiguraPinoRC6_Entrada()              {ANSELCbits.ANSC6 = Digital; TRISCbits.TRISC6 = Entrada;}                                            
#define ConfiguraPinoRC6_Saida(x)               {ANSELCbits.ANSC6 = Digital; TRISCbits.TRISC6 = Saida; LATCbits.LATC6 = x;}
#define PinoRC6_Wr(x)                           LATCbits.LATC6 = x
#define PinoRC6_Rd()                            PORTCbits.RC6
#define PinoRC6_Toggle()                        asm ("BTG LATC,6,0")

#define ConfiguraPinoRC7_Analogico()            {ANSELCbits.ANSC7 = Analogico; TRISCbits.TRISC7 = Entrada;}
#define ConfiguraPinoRC7_Entrada()              {ANSELCbits.ANSC7 = Digital; TRISCbits.TRISC7 = Entrada;}                                            
#define ConfiguraPinoRC7_Saida(x)               {ANSELCbits.ANSC7 = Digital; TRISCbits.TRISC7 = Saida; LATCbits.LATC7 = x;}
#define PinoRC7_Wr(x)                           LATCbits.LATC7 = x
#define PinoRC7_Rd()                            PORTCbits.RC7
#define PinoRC7_Toggle()                        asm ("BTG LATC,7,0")


//Macros do PORT D -----------------------------------------------------------
#define ConfiguraPortD_Entradas()               {ANSELD = 0x00; TRISD = 0xFF;}
#define ConfiguraPortD_NibbleLowEntradas()      {ANSELD &= 0xF0; TRISD |= 0x0F;}
#define ConfiguraPortD_NibbleHighEntradas()     {ANSELD &= 0xEF; TRISD |= 0xF0;}
#define PortD_Wr(x)                             LATD = x

#define ConfiguraPortD_Saidas(x)                {ANSELD = 0x00; LATD = x; TRISD = 0x00;}
#define ConfiguraPortD_NibbleLowSaidas(x)       {ANSELD &= 0xF0; LATD &= 0xF0; LATD |= (x & 0x0F);TRISD &= 0xF0;}
#define ConfiguraPortD_NibbleHighSaidas(x)      {ANSELD &= 0x0F; LATD &= 0x0F; LATD |= (x & 0xF0);TRISD &= 0x0F;}
#define PortD_Rd()                              PORTD

#define ConfiguraPinoRD0_Analogico()            {ANSELDbits.ANSD0 = Analogico; TRISDbits.TRISD0 = Entrada;}
#define ConfiguraPinoRD0_Entrada()              {ANSELDbits.ANSD0 = Digital; TRISDbits.TRISD0 = Entrada;}                                            
#define ConfiguraPinoRD0_Saida(x)               {ANSELDbits.ANSD0 = Digital; TRISDbits.TRISD0 = Saida; LATDbits.LATD0 = x;}
#define PinoRD0_Wr(x)                           LATDbits.LATD0 = x
#define PinoRD0_Rd()                            PORTDbits.RD0
#define PinoRD0_Toggle()                        asm ("BTG LATD,0,0")

#define ConfiguraPinoRD1_Analogico()            {ANSELDbits.ANSD1 = Analogico; TRISDbits.TRISD1 = Entrada;}
#define ConfiguraPinoRD1_Entrada()              {ANSELDbits.ANSD1 = Digital; TRISDbits.TRISD1 = Entrada;}                                            
#define ConfiguraPinoRD1_Saida(x)               {ANSELDbits.ANSD1 = Digital; TRISDbits.TRISD1 = Saida; LATDbits.LATD1 = x;}
#define PinoRD1_Wr(x)                           LATDbits.LATD1 = x
#define PinoRD1_Rd()                            PORTDbits.RD1
#define PinoRD1_Toggle()                        asm ("BTG LATD,1,0")

#define ConfiguraPinoRD2_Analogico()            {ANSELDbits.ANSD2 = Analogico; TRISDbits.TRISD2 = Entrada;}
#define ConfiguraPinoRD2_Entrada()              {ANSELDbits.ANSD2 = Digital; TRISDbits.TRISD2 = Entrada;}                                            
#define ConfiguraPinoRD2_Saida(x)               {ANSELDbits.ANSD2 = Digital; TRISDbits.TRISD2 = Saida; LATDbits.LATD2 = x;}
#define PinoRD2_Wr(x)                           LATDbits.LATD2 = x
#define PinoRD2_Rd()                            PORTDbits.RD2
#define PinoRD2_Toggle()                        asm ("BTG LATD,2,0")

#define ConfiguraPinoRD3_Analogico()            {ANSELDbits.ANSD3 = Analogico; TRISDbits.TRISD3 = Entrada;}
#define ConfiguraPinoRD3_Entrada()              {ANSELDbits.ANSD3 = Digital; TRISDbits.TRISD3 = Entrada;}                                            
#define ConfiguraPinoRD3_Saida(x)               {ANSELDbits.ANSD3 = Digital; TRISDbits.TRISD3 = Saida; LATDbits.LATD3 = x;}
#define PinoRD3_Wr(x)                           LATDbits.LATD3 = x
#define PinoRD3_Rd()                            PORTDbits.RD3
#define PinoRD3_Toggle()                        asm ("BTG LATD,3,0")

#define ConfiguraPinoRD4_Analogico()            {ANSELDbits.ANSD4 = Analogico; TRISDbits.TRISD4 = Entrada;}
#define ConfiguraPinoRD4_Entrada()              {ANSELDbits.ANSD4 = Digital; TRISDbits.TRISD4 = Entrada;}                                             
#define ConfiguraPinoRD4_Saida(x)               {ANSELDbits.ANSD4 = Digital; TRISDbits.TRISD4 = Saida; LATDbits.LATD4 = x;}
#define PinoRD4_Wr(x)                           LATDbits.LATD4 = x
#define PinoRD4_Rd()                            PORTDbits.RD4
#define PinoRD4_Toggle()                        asm ("BTG LATD,4,0")

#define ConfiguraPinoRD5_Analogico()            {ANSELDbits.ANSD5 = Analogico; TRISDbits.TRISD5 = Entrada;}
#define ConfiguraPinoRD5_Entrada()              {ANSELDbits.ANSD5 = Digital; TRISDbits.TRISD5 = Entrada;}                                            
#define ConfiguraPinoRD5_Saida(x)               {ANSELDbits.ANSD5 = Digital; TRISDbits.TRISD5 = Saida; LATDbits.LATD5 = x;}
#define PinoRD5_Wr(x)                           LATDbits.LATD5 = x
#define PinoRD5_Rd()                            PORTDbits.RD5
#define PinoRD5_Toggle()                        asm ("BTG LATD,5,0")

#define ConfiguraPinoRD6_Analogico()            {ANSELDbits.ANSD6 = Analogico; TRISDbits.TRISD6 = Entrada;}
#define ConfiguraPinoRD6_Entrada()              {ANSELDbits.ANSD6 = Digital; TRISDbits.TRISD6 = Entrada;}                                            
#define ConfiguraPinoRD6_Saida(x)               {ANSELDbits.ANSD6 = Digital; TRISDbits.TRISD6 = Saida; LATDbits.LATD6 = x;}
#define PinoRD6_Wr(x)                           LATDbits.LATD6 = x
#define PinoRD6_Rd()                            PORTDbits.RD6
#define PinoRD6_Toggle()                        asm ("BTG LATD,6,0")

#define ConfiguraPinoRD7_Analogico()            {ANSELDbits.ANSD7 = Analogico; TRISDbits.TRISD7 = Entrada;}
#define ConfiguraPinoRD7_Entrada()              {ANSELDbits.ANSD7 = Digital; TRISDbits.TRISD7 = Entrada;}                                            
#define ConfiguraPinoRD7_Saida(x)               {ANSELDbits.ANSD7 = Digital; TRISDbits.TRISD7 = Saida; LATDbits.LATD7 = x;}
#define PinoRD7_Wr(x)                           LATDbits.LATD7 = x
#define PinoRD7_Rd()                            PORTDbits.RD7
#define PinoRD7_Toggle()                        asm ("BTG LATD,7,0")


//Macros do PORT E -----------------------------------------------------------
#define ConfiguraPortE_Entradas()               {ANSELE = 0x00; TRISE |= 0x0F;}
#define ConfiguraPortE_NibbleLowEntradas()      {ANSELE &= 0xF0; TRISE |= 0x0F;}
#define PortE_Wr(x)                             LATE = x

#define ConfiguraPortE_Saidas(x)                {ANSELE = 0x00; LATE = x; TRISE &= 0xF0;}
#define ConfiguraPortE_NibbleLowSaidas(x)       {ANSELE &= 0xF0; LATE &= 0xF0; LATE |= (x & 0x0F); TRISE &= 0xF0;}
#define PortE_Rd()                              PORTE
#define PortE_LigaPullUps()                     INTCON2bits.RBPU = 0
#define PortE_DesligaPullUps()                  INTCON2bits.RBPU = 0 

#define ConfiguraPinoRE0_Analogico()            {ANSELEbits.ANSE0 = Analogico; TRISEbits.RE0 = Entrada;}
#define ConfiguraPinoRE0_Entrada()              {ANSELEbits.ANSE0 = Digital; TRISEbits.RE0 = Entrada;}                                            
#define ConfiguraPinoRE0_Saida(x)               {ANSELEbits.ANSE0 = Digital; TRISEbits.RE0 = Saida; LATEbits.LATE0 = x;}
#define PinoRE0_Wr(x)                           LATEbits.LATE0 = x
#define PinoRE0_Rd()                            PORTEbits.RE0
#define PinoRE0_Toggle()                        asm ("BTG LATE,0,0")

#define ConfiguraPinoRE1_Analogico()            {ANSELEbits.ANSE1 = Analogico; TRISEbits.RE1 = Entrada;}
#define ConfiguraPinoRE1_Entrada()              {ANSELEbits.ANSE1 = Digital; TRISEbits.RE1 = Entrada;}                                            
#define ConfiguraPinoRE1_Saida(x)               {ANSELEbits.ANSE1 = Digital; TRISEbits.RE1 = Saida; LATEbits.LATE1 = x;}
#define PinoRE1_Wr(x)                           LATEbits.LATE1 = x
#define PinoRE1_Rd()                            PORTEbits.RE1
#define PinoRE1_Toggle()                        asm ("BTG LATE,1,0")

#define ConfiguraPinoRE2_Analogico()            {ANSELEbits.ANSE2 = Analogico; TRISEbits.RE2 = Entrada;}
#define ConfiguraPinoRE2_Entrada()              {ANSELEbits.ANSE2 = Digital; TRISEbits.RE2 = Entrada;}                                            
#define ConfiguraPinoRE2_Saida(x)               {ANSELEbits.ANSE2 = Digital; TRISEbits.RE2 = Saida; LATEbits.LATE2 = x;}
#define PinoRE2_Wr(x)                           LATEbits.LATE2 = x
#define PinoRE2_Rd()                            PORTEbits.RE2
#define PinoRE2_Toggle()                        asm ("BTG LATE,2,0")

#define PinoRE3_Rd()                            PORTEbits.RE3
#define PinoRE3_LigaPullUp()                    TRISEbits.WPUE3 = 1
#define PinoRE3_DesligaPullUp()                 TRISEbits.WPUE3 = 0

#endif	/* PORTAS_IO_H */

