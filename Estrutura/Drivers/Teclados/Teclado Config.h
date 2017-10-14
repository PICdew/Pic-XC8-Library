/* 
 * Arquivo: Teclado Config.h
 * Autor:   JABNeto
 * Versao:  150710
 */

#ifndef TECLADO_CONFIG_H
#define	TECLADO_CONFIG_H


/* 1. Funções estendidas
 * Opções:
 * Nao:    As funções estendidas não são incluidas. Essa opção somente inclui
 *         a função de inicialização do teclado. O testes de teclas pressiona
 *         das devem ser feitos localmente, no código do usuário.
 * Sim:    As funções estendidas são incluidas. A variável Ctrl_Teclado é
 *         criada e a detecção das teclas presssionadas passa a ser feita
 *         através da função Teclado_Monitor().
  */
#define Teclado_FuncoesEstendidas                       Sim


/* 2. Tipo de amostragem do teclado
 * Opções:
 * MANUAL:     A função Teclado Monitor() deve ser chamada no código do
 *              usuário.
 * PERIODICO:  A amostragem do teclado é feita periodicamente. O temporizador
 *             Timer 0 deve ser utilizado para fazer a chamada da função
 *             Teclado_Monitor(). 
 */
#define Teclado_TipoDeAmostragem                        PERIODICO


/* 3. Modo de captura das teclas pressionadas
 * Opções:
 * DIRETO:     Uma cópia dos estados das teclas é transferida diretamente para 
 *             o buffer do teclado.
 * RECUO:      A detecção de uma tecla pressionada é feita somente se houver
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

