/* 
 * Arquivo: Lcd.c
 * Versão:  24.06.2017
 * Autor:   JABNeto
 */

#include <xc.h>
#include "Lcd.h"


//Alocação de memória para o módulo -------------------------------------------
StrLcd  Lcd;


//Funções do módulo -----------------------------------------------------------
/*
 * Lcd_AtrasosDe1ms
 * Atrasa n x 1.0ms
 */
void Lcd_AtrasosDe1ms (Uchar Atraso)
{
    while (Atraso > 0)
    {
        __delay_ms(1);
        Atraso--;
    }
}    
    
/*
 * Lcd_AtrasosDe1us
 * Atrasa n x 1.0us
 */
void Lcd_AtrasosDe1us (Uchar Atraso)
{
    while (Atraso-- > 0)
    {
        __delay_us(1);     
    }
}    
    
/*
 * Lcd_PulsoEnable
 * Gera pulso de 50us no pino enable
 */
void Lcd_PulsoEnable (void)
{
    PinoEnable_Wr(1);
    Lcd_AtrasosDe1us(1);
    PinoEnable_Wr(0);    
}

/*
 * Lcd_CarregaTemporizadorDeIntermitencia()
 * Carrega o temporizador de intermitencia
*/
void Lcd_CarregaTemporizadorDeIntermitencia(void)
{
    Lcd.Temporizadores.Intermitencia = Lcd_TempoDaIntermitencia;    
}


#if Lcd_UsarBackLight == Sim
/*
 * Lcd_BackLightReset
 * Inicializa o processo de contagem de tempo para o desligamento do baklight.
 */
void Lcd_BackLightReset(void)
{
    Lcd.Temporizadores.BackLight = (Ulong)BackLight_ValorDeCarga;
    PinoBackLight_Wr(1);
}

/*
 * Lcd_DesligaBackLight
 * Desliga o backlight
 */
void Lcd_DesligaBacklight (void)
{
    PinoBackLight_Wr(0);
}  

/*
 * Lcd_LigaBackLight
 * Desliga o backlight
 */
void Lcd_LigaBacklight (void)
{
    PinoBackLight_Wr(1);
} 
#endif


#if Lcd_NumeroDeBitsDaInterface == 4
/*
 * Lcd_EscreveNibbleLow
 * Escreve o Nibble Low do byte fornecido no Nibble do Port utilizado para
 * escrever dados no Lcd
*/   
void Lcd_EscreveNibbleLow (Uchar Byte)
{
    #if Lcd_NibbleUtilizado == Low
     Lcd_PortWr((Uchar)((Lcd_PortLatch() & 0xF0)|(Byte & 0x0F)));   
     Lcd_PulsoEnable();
    #endif 
     
    #if Lcd_NibbleUtilizado == High
     Lcd_PortWr((Uchar)((Lcd_PortLatch() & 0x0F)|(Byte << 4))); 
     Lcd_PulsoEnable();
    #endif      
}

/*
 * Lcd_EscreveNibbleHigh
 * Escreve o Nibble High do byte fornecido no Nibble do Port utilizado para
 * escrever dados no Lcd
*/   
void Lcd_EscreveNibbleHigh (Uchar Byte)
{
    #if Lcd_NibbleUtilizado == Low
     Lcd_PortWr((Uchar)((Lcd_PortLatch() & 0xF0) |(Byte >> 4)));   
     Lcd_PulsoEnable();
    #endif 
     
    #if Lcd_NibbleUtilizado == High
     Lcd_PortWr((Uchar)((Lcd_PortLatch() & 0x0F)|(Byte & 0xF0)));   
     Lcd_PulsoEnable();
    #endif      
}

/*
 * Lcd_EscreveByte (Uchar Byte)
 * Escreve um byte no display através do Port utilizado para escrever dados no
 * Lcd
*/       
void Lcd_EscreveByte (Uchar Byte)
{
    Lcd_EscreveNibbleHigh (Byte);
    Lcd_EscreveNibbleLow (Byte);
}


