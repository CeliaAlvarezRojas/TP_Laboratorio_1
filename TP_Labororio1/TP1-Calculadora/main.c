#include <stdlib.h>
#include "Funciones.h"



int main()
{
    float unNumero;
    float otroNumero;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int menu;


    do {

        printf("1. Ingresar 1er operando A\n");
        printf("2. Ingresar 2do operando B\n");
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultado\n");
        printf("5. Salir\n");
        printf("Seleccionar una opcion");
        scanf("%d", &menu);

        switch (menu)
        {
            case 1:
                printf("Ingrese un numero: \n");
                scanf("%f", &unNumero);

            break;
            case 2:
                printf("Ingrese otro numero: \n");
                scanf("%f", &otroNumero);
            break;
            case 3:
            suma = SumarNumeros(unNumero, otroNumero);
            resta = RestarNumeros(unNumero, otroNumero);
            division = DividirNumeros(unNumero, otroNumero);
            multiplicacion = MultiplicarNumeros(unNumero, otroNumero);
            break;
            case 4:
            printf("El resultado de A+B es: %2.f\n", suma);
            printf("El resultado de A-B es: %2.f\n", resta);
            printf("El resultado de A/B es: %2.f\n", multiplicacion);
            printf("El resultado de A*B: %2.f\n", division);
            break;
            case 5:
            printf("\n Gracias por usar la calculadora \n");
            break;

        }
    }while (menu!=5);
    return 0;
}


