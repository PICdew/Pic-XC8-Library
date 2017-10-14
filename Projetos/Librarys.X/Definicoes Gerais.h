/* 
 * File:    Definicoes Gerais.h
 * Autor:   JABNeto
 * Versão:  10.09.2017
 */

#ifndef DEFINICOES_GERAIS_H
#define	DEFINICOES_GERAIS_H


#define Nao                0
#define Sim                1

#define Falso              0
#define Verdadeiro         1

#define Desativado         0
#define Ativado            1

#define Desativada         0
#define Ativada            1

#define Negativo           0
#define Positivo           1

#define Negativa           0
#define Positiva           1

#define Baixa              0
#define Alta               1

#define Baixo              0
#define Alto               1

#define Low                0
#define High               1



//Estruturas numéricas -------------------------------
typedef unsigned char           Uchar;
typedef unsigned int            Uint;
typedef unsigned long           Ulong;

typedef signed char             Schar;
typedef signed int              Sint;
typedef signed long             Slong;

typedef const  char             Cchar;

typedef union
{
    Uchar   valor;
    
    struct
    {
        Uint Nibble0:4;
        Uint Nibble1:4;
    }Nibbles;        
            
    struct
    {
        Uint   bit0:1;
        Uint   bit1:1;
        Uint   bit2:1;
        Uint   bit3:1;
        Uint   bit4:1;
        Uint   bit5:1;
        Uint   bit6:1;
        Uint   bit7:1;        
    }bits;
}Uint8;

typedef union
{
    Uint   valor;

    struct
    {
        Uchar   byte0;
        Uchar   byte1;      
    }bytes;

    struct
    {
        Uint   bit0:1;
        Uint   bit1:1;
        Uint   bit2:1;
        Uint   bit3:1;
        Uint   bit4:1;
        Uint   bit5:1;
        Uint   bit6:1;
        Uint   bit7:1;
        Uint   bit8:1;
        Uint   bit9:1;
        Uint   bit10:1;
        Uint   bit11:1;
        Uint   bit12:1;
        Uint   bit13:1;
        Uint   bit14:1;
        Uint   bit15:1; 
    }bits;    
}Uint16;

typedef union
{
    Ulong   valor;

    
    struct
    {
        Uchar   byte0;
        Uchar   byte1;
        Uchar   byte2;
        Uchar   byte3;         
    }bytes;
}Uint32;

typedef union
{
    float   valor;

    
    struct
    {
        Uchar   byte0;
        Uchar   byte1;
        Uchar   byte2;
    }bytes;
}Float24;

//Estruturas de data e horas
typedef union
{
    float   valor;
 
    struct
    {
        Uchar   byte0;
        Uchar   byte1;
        Uchar   byte2;
        Uchar   byte3;
    }bytes;
}Float32;


typedef struct
{
    Uchar Segundos;
    Uchar Minutos;
    Uchar Horas;
}StrHorario;

typedef struct
{
    Uchar Dia;
    Uchar Mes;
    Uchar Ano;
}StrData;

typedef struct
{
    StrHorario  Horario;
    StrData     Data;
    Uchar       Semana;   
}StrDataHoras;


#endif	/* DEFINICOES_GERAIS_H */