/*
 * Lcd_ConfiguracaoModoDe4bits
 * Faz a configuração da interface para operação no modo de 4 bits
*/    
void Lcd_ConfiguracaoModoDe4bits (void) 
{
    Lcd_AtrasosDe1ms(250);
    
    PinoRs_Wr(0);

//    Lcd_EscreveNibbleHigh (0x20);    
//    Lcd_AtrasosDe1ms(1);
//    
//    Lcd_EnviaComando (0x13);     
//    Lcd_AtrasosDe1ms(100);
//    Lcd_EnviaComando (0x17);     
//    Lcd_AtrasosDe1ms(100);    
//    
//    
//    Lcd_EnviaComando (0x28);
//    Lcd_EnviaComando (0x06);       
//    Lcd_EnviaComando (0x0F);   
//    Lcd_EnviaComando (0x01);      
//    Lcd_AtrasosDe1ms(10);     

    Lcd_EscreveNibbleHigh (0x30);
    Lcd_AtrasosDe1ms(5);
    
    Lcd_EscreveNibbleHigh (0x30);
    Lcd_AtrasosDe1ms(1);    
    
    Lcd_EscreveNibbleHigh (0x30);
    Lcd_AtrasosDe1ms(1);

    Lcd_EscreveNibbleHigh (0x20);
    Lcd_AtrasosDe1ms(1);
    
    Lcd_EnviaComando (0x2C);
    Lcd_EnviaComando (0x08);    
    Lcd_EnviaComando (0x01);
    Lcd_AtrasosDe1ms(5);    
    Lcd_EnviaComando (0x06);
    Lcd_EnviaComando (0x0C);   //0x0 1DCB  

    Lcd_EnviaComando (0x02);
    Lcd_AtrasosDe1ms(5);   
}
#endif


#if Lcd_NumeroDeBitsDaInterface == 8
/*
 * Lcd_EscreveByte
 * Escreve um byte no display através do Port utilizado para escrever dados no
 * Lcd
*/       
void Lcd_EscreveByte (Uchar Byte)
{
    Lcd_PortWr(Byte);
    Lcd_PulsoEnable();
}

/*
 * Lcd_ConfiguracaoModoDe8bits
 * Faz a configuração da interface para operação no modo de 8 bits
*/    
void Lcd_ConfiguracaoModoDe8bits (void) 
{
    Lcd_EscreveByte (0x30);
    Lcd_AtrasosDe1ms(5);
    
    Lcd_EscreveByte (0x30);
    Lcd_AtrasosDe1ms(1);    
    
    Lcd_EscreveByte (0x30);
    Lcd_AtrasosDe1ms(1);

    Lcd_EscreveByte (0x20);
    Lcd_AtrasosDe1ms(1);
    
    Lcd_EnviaComando (0x2C);
    Lcd_EnviaComando (0x08);    
    Lcd_EnviaComando (0x01);
    Lcd_AtrasosDe1ms(5);    
    Lcd_EnviaComando (0x06);
    Lcd_EnviaComando (0x0C);   //0x0 1DCB  

    Lcd_EnviaComando (0x02);
    Lcd_AtrasosDe1ms(5);   
}
#endif   



//Funções do módulo ----------------------------------------------------------
/*
 * Lcd_Inicializacao
 * Faz a inicialização do módulo Lcd
 */
void Lcd_Inicializacao (void)
{
    //Configuração da interface
    ConfiguraPort();
    ConfiguraPinoEnable();
    ConfiguraPinoRs(); 

    //Temporizadores
    Lcd_CarregaTemporizadorDeIntermitencia();

    #if Lcd_UsarBackLight == Sim
        ConfiguraPinoBackLight();
        Lcd_BackLightReset();
    #endif

    #if Lcd_NumeroDeBitsDaInterface == 4
        Lcd_ConfiguracaoModoDe4bits();
    #elif Lcd_NumeroDeBitsDaInterface == 8
        Lcd_ConfiguracaoModoDe8bits();
    #endif
}


/*
 * Lcd_Monitor
 * Monitora o backlight e a intermitencia do display. Essa função deve ser
 * chamada periodicamente em intervaloes de 1ms.
 */
void Lcd_Monitor (void)
{
    if (--Lcd.Temporizadores.Intermitencia > 0)
    {
        Lcd_CarregaTemporizadorDeIntermitencia();
        Lcd.Controle.IntermitenciaEstado = (Uchar)!Lcd.Controle.IntermitenciaEstado;
    }

    #if Lcd_UsarBackLight == Sim
        #if Lcd_ModoGreenAtivado == Sim
            if (Lcd.Temporizadores.BackLight > 0)
            {
                if (--Lcd.Temporizadores.BackLight == 0) Lcd_DesligaBacklight();
            } 
        #endif
    #endif
}


/*
 * Lcd_EnviaComando
 * Envia comando para o display
*/       
void Lcd_EnviaComando (Uchar Comando)
{
    PinoRs_Wr(0);
    Lcd_EscreveByte (Comando);
    Lcd_AtrasosDe1us(50); 
}


/*
 * Lcd_PosicionaCursorNaDDRam
 * Posiciona o cursor na DDRam
*/       
void Lcd_PosicionaCursorNaDDRam (Uchar Linha, Uchar Coluna)
{
    Uchar Endereco = 0;
    
    switch (Linha)
    {
        case 1:
            Endereco = LCD_ENDERECO_LINHA1;
            break;
        case 2:
            Endereco = LCD_ENDERECO_LINHA2;
            break;            
        case 3:
            Endereco = LCD_ENDERECO_LINHA3;
            break;        
        case 4:
            Endereco = LCD_ENDERECO_LINHA4;
            break;        
    }
    
    Endereco += Coluna;
    Lcd_EnviaComando((Uchar)(Endereco | 0x80));    
}


