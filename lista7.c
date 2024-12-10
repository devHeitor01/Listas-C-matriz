#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TAM 5

typedef struct {
    char nome[50];
    char endereco[100];
    int idade;
    char telefone[15];
} Pessoa;

int main() {
    Pessoa agenda[TAM];
    int opcao, i;
    char nomeBusca[50];
    int idadeBusca, encontrado;

    // Inicializa a agenda com valores padrão
    for (i = 0; i < TAM; i++) {
        agenda[i].nome[0] = '\0';
        agenda[i].endereco[0] = '\0';
        agenda[i].idade = 0;
        agenda[i].telefone[0] = '\0';
    }

    do {
        // Menu
        printf("\nMenu da Agenda:\n");
        printf("1 - Cadastro\n");
        printf("2 - Pesquisa por idade\n");
        printf("3 - Classificacao por ordem alfabetica\n");
        printf("4 - Alteracao de registro\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1:
                // Cadastro
                for (i = 0; i < TAM; i++) {
                    if (agenda[i].idade == 0) { // Encontra um espaço vazio
                        printf("Cadastro %d:\n", i + 1);
                        printf("Nome: ");
                        gets(agenda[i].nome);
                        printf("Endereco: ");
                        gets(agenda[i].endereco);
                        printf("Idade: ");
                        scanf("%d", &agenda[i].idade);
                        fflush(stdin);
                        printf("Telefone: ");
                        gets(agenda[i].telefone);
                        printf("Registro cadastrado com sucesso!\n");
                        break;
                    }
                }
                if (i == TAM) {
                    printf("Agenda cheia!\n");
                }
                break;

            case 2:
                // Pesquisa por idade
                printf("Digite a idade para buscar: ");
                scanf("%d", &idadeBusca);
                encontrado = 0;
                for (i = 0; i < TAM; i++) {
                    if (agenda[i].idade == idadeBusca) {
                        printf("\nRegistro encontrado:\n");
                        printf("Nome: %s\n", agenda[i].nome);
                        printf("Endereco: %s\n", agenda[i].endereco);
                        printf("Telefone: %s\n", agenda[i].telefone);
                        encontrado = 1;
                    }
                }
                if (!encontrado) {
                    printf("Nenhum registro encontrado com essa idade.\n");
                }
                break;

            case 3:
                // Classificacao por ordem alfabetica
                for (i = 0; i < TAM - 1; i++) {
                    for (int j = i + 1; j < TAM; j++) {
                        if (strcmp(agenda[i].nome, agenda[j].nome) > 0 && agenda[i].idade != 0 && agenda[j].idade != 0) {
                            Pessoa temp = agenda[i];
                            agenda[i] = agenda[j];
                            agenda[j] = temp;
                        }
                    }
                }
                printf("Agenda classificada com sucesso!\n");
                break;

            case 4:
                // Alteracao de registro
                printf("Digite o nome do registro para alterar: ");
                gets(nomeBusca);
                encontrado = 0;
                for (i = 0; i < TAM; i++) {
                    if (strcmp(agenda[i].nome, nomeBusca) == 0) {
                        printf("Registro encontrado. Digite os novos dados:\n");
                        printf("Nome: ");
                        gets(agenda[i].nome);
                        printf("Endereco: ");
                        gets(agenda[i].endereco);
                        printf("Idade: ");
                        scanf("%d", &agenda[i].idade);
                        fflush(stdin);
                        printf("Telefone: ");
                        gets(agenda[i].telefone);
                        printf("Registro alterado com sucesso!\n");
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    printf("Registro nao encontrado.\n");
                }
                break;

            case 5:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
