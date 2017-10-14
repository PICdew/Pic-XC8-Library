/* 
 * Arquivo: Oscilador Config.h
 * uC:      PIC18F46K22
 * Autor:   JABNeto
 * Vers�o:  10.09.2017
 */

#ifndef OSCILADOR_CONFIG_H
#define	OSCILADOR_CONFIG_H


/*  1. Oscilador Primario
 * 
 *  1.1. OsciladorPrimario_Utilizado: Define se o sistema utiliza o oscilador
 *                                    prim�rio. Se a op��o for n�o ser�
 *                                    utilizado o oscilador interno como fonte
 *                                    do clock prim�rio.
 *  Op��es:
 *  Nao     Sistema n�o utiliza o oscilador primario.
 *  Sim     Sistema utiliza o oscilador primario.
 * 
 * 
 *  1.2. OsciladorPrimario_Tipo: Define o tipo do oscilador prim�rio.
 *                               Somente tem efeito se a op��o
 *                               OsciladorPrimarioUtilizado for Sim.
 * Op��es:
 * XTAL_LP              Cristal (Oscilador com ganho baixo, XTAL tuning fork)
 * XTAL_XT              Cristal (Oscilador com ganho medio, at� 4.0MHz)
 * XTAL_HS_MP           Cristal (Oscilador com ganho elevado, 4.0MHz a 16MHz)
 * XTAL_HS_HP           Cristal (Oscilador com ganho elevado, >16MHz)
 * EC_LP                Clock externo <= 500KHz (low Power) 
 * EC_LP_CLOCK_OUT_OSC2 Clock externo <= 500KHz com Freq/4 no pino OSC2
 * EC_MP                Clock externo 500KHz a 16 MHz 
 * EC_MP_CLOCK_OUT_OSC2 Clock externo 500KHz a 16 MHz com Freq/4 no pino OSC2
 * EC_HP                Clock externo > 16 MHz (high power)
 * EC_HP_CLOCK_OUT_OSC2 Clock externo > 16 MHz com Freq/4 no pino OSC2
 * RC                   Resistor/Capacitor externo
 * RC_CLOCK_OUT_OSC2    Resistor/Capacitor externo com Freq/4 no pino OSC2
 * 
 * 1.3. OsciladorPrimario_Frequencia: Define a frequencia de opera��o do
 *                                    oscilador prim�rio. Somente tem efeito se
 *                                    a op��o OsciladorPrimarioUtilizado for
 *                                    Sim. O valor � dado em Hz.
 */
#define OsciladorPrimario_Utilizado                     Nao
#define OsciladorPrimario_Tipo                          XTAL_HS_MP
#define OsciladorPrimario_Frequencia                    8000000


/* 2. Oscilador Interno
 * 
 * Obs. Se os osciladores prim�rio e interno forem habilitados, a prefer�ncia
 * ser� dada para o oscilador prim�rio e ser� habilitada a fun��o de chaveamento
 * caso haja falha no oscilador prim�rio.
 * 
 * 2.1. OsciladorInterno_Tipo: Define se o oscilador interno exp�e o sinal
 *                             Fop() no pino OSC2 do uC.
 * 
 * Op��es:
 * INTOSC                   Pino OSC2 pode ser configurado como IO
 * INTOSC_CLOCK_OUT_OSC2    Pino OSC2 exp�es o final Fop()
 * 
 * 2.2. OsciladorInterno_Frequencia: Seleciona a frequencia de opera��o do
 *                                   oscilador interno.
 * Op��es:
 * HF_16MHz      16MHz proveniente do oscilador interno de alta frequencia 
 * HF_8MHz        8MHz proveniente do oscilador interno de alta frequencia
 * HF_4MHz        4MHz proveniente do oscilador interno de alta frequencia 
 * HF_2MHz        2MHz proveniente do oscilador interno de alta frequencia
 * HF_1MHz        1MHz proveniente do oscilador interno de alta frequencia
 * HF_500KHz    500KHz proveniente do oscilador interno de alta frequencia
 * HF_250KHz    250KHz proveniente do oscilador interno de alta frequencia
 * HF_31KHz      31KHz proveniente do oscilador interno de alta frequencia
 * 
 * MF_500KHz    500KHz proveniente do oscilador interno de m�dia frequencia
 * MF_250KHz    250KHz proveniente do oscilador interno de m�dia frequencia
 * MF_31KHz      31KHz proveniente do oscilador interno de m�dia frequencia
 * 
 * LF_31KHz      31KHz proveniente do oscilador interno de baixa frequencia
 */
#define OsciladorInterno_Tipo                           INTOSC_CLOCK_OUT_OSC2
#define OsciladorInterno_Frequencia                     HF_16MHz


/*  3. Oscilador Secund�rio
 * 
 *  3.1. OsciladorSecundario_Utilizado: Define se o sistema utiliza o oscilador
 *                                      secund�rio.
 *  Op��es:
 *  Nao     O sistema n�o utiliza o oscilador secund�rio.
 *  Sim     O sistema utiliza o oscilador secund�rio.
 * 
 *  3.2. OsciladorSecundario_Frequencia: Define a frequencia de opera��o do
 *                                       oscilador secund�rio.
 *                                       Essa op��o somente tem efeito se a
 *                                       op��o OsciladorSecundario_Utilizado
 *                                       for Sim. O valor � dado em Hz
 */
#define OsciladorSecundario_Utilizado                   Nao
#define OsciladorSecundario_Frequencia                  32768



/*  4. PLL do oscilador
 * 
 *  O PLL do oscilador multiplica a frequencia do oscilador prim�rio por 4.
 * 
 *  4.1. Oscilador_PllAtivado: Define se o pll (x4) ser� ativado ou n�o.
 *  
 *  Op��es:
 *  Nao     PLL desativado
 *  Sim     PLL ativado
 */
#define Oscilador_PllAtivado                            Sim


#endif	/* OSCILADOR_CONFIG_H */

