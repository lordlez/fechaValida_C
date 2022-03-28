#include "header.h"

int main()
{
    int dia, mes, anio, resultado;
    printf("Ingrese un anio: ");
    scanf("%d", &anio);
    printf("Ingrese un mes: ");
    scanf("%d", &mes);
    printf("Ingrese un dia: ");
    scanf("%d", &dia);

    resultado = esFechaValida(dia, mes, anio);

    if(resultado == VALIDO)
    {
        printf("La fecha ingresada es valida");
    }else
    {
        printf("La fecha ingresada no es valida");
    }

    return 0;
}
