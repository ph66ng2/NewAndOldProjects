#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    srand(time(NULL)); 
    setlocale(LC_ALL, "portuguese");
    int numero;
    int tentativas;
    int numeroAleatorio = rand() % 14;

    while (tentativas < 5)
    {
        printf("Escreva um n�mero entre 0 e 13: ");
        scanf("%d", &numero);
        
        tentativas++;


        system("cls");

        if (numero > numeroAleatorio)
        {
            printf("Seu n�mero � maior que o n�mero gerado \n");
        }
        else if (numero < numeroAleatorio)
        {
            printf("Seu n�mero � menor que o n�mero gerado \n");
        }
        else if (numero == numeroAleatorio)
        {
            printf("Parab�ns! Voc� acertou o n�mero em %d tentativas! \n", tentativas);
            printf("N�mero: %d", numeroAleatorio);
            break;
        }

            if (tentativas == 5)
            {
                system("cls");
                printf("Voc� n�o conseguiu acertar o n�mero :( \n");
                printf("N�mero: %d \n", numeroAleatorio);
                break;
            }

                if (numero > 13)
                {
                    system("cls");
                    printf("Op��o invalida \n");
                    break;
                }
    }

    return 0;
}