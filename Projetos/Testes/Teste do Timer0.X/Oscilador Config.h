/* 
 * Arquivo: Oscilador Config.h
 * uC:      PIC18F46K22
 * Autor:   JABNeto
 * Versão:  10.09.2017
 */

#ifndef OSCILADOR_CONFIG_H
#define	OSCILADOR_CONFIG_H


/*  1. Oscilador Primario
 * 
 *  1.1. OsciladorPrimario_Utilizado: Define se o sistema utiliza o oscilador
 *                                    primário. Se a opção for não será
 *                                    utilizado o oscilador interno como fonte
 *                                    do clock primário.
 *  Opções:
 *  Nao     Sistema não utiliza o oscilador primario.
 *  Sim     Sistema utiliza o oscilador primario.
 * 
 * 
 *  1.2. OsciladorPrimario_Tipo: Define o tipo do oscilador primário.
 *                               Somente tem efeito se a opção
 *                               OsciladorPrimarioUtilizado for Sim.
 * Opções:
 * XTAL_LP              Cristal (Oscilador com ganho baixo, XTAL tuning fork)
 * XTAL_XT              Cristal (Oscilador com ganho medio, até 4.0MHz)
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
 * 1.3. OsciladorPrimario_Frequencia: Define a frequencia de operação do
 *                                    oscilador primário. Somente tem efeito se
 *                                    a opção OsciladorPrimarioUtilizado for
 *                                    Sim. O valor é dado em Hz.
 */
#define OsciladorPrimario_Utilizado                     Nao
#define OsciladorPrimario_Tipo                          XTAL_HS_MP
#define OsciladorPrimario_Frequencia                    8000000


/* 2. Oscilador Interno
 * 
 * Obs. Se os osciladores primário e interno forem habilitados, a preferência
 * será dada para o oscilador primário e será habilitada a função de chaveamento
 * caso haja falha no oscilador primário.
 * 
 * 2.1. OsciladorInterno_Tipo: Define se o oscilador interno expõe o sinal
 *                             Fop() no pino OSC2 do uC.
 * 
 * Opções:
 * INTOSC                   Pino OSC2 pode ser configurado como IO
 * INTOSC_CLOCK_OUT_OSC2    Pino OSC2 expões o final Fop()
 * 
 * 2.2. OsciladorInterno_Frequencia: Seleciona a frequencia de operação do
 *                                   oscilador interno.
 * Opções:
 * HF_16MHz      16MHz proveniente do oscilador interno de alta frequencia 
 * HF_8MHz        8MHz proveniente do oscilador interno de alta frequencia
 * HF_4MHz        4MHz proveniente do oscilador interno de alta frequencia 
 * HF_2MHz        2MHz proveniente do oscilador interno de alta frequencia
 * HF_1MHz        1MHz proveniente do oscilador interno de alta frequencia
 * HF_500KHz    500KHz proveniente do oscilador interno de alta frequencia
 * HF_250KHz    250KHz proveniente do oscilador interno de alta frequencia
 * HF_31KHz      31KHz proveniente do oscilador interno de alta frequencia
 * 
 * MF_500KHz    500KHz proveniente do oscilador interno de média frequencia
 * MF_250KHz    250KHz proveniente do oscilador interno de média frequencia
 * MF_31KHz      31KHz proveniente do oscilador interno de média frequencia
 * 
 * LF_31KHz      31KHz proveniente do oscilador interno de baixa frequencia
 */
#define OsciladorInterno_Tipo                           INTOSC_CLOCK_OUT_OSC2
#define OsciladorInterno_Frequencia                     HF_16MHz


/*  3. Oscilador Secundário
 * 
 *  3.1. OsciladorSecundario_Utilizado: Define se o sistema utiliza o oscilador
 *                                      secundário.
 *  Opções:
 *  Nao     O sistema não utiliza o oscilador secundário.
 *  Sim     O sistema utiliza o oscilador secundário.
 * 
 *  3.2. OsciladorSecundario_Frequencia: Define a frequencia de operação do
 *                                       oscilador secundário.
 *                                       Essa opção somente tem efeito se a
 *                                       opção OsciladorSecundario_Utilizado
 *                                       for Sim. O valor é dado em Hz
 */
#define OsciladorSecundario_Utilizado                   Nao
#define OsciladorSecundario_Frequencia                  32768



/*  4. PLL do oscilador
 * 
 *  O PLL do oscilador multiplica a frequencia do oscilador primário por 4.
 * 
 *  4.1. Oscilador_PllAtivado: Define se o pll (x4) será ativado ou não.
 *  
 *  Opções:
 *  Nao     PLL desativado
 *  Sim     PLL ativado
 */
#define Oscilador_PllAtivado                            Sim


#endif	/* OSCILADOR_CONFIG_H */

