/* 
 *  Arquivo:    Adc1.c
 *  uC:         PIC18F46K22
 *  Autor:      JABNeto
 *  Versão:     161011 
 */


#include <xc.h>
#include "Adc1.h"


//Alocação de memória para o módulo -------------------------------------------
#if Adc1_BufferDeAmostras > 0
strAdc1 Adc1;
#endif




//Funções do módulo -----------------------------------------------------------
#if Adc1_BufferDeAmostras > 0

void Adc1_ResetaBuffer (void)
{
    Uchar i;
    
    for (i = 0; i < Adc1_BufferDeAmostras; i++)
    {
        Adc1.Buffer.Amostras[i] = 0;
    }
    
    Adc1.Buffer.Index = 0;
    Adc1.Buffer.Somatoria = 0;
    Adc1.Buffer.Media = 0.0;
}

/*
 * Adc1_PreencheBuffer()
 * Efetua a conversão do canal previamente estabelecido através da macro
 * Adc1_SelecionaCanal(Canal) e coloca o valor convertido no buffer. Quando o
 * buffer é preenchido com a quantidade de amostras estabelecida, o que ocorre
 * quando Adc1.Buffer.Index == Adc1_NumeroDeAmostras, o parâmetro
 * Adc1.Buffer.Somatoria terá a soma de todas as amostras do Buffer e o
 * parâmetro Adc1.Buffer.Media, a média dos valores.
 * Nenhuma conversão é efetuada se o buffer estiver cheio. A função retorna Sim
 * o buffer estiver cheio.
 */
Uchar Adc1_PreencheBuffer (void)
{
    Uint16 ValorConvertido;
    
    if (Adc1.Buffer.Index < Adc1.Buffer.NumeroDeAmostras)
    {
        Adc1_IniciaConversao();    

        while (ADCON0bits.GO) { };

        ValorConvertido.bytes.byte0 = ADRESL;
        ValorConvertido.bytes.byte1 = ADRESH;         
        
        Adc1.Buffer.Amostras[Adc1.Buffer.Index++] = ValorConvertido.valor;
        Adc1.Buffer.Somatoria += ValorConvertido.valor;
        
        if (Adc1.Buffer.Index == Adc1.Buffer.NumeroDeAmostras)
        {
            Adc1.Buffer.Media = (float)Adc1.Buffer.Somatoria / Adc1.Buffer.NumeroDeAmostras;
        }
    }
   
    if (Adc1.Buffer.Index < Adc1.Buffer.NumeroDeAmostras) return Nao;
    else return Sim;
}

/*
 * Adc1_IniciaAquisicao()
 * Inicia o processo de aquisição com o numero de amostras fornecido.
 * O numero de amostras deve ser menor ou igual ao tamanho do buffer.
 */
void Adc1_IniciaAquisicao (Uchar NumAmostras)
{
    Adc1.Buffer.NumeroDeAmostras = NumAmostras;
    Adc1.Buffer.Index = 0;
}
#else
/*
 * Adc1_ConverteCanal()
 * Converte o canal especificado e retorna o valor. Essa função somente é
 * Habilitada quando o Buffer está desativado.
 */
Uint Adc1_ConverteCanal(Uchar Canal)
{
    Uint16 ValorConvertido;

    Adc1_SelecionaCanal(Canal);
    Adc1_IniciaConversao();

    while (ADCON0bits.GO) { };

    ValorConvertido.bytes.byte0 = ADRESL;
    ValorConvertido.bytes.byte1 = ADRESH;

    return ValorConvertido.valor;
}
#endif


/*
 * Adc1_Inicializacao()
 * Faz a inicialização do módulo Adc1
 */
