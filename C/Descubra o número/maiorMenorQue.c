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
        printf("Escreva um número entre 0 e 13: ");
        scanf("%d", &numero);
        
        tentativas++;


        system("cls");

        if (numero > numeroAleatorio)
        {
            printf("Seu número é maior que o número gerado \n");
        }
        else if (numero < numeroAleatorio)
        {
            printf("Seu número é menor que o número gerado \n");
        }
        else if (numero == numeroAleatorio)
        {
            printf("Parabéns! Você acertou o número em %d tentativas! \n", tentativas);
            printf("Número: %d", numeroAleatorio);
            break;
        }

            if (tentativas == 5)
            {
                system("cls");
                printf("Você não conseguiu acertar o número :( \n");
                printf("Número: %d \n", numeroAleatorio);
                break;
            }

                if (numero > 13)
                {
                    system("cls");
                    printf("Opção invalida \n");
                    break;
                }
    }

    return 0;
}