#include <stdio.h>
#include <stdlib.h>
#include "cta.h"

void menu() {
    printf("[1] Abrir Conta.\n");
    printf("[2] Extrato da Conta 1.\n");
    printf("[3] Extrato da Conta 2.\n");
    printf("[4] Depositar saldo na Conta 1.\n");
    printf("[5] Depositar saldo na Conta 2.\n");
    printf("[6] Sacar saldo da Conta 1.\n");
    printf("[7] Sacar saldo da Conta 2.\n");
    printf("[8] Transferir saldo entre Contas.\n");
    printf("[0] Sair.\n");
    printf("Opcao: ");
}

int main() {
    Conta conta1, conta2;
    float v;
    int op, op_origem, op_destino;
    menu();
    scanf("%d", &op);
    
    while (1) {
        switch (op) {
            case 1:
                system("cls");
                printf("Abrindo Conta 1:\n");
                abrirConta(&conta1);
                printf("\n\n");
                printf("Abrindo Conta 2:\n");
                abrirConta(&conta2);
                printf("\n\n");
                break;
            case 2:
                system("cls");
                printf("Extrato da Conta 1:\n");
                extrato(conta1);
                printf("\n\n");
                break;
            case 3:
                system("cls");
                printf("Extrato da Conta 2:\n");
                extrato(conta2);
                printf("\n\n");
                break;
            case 4:
                system("cls");
                printf("Digite o valor para depositar na Conta 1: ");
                scanf("%f", &v);
                depositar(&conta1, v);
                printf("\n\n");
                break;
            case 5:
                system("cls");
                printf("Digite o valor para depositar na Conta 2: ");
                scanf("%f", &v);
                depositar(&conta2, v);
                printf("\n\n");
                break;
            case 6:
                system("cls");
                printf("Digite o valor para sacar da Conta 1: ");
                scanf("%f", &v);
                sacar(&conta1, v);
                printf("\n\n");
                break;
            case 7:
                system("cls");
                printf("Digite o valor para sacar da Conta 2: ");
                scanf("%f", &v);
                sacar(&conta2, v);
                printf("\n\n");
                break;
            case 8:
                system("cls");
                printf("Escolha a conta de origem:\n");
                printf("[1] Conta 1\n");
                printf("[2] Conta 2\n");
                printf("Opcao: ");
                scanf("%d", &op_origem);
                printf("Escolha a conta de destino:\n");
                printf("[1] Conta 1\n");
                printf("[2] Conta 2\n");
                printf("Opcao: ");
                scanf("%d", &op_destino);
                printf("Digite o valor para transferencia: ");
                scanf("%f", &v);
                if (op_origem == 1 && op_destino == 2) {
                    transferirSaldo(&conta1, &conta2, v);
                } else if (op_origem == 2 && op_destino == 1) {
                    transferirSaldo(&conta2, &conta1, v);
                } else {
                    printf("Opções inválidas.\n");
                }
                break;
            case 0:
                system("cls");
                printf("Fechando ATM...");
                printf("\n\n");
                break;
            default:
                system("cls");
                printf("Opcao invalida, tente novamente.");
                printf("\n\n");
        }
        
        if (op == 0){
            break;
		}

        menu();
        scanf("%d", &op);
    }
    
    return 0;
}