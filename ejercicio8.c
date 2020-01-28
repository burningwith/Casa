#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define MAX 10
#define NUMERO_INTENTOS 5
int getRandom();
int main(int argc, char const *argv[])
{
    //Obtener el numero aleatorio. DOS == comparas. CON = estás asignando un valor.

    int numeroAleatorio = getRandom();
    //printf("%d", numeroAleatorio);

    int numero;
    for (int i = 0; i < NUMERO_INTENTOS; i++) //1.Inicializacion. 2. Validacion. 3. Incremento(que quieras)
    {
        printf("Introduce tu numero: ");
        scanf("%d", &numero);
        if (numero == numeroAleatorio)
        {
            printf("TOMA TU MEDALLA\n");
            break;
        }
        else
        {
            printf("Ups...\n");
        }
    }
    if (numero == numeroAleatorio){
        printf("VICTORIA :D\n");
    } else {
        printf("GAME OVER D:\n");
    }
}

int getRandom()
{
    int aleatorio;
    srand(time(NULL));
    aleatorio = rand() % MAX;
    return aleatorio;
}