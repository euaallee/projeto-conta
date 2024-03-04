// INTERFACE

typedef struct {
    int numero;
    char titular[50];
    float saldo;
} Conta;

void abrirConta(Conta *c);
void extrato(Conta conta);
void depositar(Conta *conta, float valor);
void sacar(Conta *conta, float valor);
void transferirSaldo(Conta *conta_origem, Conta *conta_destino, float valor);
