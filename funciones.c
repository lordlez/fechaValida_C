#include "header.h"

int esFechaValida(int dia, int mes, int anio)
{
    if(anio >= 1601 && anio<= 2022)
    {
        if(mes >= 1 && mes <= 12)
        {
            if(mes == 2)
            {
                if(esBisiesto(anio) == VALIDO)
                {
                    if(dia >= 1 && dia <= 29)
                    {
                        return VALIDO;
                    }else
                    {
                        return ERROR;
                    }
                }else if(dia>=1 && dia<= 28)
                    {
                        return VALIDO;
                    }else
                    {
                        return ERROR;
                    }
            }else if(mes==4 || mes==6 || mes==9 || mes ==11)
            {
                if(dia >= 1 && dia <= 30)
                {
                    return VALIDO;
                }else
                {
                    return ERROR;
                }
            }else if(dia >=1 && dia <= 31)
                {
                    return VALIDO;
                }else
                {
                    return ERROR;
                }
        }else
        {
            return ERROR;
        }
    }else
    {
        return ERROR;
    }
}

int esBisiesto(int anio)
{
    if((anio % 400 == 0) || (anio % 4 == 0 && anio % 100!= 0))
    {
        return VALIDO;
    }else
    {
        return ERROR;
    }
}
