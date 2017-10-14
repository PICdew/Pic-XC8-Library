/* 
 *  Arquivo: Adc1.h
 *  uC:      PIC18F46K22
 *  Autor:   JABNeto
 *  Versão:  161011
 */


#ifndef ADC1_CONFIG_H
#define	ADC1_CONFIG_H

/*  1. Canais Analógicos
 *  Define se o canal analógico é usado ou não.
 *  
 *  Opções
 *  Nao: O Canal não é utilizado. O pino pode ser configura por outro módulo
 *       para operar no modo digital.
 *  Sim: O Canal é utilizado e o pino é configurado para operar no modo
 *       analógico 
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

/*  2. Formatação do valor convertido
 *  Define a formatação do resultado da conversão.
 *  
 *  Opções
 *  ADC1_FORMATACAO_ESQUERDA Resultado alinhado à esquerda (rrrr rrrr rr00 0000)
 *  ADC1_FORMATACAO_DIREITA  Resultado alinhado à direita  (0000 00rr rrrr rrrr)
 */
#define Adc1_Formatacao                                 ADC1_FORMATACAO_DIREITA


/*  3. Fonte da tensão de referência positiva
 *  Define a fonte da tensão de referência positiva (fundo de escala ADC)
 *  
 *  Opções
 *  ADC1_VREF_POSITIVA_AVDD     Tensão de referância é VDD
 *  ADC1_VREF_POSITIVA_VREF     Tensão de referância aplicada no pino VREF+
 *  ADC1_VREF_POSITIVA_FVR      Tensão de referância definida pelo módulo Fvr
 */
#define Adc1_Vref_Positiva                              ADC1_VREF_POSITIVA_FVR


/*  4. Fonte de tensão de referência negativa
 *  Define a fonte de tensão de referência negativa
 *  
 *  Opções
 *  ADC1_VREF_NEGATIVA_AVSS     Tensão de referância é VSS
 *  ADC1_VREF_NEGATIVA_VREF     Tensão de referância aplicada no pino VREF-
 */
#define Adc1_Vref_Negativa                              ADC1_VREF_NEGATIVA_AVSS


/*  5. Modo Trigger Event
 *  No modo Trigger Event uma fonte geradora de evento de trigger dispara o
 *  inicio da conversão. Esse parâmetro define o módulo gerador de eventos de
 *  disparo. O módulo selecionado (CCP5 ou CTMU) deve ser configurado para
 *  que o evento possa ser gerado. Esse parâmetro não tem efeito se o modo
 *  Trigger estiver desativado.
 *  
 * 5.1. Adc1_Modo_EventTrigger
 * Define se o adc opera no modo Event trigger. Se ativado a interrução do
 * módulo Adc1 é habilitada.
 * 
 * Opções
 * Nao     Modo Event Trigger desativado
 * Sim     Modo Event Trigger ativado. A fonte deve ser seletcionada e o
 *         módulo CCP5 ou CTMU configurado. 
 * 
 * 5.2. Adc1_FonteDoTrigger
 * Define a fonte geradora dos eventos de trigger.
 * 
 * Opções
 * ADC1_TRIGGER_CCP5     O evento de trigger é gerado pelo modulo CCP5
 * ADC1_TRIGGER_CTMU     O evento de trigger é gerado pelo modulo CTMU
 * 
 * 5.3. Adc1_NumeroDeAmostras
 * Quando o número de amostras é maior que 0, um buffer de amostras é criado
 * 
 * 
 */
#define Adc1_Modo_EventTrigger                          Nao
#define Adc1_FonteDoTrigger                             ADC1_TRIGGER_CTMU


/* 6. Amostras
 *  
 * 6.1. Adc1_BufferDeAmostras
 * Quando Adc1_BufferDeAmostras é maior que 0, um buffer de amostras é criado
 * juntamente com uma estrutura de controle. Se o modo Event Trigger estiver
 * ativado, o buffer é preenchido com as amostras de cada evento.
 */
#define Adc1_BufferDeAmostras                           2

#endif	/* ADC1_CONFIG_H */

