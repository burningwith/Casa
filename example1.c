#include "stdio.h"
#define MAYORIA_EDAD 18
#define JUBILACION 67
//Mayoria edad, menor de edad o jubilado. Creas constantes porque el valor no va a cambiar.
int main(int argc, char const *argv[])
{
    int edad; //Creas la variable para que el usuario pueda introducir un valor.
    printf("Introduce tu edad: ");
    scanf("%d", &edad);
    if (edad < MAYORIA_EDAD)
    {
        printf("Peinate");
    }
    else if (edad > JUBILACION)
    {
        printf("Mu bien, has cumplido tu mierda de vida");
    }
    else
    {
        printf("Aun te queda por pringar");
    }

    return 0;
}
