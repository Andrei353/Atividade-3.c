#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Variáveis
    int linha = 999;
    char nome[linha][250], telefone[linha][11];
    int botao;
    int i, j;

    // Solicitando Dados
    do
    {
        printf("Deseja anexar um Telefone Fixo a sua Agenda Virtual?\n");
        printf("1 - Adicionar\n");
        printf("2 - Ver Agenda e Finalizar\n");
        printf("Resposta: ");
        scanf("%i", &botao);
        system("cls || clear");
        fflush(stdin);

        switch (botao)
        {
        case 1:
            printf("Cadastre o portador do contato: ");
            gets(nome[j]);

            printf("Digite o Telefone Fixo: ");
            gets(telefone[j]);
            system("cls || clear");
            j++;
            break;
        case 2:
            for (i = 1; i < j; i++)
            {
                printf("Nome: %s \n", nome[i]);
                printf("Telefone: %s \n\n", telefone[i]);
            }
            break;
        default:
            break;
        }

    } while (botao == 1);

    return 0;
}
