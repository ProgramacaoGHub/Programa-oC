
#include <stdio.h>

int main() {
    // Declaração das variáveis
    int numero1, numero2;
    int soma,subtracao, divisao, multiplicacao; 

    // Entrada do primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    // Entrada do segundo número
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Verificação para evitar divisão por zero
    if (numero2 == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1;
    }

     //Operações matemáticas
     soma = numero1 + numero2;
     subtracao = numero1 - numero2;
     divisao = numero1 / numero2;
     multiplicacao = numero1 * numero2;

    //Exibição dos resultados
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A divisão é: %d\n", divisao);
    printf("A multiplicação é: %d\n", multiplicacao);

    return 0;
}