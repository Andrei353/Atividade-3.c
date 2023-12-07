#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int linha = 5;
    int coluna = 3;
    char nome [linha] [250], situacao [linha] [250];
    float notas [linha] [coluna], media [linha], soma;
    int idade [linha];
    int i,j;

    //Solicitando Dados
    for ( i = 0; i < linha; i++)
    {
        printf("Digite o %iº nome: ", i + 1);
        gets(nome[i]);

        printf("Digite sua idade: ");
        scanf("%i",&idade[i]);

        for (j = 0; j < coluna; j++)
        {
            printf("Digite a %iª nota: ", j + 1);
            scanf("%f",&notas[i][j]);
            soma += notas[i][j];
        }
        //Calculando Média
        printf("-------------------\n");
        media[i] = soma / coluna;
        soma = 0;
        fflush(stdin);

        //Avaliando Situação
        if (media[i] >= 7)
        {
            strcpy(situacao[i], "Aprovado");
        } else if (media[i] < 7 && media[i] >= 5)
        {
            strcpy(situacao[i], "Recuperação");
        } else {
            strcpy(situacao[i], "Reprovado");
        }
    }

    system("cls || clear");

    for ( i = 0; i < linha; i++)
    {
        printf("%iº Aluno: %s \n", i + 1, nome[i]);
        printf("Idade: %i \n", idade[i]);
        for ( j = 0; j < coluna; j++)
        {
            printf("%iª nota: %.1f \n", j + 1,notas[i][j]);
        }
        printf("Média: %.1f \n", media[i]);
        printf("Situação: %s \n\n", situacao[i]);
    }

    return 0;
}
    