/*
 * Lcd_RetornaEnderecoDoBuffer
 * Retorna o endereço do buffer determinado pela linha e coluna
*/
Uchar *Lcd_RetornaEnderecoDoBuffer (Uchar Linha, Uchar Coluna)
{
    Uchar *Pnt;
    
    switch (Linha)
    {
        case 1:
            Pnt = &Lcd.Buffers.Linha1[0] + Coluna;
            break;
        
        #if Lcd_NumeroDeLinhas > 1
        case 2:
            Pnt = &Lcd.Buffers.Linha2[0] + Coluna;
            break;            
        #endif
            
        #if Lcd_NumeroDeLinhas > 2
        case 3:
            Pnt = &Lcd.Buffers.Linha3[0] + Coluna;
            break;

        case 4:
            Pnt = &Lcd.Buffers.Linha4[0] + Coluna;
            break;            
        #endif            
    }
    
    return Pnt;
}

/*
 * Lcd_LimpaBuffer
 * Limpa o buffer de uma linha do display. Linhas de 1 a 4.
*/
void Lcd_LimpaBuffer (Uchar Linha)
{
    Uchar *Pnt,i;
    
    Pnt = Lcd_RetornaEnderecoDoBuffer (Linha, 0);
    
    for (i = 0; i < Lcd_NumeroDeColunas; i++)
    {
        *Pnt++ = ' ';
    }
}

/*
 * Lcd_LimpaBuffers
 * Limpa os buffers de todas as linhas do display
*/
void Lcd_LimpaBuffers (void)
{
    #if Lcd_NumeroDeLinhas == 1
        Lcd_LimpaBuffer (1);
    #endif
    
    #if Lcd_NumeroDeLinhas == 2
        Lcd_LimpaBuffer (1);
        Lcd_LimpaBuffer (2);
    #endif    
    
    #if Lcd_NumeroDeLinhas == 4
        Lcd_LimpaBuffer (1);
        Lcd_LimpaBuffer (2);
        Lcd_LimpaBuffer (3);
        Lcd_LimpaBuffer (4);        
    #endif      
}


/*
 * Lcd_EscreveNaDDRam
 * Escreve um byte na DDRam
*/       
void Lcd_EscreveNaDDRam (Uchar Caractere)
{
    PinoRs_Wr(1);
    Lcd_EscreveByte (Caractere);
    Lcd_AtrasosDe1us(50);   
}


/*
 * Lcd_AtualizaLinha
 * Envia os dados do buffer da linha especificada para o display
 */
void Lcd_AtualizaLinha (Uchar Linha)
{
    unsigned char *Pnt,*FinalDoBuffer;

    Lcd_PosicionaCursorNaDDRam(Linha,0);
    
    Pnt = Lcd_RetornaEnderecoDoBuffer(Linha,0);
    FinalDoBuffer = Pnt + Lcd_NumeroDeColunas;
    
    while (Pnt < FinalDoBuffer)
    {
        Lcd_EscreveNaDDRam (*Pnt++);
    }    
}


/*
 * Lcd_AtualizaDisplay
 * Envia os dados dos buffers para o display
 */
void Lcd_AtualizaDisplay (void)
{
    #if Lcd_NumeroDeLinhas == 1
        Lcd_AtualizaLinha (1);
    #endif
    
    #if Lcd_NumeroDeLinhas == 2
        Lcd_AtualizaLinha (1);
        Lcd_AtualizaLinha (2);
    #endif    
    
    #if Lcd_NumeroDeLinhas == 4
        Lcd_AtualizaLinha (1);
        Lcd_AtualizaLinha (2);
        Lcd_AtualizaLinha (3);
        Lcd_AtualizaLinha (4);        
    #endif  
}

/*
 * Lcd_TransfereMensagemParaBuffer
 * Transfere uma mensagem contida na memória Flash para um dos buffer do
 * display. O valor do ponteiro do Buffer é retornado.
 * *Buffer: Aponta para o local do buffer, onde a mensagem será transferida
 * *Mensagem: Aponta para a mensagem que será transferida
 */
Uchar *Lcd_TransfereMensagemParaBuffer (Uchar *Buffer, Cchar *Mensagem)
{
    while (*Mensagem != '\0')
    {
        *Buffer++ = *Mensagem++;
    }
    
    return Buffer;
}


/*
 * Lcd_EscreveCaractereNoBuffer
 * Escreve um caractere no buffer do display. O valor do ponteiro é incrementado
 * e retornado.
 * *Buffer: Aponta para o local do buffer para onde o caractere será escrito
 * Caractere: Caractere que será escrito.
 */
Uchar *Lcd_EscreveCaractereNoBuffer (Uchar *Buffer, Uchar Caractere)
{
    *Buffer++ = Caractere;
    return Buffer;
}



