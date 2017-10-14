/* 
 * Arquivo: Teclado Config.h
 * Autor:   JABNeto
 * Versao:  150710
 */

#ifndef TECLADO_CONFIG_H
#define	TECLADO_CONFIG_H


/* 1. Fun��es estendidas
 * Op��es:
 * Nao:    As fun��es estendidas n�o s�o incluidas. Essa op��o somente inclui
 *         a fun��o de inicializa��o do teclado. O testes de teclas pressiona
 *         das devem ser feitos localmente, no c�digo do usu�rio.
 * Sim:    As fun��es estendidas s�o incluidas. A vari�vel Ctrl_Teclado �
 *         criada e a detec��o das teclas presssionadas passa a ser feita
 *         atrav�s da fun��o Teclado_Monitor().
  */
#define Teclado_FuncoesEstendidas                       Sim


/* 2. Tipo de amostragem do teclado
 * Op��es:
 * MANUAL:     A fun��o Teclado Monitor() deve ser chamada no c�digo do
 *              usu�rio.
 * PERIODICO:  A amostragem do teclado � feita periodicamente. O temporizador
 *             Timer 0 deve ser utilizado para fazer a chamada da fun��o
 *             Teclado_Monitor(). 
 */
#define Teclado_TipoDeAmostragem                        PERIODICO


/* 3. Modo de captura das teclas pressionadas
 * Op��es:
 * DIRETO:     Uma c�pia dos estados das teclas � transferida diretamente para 
 *             o buffer do teclado.
 * RECUO:      A detec��o de uma tecla pressionada � feita somente se houver
 *             anteriormente o recuo de todas as teclas.
 */
#define Teclado_ModoDeCaptura                           RECUO



/* 4. definicoes das teclas
*/
#define Up                  1
#define Left                2
#define Enter               3
#define Right               4
#define Down                5






#endif	/* TECLADO_CONFIG_H */

