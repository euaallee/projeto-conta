#include <stdio.h>
#include "cta.h"

// IMPLEMENTACAO

void abrirConta(Conta *c) {
    printf("Digite o numero da conta: ");
    scanf("%d", &c->numero);
    printf("Digite o nome do titular da conta: ");
    scanf("%s", c->titular);
    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &c->saldo);
}

void extrato(Conta conta) {
    printf("DADOS DA CONTA NUMERO %d\n", conta.numero);
    printf("Nome do titular: %s\n", conta.titular);
    printf("Saldo da conta: R$ %.2f\n", conta.saldo);
}

void depositar(Conta *conta, float valor) {
    conta->saldo += valor;
    printf("Deposito de R$ %.2f efetuado com sucesso!\n", valor);
}

void sacar(Conta *conta, float valor) {
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque de R$ %.2f efetuado com sucesso!\n", valor);
    } else {
        printf("Saldo insuficiente para saque.\n");
    }
}

void transferirSaldo(Conta *conta_origem, Conta *conta_destino, float valor) {
    if (conta_origem->saldo >= valor) {
        conta_origem->saldo -= valor;
        conta_destino->saldo += valor;
        printf("Transferencia de R$ %.2f efetuada com sucesso de %s para %s.\n", valor, conta_origem->titular, conta_destino->titular);
    } else {
        printf("Saldo insuficiente para transferencia.\n");
    }
}