void Adc1_Inicializacao (void)
{
    #ifdef Adc1_Utiliza_Canal0
        #if (Adc1_Utiliza_Canal0 == Sim)
            Adc1_ConfiguraAN0();
        #endif
    #endif
    
    #ifdef Adc1_Utiliza_Canal1
        #if (Adc1_Utiliza_Canal1 == Sim)
            Adc1_ConfiguraAN1();
        #endif
    #endif
        
    #ifdef Adc1_Utiliza_Canal2
        #if (Adc1_Utiliza_Canal2 == Sim)
            Adc1_ConfiguraAN2();
        #endif
    #endif 
            
    #ifdef Adc1_Utiliza_Canal3
        #if (Adc1_Utiliza_Canal3 == Sim)
            Adc1_ConfiguraAN3();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal4
        #if (Adc1_Utiliza_Canal4 == Sim)
            Adc1_ConfiguraAN4();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal5
        #if (Adc1_Utiliza_Canal5 == Sim)
            Adc1_ConfiguraAN5();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal6
        #if (Adc1_Utiliza_Canal6 == Sim)
            Adc1_ConfiguraAN6();
        #endif
    #endif            

    #ifdef Adc1_Utiliza_Canal7
        #if (Adc1_Utiliza_Canal7 == Sim)
            Adc1_ConfiguraAN7();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal8
        #if (Adc1_Utiliza_Canal8 == Sim)
            Adc1_ConfiguraAN8();
        #endif
    #endif           
            
    #ifdef Adc1_Utiliza_Canal9
        #if (Adc1_Utiliza_Canal9 == Sim)
            Adc1_ConfiguraAN9();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal10
        #if (Adc1_Utiliza_Canal10 == Sim)
            Adc1_ConfiguraAN10();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal1
        #if (Adc1_Utiliza_Canal1 == Sim)
            Adc1_ConfiguraAN11();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal2
        #if (Adc1_Utiliza_Canal2 == Sim)
            Adc1_ConfiguraAN2();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal3
        #if (Adc1_Utiliza_Canal3 == Sim)
            Adc1_ConfiguraAN13();
        #endif
    #endif            
            
    #ifdef Adc1_Utiliza_Canal4
        #if (Adc1_Utiliza_Canal4 == Sim)
            Adc1_ConfiguraAN14();
        #endif
    #endif  

    #ifdef Adc1_Utiliza_Canal5
        #if (Adc1_Utiliza_Canal5 == Sim)
            Adc1_ConfiguraAN15();
        #endif
    #endif  

    #ifdef Adc1_Utiliza_Canal6
        #if (Adc1_Utiliza_Canal6 == Sim)
            Adc1_ConfiguraAN16();
        #endif
    #endif  

    #ifdef Adc1_Utiliza_Canal7
        #if (Adc1_Utiliza_Canal7 == Sim)
            Adc1_ConfiguraAN17();
        #endif
    #endif  

    #ifdef Adc1_Utiliza_Canal8
        #if (Adc1_Utiliza_Canal8 == Sim)
            Adc1_ConfiguraAN18();
        #endif
    #endif  

    #ifdef Adc1_Utiliza_Canal9
        #if (Adc1_Utiliza_Canal9 == Sim)
            Adc1_ConfiguraAN19();
        #endif
    #endif  
            
    #ifdef Adc1_Utiliza_Cana20
        #if (Adc1_Utiliza_Cana20 == Sim)
            Adc1_ConfiguraAN20();
        #endif
    #endif             

    #ifdef Adc1_Utiliza_Cana21
        #if (Adc1_Utiliza_Cana21 == Sim)
            Adc1_ConfiguraAN21();
        #endif
    #endif              
            
    #ifdef Adc1_Utiliza_Cana22
        #if (Adc1_Utiliza_Cana22 == Sim)
            Adc1_ConfiguraAN22();
        #endif
    #endif              
            
    #ifdef Adc1_Utiliza_Cana23
        #if (Adc1_Utiliza_Cana23 == Sim)
            Adc1_ConfiguraAN23();
        #endif
    #endif              
            
    #ifdef Adc1_Utiliza_Cana24
        #if (Adc1_Utiliza_Cana24 == Sim)
            Adc1_ConfiguraAN24();
        #endif
    #endif              
            
    #ifdef Adc1_Utiliza_Cana25
        #if (Adc1_Utiliza_Cana25 == Sim)
            Adc1_ConfiguraAN25();
        #endif
    #endif              

    #ifdef Adc1_Utiliza_Cana26
        #if (Adc1_Utiliza_Cana26 == Sim)
            Adc1_ConfiguraAN26();
        #endif
    #endif              
            
    #ifdef Adc1_Utiliza_Cana27
        #if (Adc1_Utiliza_Cana27 == Sim)
            Adc1_ConfiguraAN27();
        #endif
    #endif              
            
    ConfiguraAdc1(Adc1_Adcs, Adc1_Acqt,Adc1_Formatacao,Adc1_Vref_Positiva,\
                  Adc1_Vref_Negativa);       

    ADCON0bits.ADON = Sim;
    
    
    #if Adc1_BufferDeAmostras > 0
    Adc1_ResetaBuffer();
    #endif
    
    #if Adc1_Usa_Interrupcao == Sim
    #ifdef Adc1_Usa_InterrupcoesDeBaixaPrioridade
        IPR1bits.ADIP = 0;
    #endif
        PIR1bits.ADIF = 0;  
        PIE1bits.ADIE = 1;  
    #endif

}


#if Adc1_Usa_Interrupcao == Sim
/*
 * Adc1_ServicoDeInterrupcao
 * Executa o serviço de interrupção do modulo
 */
void Adc1_ServicoDeInterrupcao (void)
{
    if (PIE1bits.ADIE && PIR1bits.ADIF)
    {
       PIR1bits.ADIF = 0; 

        #if Adc1_BufferDeAmostras > 0
        Adc1_PreencheBuffer();
        #endif       
    }
}
#endif