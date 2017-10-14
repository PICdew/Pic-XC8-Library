/* 
 * Arquivo: Eventos Config.h
 * Autor:   JABNeto
 * Vers�o:  10.09.2017
 */

#ifndef EVENTOS_CONFIG_H
#define	EVENTOS_CONFIG_H


/*
 * 1. Eventos
 * Configura os m�dulos de gera��o de eventos
 * 
 * 1.1. Eventos(n)_Habilitads
 * Habilita o m�dulo Eventos n
 * 
 * Op��es:
 * Nao: O m�dulo n�o � habilitado
 * Sim: O m�dulo � habilitado
 * 
 * 1.2. Eventos(n)_Tempo
 * Define o tempo em ms para a gera��o dos eventos
 * 
 * 1.3. Estrutura
 * Define os nomes dos eventos
 * 
 * Ex.
 * typedef union
    {
        Uint    valor;

        struct
        {
            Uint TestarSensor1:1;
            Uint TestarSensor2:1; 
            Uint TestarSensor3:1;
            Uint ExecutarTesteDeAlarmes:1;
            Uint bit4:1;
            Uint bit5:1; 
            Uint bit6:1;
            Uint bit7:1;         
        }Evento;
    }strEventos(n);
 */

//Eventos 1 -------------------------------------------------------------------
#define Eventos1_Habilitados                            Nao
#define Eventos1_Tempo                                  0

typedef union
{
    Uint    valor;
    
    struct
    {
        Uint Intermitencia:1;
        Uint bit1:1; 
        Uint bit2:1;
        Uint bit3:1;
        Uint bit4:1;
        Uint bit5:1; 
        Uint bit6:1;
        Uint bit7:1;         
    }Evento;
}strEventos1;


//Eventos 2 -------------------------------------------------------------------
#define Eventos2_Habilitados                            Nao
#define Eventos2_Tempo                                  0

typedef union
{
    Uint    valor;
    
    struct
    {
        Uint bit0:1;
        Uint bit1:1; 
        Uint bit2:1;
        Uint bit3:1;
        Uint bit4:1;
        Uint bit5:1; 
        Uint bit6:1;
        Uint bit7:1;         
    }Evento;
}strEventos2;


//Eventos 3 -------------------------------------------------------------------
#define Eventos3_Habilitados                            Nao
#define Eventos3_Tempo                                  0

typedef union
{
    Uint    valor;
    
    struct
    {
        Uint bit0:1;
        Uint bit1:1; 
        Uint bit2:1;
        Uint bit3:1;
        Uint bit4:1;
        Uint bit5:1; 
        Uint bit6:1;
        Uint bit7:1;         
    }Evento;
}strEventos3;


//Eventos 1 -------------------------------------------------------------------
#define Eventos4_Habilitados                            Nao
#define Eventos4_Tempo                                  0

typedef union
{
    Uint    valor;
    
    struct
    {
        Uint bit0:1;
        Uint bit1:1; 
        Uint bit2:1;
        Uint bit3:1;
        Uint bit4:1;
        Uint bit5:1; 
        Uint bit6:1;
        Uint bit7:1;         
    }Evento;
}strEventos4;


//Eventos 5 -------------------------------------------------------------------
#define Eventos5_Habilitados                            Nao
#define Eventos5_Tempo                                  0

typedef union
{
    Uint    valor;
    
    struct
    {
        Uint bit0:1;
        Uint bit1:1; 
        Uint bit2:1;
        Uint bit3:1;
        Uint bit4:1;
        Uint bit5:1; 
        Uint bit6:1;
        Uint bit7:1;         
    }Evento;
}strEventos5;

#endif	/* EVENTOS_CONFIG_H */

