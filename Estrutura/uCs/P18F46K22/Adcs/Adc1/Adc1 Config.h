/* 
 *  Arquivo: Adc1.h
 *  uC:      PIC18F46K22
 *  Autor:   JABNeto
 *  Vers�o:  161011
 */


#ifndef ADC1_CONFIG_H
#define	ADC1_CONFIG_H

/*  1. Canais Anal�gicos
 *  Define se o canal anal�gico � usado ou n�o.
 *  
 *  Op��es
 *  Nao: O Canal n�o � utilizado. O pino pode ser configura por outro m�dulo
 *       para operar no modo digital.
 *  Sim: O Canal � utilizado e o pino � configurado para operar no modo
 *       anal�gico 
 */
#define Adc1_Utiliza_Canal0                             Nao
#define Adc1_Utiliza_Canal1                             Nao
#define Adc1_Utiliza_Canal2                             Nao
#define Adc1_Utiliza_Canal3                             Nao
#define Adc1_Utiliza_Canal4                             Nao
#define Adc1_Utiliza_Canal5                             Nao
#define Adc1_Utiliza_Canal6                             Nao
#define Adc1_Utiliza_Canal7                             Nao
#define Adc1_Utiliza_Canal8                             Nao
#define Adc1_Utiliza_Canal9                             Nao
#define Adc1_Utiliza_Canal10                            Nao
#define Adc1_Utiliza_Canal11                            Nao
#define Adc1_Utiliza_Canal12                            Nao
#define Adc1_Utiliza_Canal13                            Nao
#define Adc1_Utiliza_Canal14                            Nao
#define Adc1_Utiliza_Canal15                            Nao
#define Adc1_Utiliza_Canal16                            Nao
#define Adc1_Utiliza_Canal17                            Nao
#define Adc1_Utiliza_Canal18                            Nao
#define Adc1_Utiliza_Canal19                            Nao
#define Adc1_Utiliza_Canal20                            Nao
#define Adc1_Utiliza_Canal21                            Nao
#define Adc1_Utiliza_Canal22                            Nao
#define Adc1_Utiliza_Canal23                            Nao
#define Adc1_Utiliza_Canal24                            Nao
#define Adc1_Utiliza_Canal25                            Nao
#define Adc1_Utiliza_Canal26                            Nao
#define Adc1_Utiliza_Canal27                            Nao

/*  2. Formata��o do valor convertido
 *  Define a formata��o do resultado da convers�o.
 *  
 *  Op��es
 *  ADC1_FORMATACAO_ESQUERDA Resultado alinhado � esquerda (rrrr rrrr rr00 0000)
 *  ADC1_FORMATACAO_DIREITA  Resultado alinhado � direita  (0000 00rr rrrr rrrr)
 */
#define Adc1_Formatacao                                 ADC1_FORMATACAO_DIREITA


/*  3. Fonte da tens�o de refer�ncia positiva
 *  Define a fonte da tens�o de refer�ncia positiva (fundo de escala ADC)
 *  
 *  Op��es
 *  ADC1_VREF_POSITIVA_AVDD     Tens�o de refer�ncia � VDD
 *  ADC1_VREF_POSITIVA_VREF     Tens�o de refer�ncia aplicada no pino VREF+
 *  ADC1_VREF_POSITIVA_FVR      Tens�o de refer�ncia definida pelo m�dulo Fvr
 */
#define Adc1_Vref_Positiva                              ADC1_VREF_POSITIVA_FVR


/*  4. Fonte de tens�o de refer�ncia negativa
 *  Define a fonte de tens�o de refer�ncia negativa
 *  
 *  Op��es
 *  ADC1_VREF_NEGATIVA_AVSS     Tens�o de refer�ncia � VSS
 *  ADC1_VREF_NEGATIVA_VREF     Tens�o de refer�ncia aplicada no pino VREF-
 */
#define Adc1_Vref_Negativa                              ADC1_VREF_NEGATIVA_AVSS


/*  5. Modo Trigger Event
 *  No modo Trigger Event uma fonte geradora de evento de trigger dispara o
 *  inicio da convers�o. Esse par�metro define o m�dulo gerador de eventos de
 *  disparo. O m�dulo selecionado (CCP5 ou CTMU) deve ser configurado para
 *  que o evento possa ser gerado. Esse par�metro n�o tem efeito se o modo
 *  Trigger estiver desativado.
 *  
 * 5.1. Adc1_Modo_EventTrigger
 * Define se o adc opera no modo Event trigger. Se ativado a interru��o do
 * m�dulo Adc1 � habilitada.
 * 
 * Op��es
 * Nao     Modo Event Trigger desativado
 * Sim     Modo Event Trigger ativado. A fonte deve ser seletcionada e o
 *         m�dulo CCP5 ou CTMU configurado. 
 * 
 * 5.2. Adc1_FonteDoTrigger
 * Define a fonte geradora dos eventos de trigger.
 * 
 * Op��es
 * ADC1_TRIGGER_CCP5     O evento de trigger � gerado pelo modulo CCP5
 * ADC1_TRIGGER_CTMU     O evento de trigger � gerado pelo modulo CTMU
 * 
 * 5.3. Adc1_NumeroDeAmostras
 * Quando o n�mero de amostras � maior que 0, um buffer de amostras � criado
 * 
 * 
 */
#define Adc1_Modo_EventTrigger                          Nao
#define Adc1_FonteDoTrigger                             ADC1_TRIGGER_CTMU


/* 6. Amostras
 *  
 * 6.1. Adc1_BufferDeAmostras
 * Quando Adc1_BufferDeAmostras � maior que 0, um buffer de amostras � criado
 * juntamente com uma estrutura de controle. Se o modo Event Trigger estiver
 * ativado, o buffer � preenchido com as amostras de cada evento.
 */
#define Adc1_BufferDeAmostras                           2

#endif	/* ADC1_CONFIG_H */

