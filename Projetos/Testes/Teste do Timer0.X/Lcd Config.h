/* 
 * Arquivo: Lcd Config.h
 * Vers�o:  24.06.2017
 * Autor:   JABNeto
 */

#ifndef LCD_CONFIG_H
#define	LCD_CONFIG_H

/* Obs. A fun��o Lcd_Monitor() deve ser chamada em intervalos peri�dicos de 
 *      1.0ms para que a intermitencia do display e o modo greem do backlight
 *      funcionem.
 */


/* 1. Caracteristica do Lcd
 * 
 * 1.1. Lcd_NumeroDeLinhas
 *      Define o n�mero de linhas do m�dulo Lcd
 * 
 *      Op��es:
 *      1:  1 linha
 *      2:  2 linhas
 *      4:  4 linhas
 * 
 * 1.2. Lcd_NumeroDeColunas
 *      Define o n�mero de colunas do m�dulo Lcd
 * 
 *      Op��es:
 *      8:    8 colunas
 *      16:  16 colunas
 *      20:  20 colunas
 *      40:  40 colunas
 *
 * 1.2. Lcd_UsarBackLight
 *      Define se o Lcd possui backllight e se este � utilizado
 * 
 *      Op��es:
 *      N�o:    O Lcd n�o possui backlight ou possui e n�o ser� utilizado
 *      Sim:    O Lcd possui backlight e ser� utilizado
 */
#define Lcd_NumeroDeLinhas                              4
#define Lcd_NumeroDeColunas                             16
#define Lcd_UsarBackLight                               Sim


/* 2. Configura��es da interface
 * 
 * 2.1. Lcd_NumeroDeBitsDaInterface
 *      Define se o modo de opera��o da interface � 4 ou 8 bits.
 * 
 *      Op��es:
 *      4:  A interface opera no modo de 4 bits (nibble)
 *      8:  A interface opera no modo de 8 bits (byte)
 * 
 * 2.2. Lcd_PortUtilizado
 *      Define o Port do uC utilizado para a troca de dados com o Lcd. A defi-
 *      ni��o deve ser feita no formato Portx, onde x representa a letra do
 *      do Port (A, B, C...)
 *      Exemplo: PortA representa o PortA
 *      
 * 2.3. Lcd_NibbleUtilizado
 *      Quando a interface � configurada para operar no modo de 4 bits, o nibble
 *      do port (Low ou High) utilizado deve ser informado. No modo de 8 bits,
 *      essa informa��o � ignorada.
 *      
 *      Op��es:
 *      Low:    Os bits de 0 a 3 do port selecionado s�o utilizados na troca
 *              de dados.
 *      High    Os bits de 4 a 7 do port selecionado s�o utilizados na troca
 *              de dados.
 */
#define Lcd_NumeroDeBitsDaInterface                     4
#define Lcd_PortUtilizado                               PortB
#define Lcd_NibbleUtilizado                             High
  

/* 3. Configura��o dos pinos de controle do Lcd
 * 
 * 3.1. Lcd_PinoEnable
 *      Define o pino do port de IO do uC respons�vel pelo controle do pino
 *      Enable do Lcd. A sele��o do pino deve ser feita no formato PinoRpn, onde
 *      p representa a letra do Port e n o n�mero do pino.
 *      Exemplo: PinoRB2 representa o pino RB2 (bit 2 do port B)
 * 
 * 3.2. Lcd_PinoRs
 *      Define o pino do port de IO do uC respons�vel pelo controle do pino
 *      Rs do Lcd. A sele��o do pino deve ser feita no formato PinRpn, onde
 *      p representa a letra do Port e n o n�mero do pino.
 *      Exemplo: PinRB3 representa o pino RB2 (bit 3 do port B)
 * 
 * 3.3. Lcd_PinoBackLight
 *      Define o pino do port de IO do uC respons�vel pelo controle do Back-
 *      Light do Lcd. A sele��o do pino deve ser feita no formato PinRpn, onde
 *      p representa a letra do Port e n o n�mero do pino. Se a op��o
 *      Lcd_UsarBackLight for configurada como N�o, esse item da configura��o
 *      ser� ignorado.
 *      Exemplo: PinRB1 representa o pino RB1 (bit 1 do port B)
 */
#define Lcd_PinoEnable                                  PinoRB2
#define Lcd_PinoRs                                      PinoRB3
#define Lcd_PinoBackLight                               PinoRB1


/* 4. Modos de opera��o
 * 
 * 4.1. Lcd_ModoGreen
 *      No modo green o backlight � desligado ap�s um tempo definido ser
 *      atingido. A fun��o Lcd_BacklightReset() reinicia a temporiza��o.
 *      Para operar, a fun��o Lcd_Monitor() deve ser chamada em tempos
 *      peri�dicos de 1.0ms pelo Timer destinado a essa tarefa.
 *  
 *      Op��es:
 *      N�o:    ModoGreen desativado
 *      Sim:    ModoGreen ativado
 * 
 * 4.2. Lcd_TempoDoModoGreen
 *      Define o tempo para o desligamento do back-light. O tempo � dado em
 *      segundos e pode ser qualquer valor na faixa de 1 a 65535 (1s a 65535s).
 * 
 * 4.3. Lcd_TempoDaIntermitencia
 *      Define o tempo para o desligamento do back-light. O tempo � dado em
 *      ms e pode ser qualquer valor na faixa de 1 a 65535 (1ms a 65,5s).
 * 
 */
#define Lcd_ModoGreenAtivado                            Nao
#define Lcd_TempoDoModoGreen                            60
#define Lcd_TempoDaIntermitencia                        250


#endif	/* LCD_CONFIG_H */

