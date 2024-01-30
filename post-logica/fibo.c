#include <stdio.h>
#include <stdlib.h>

// Verifica se a entrada é um número inteiro positivo entre 5 e 15
int validarEntrada(int n) {
    if (n >= 5 && n <= 15) {
        // Verifica se a parte decimal é zero
        if (n - (int)n == 0) {
            return 1; // Número é inteiro e está na faixa desejada
        }
    }
    return 0; // Não atende aos critérios
}

// Calcula e imprime a sequência de Fibonacci usando for
void fibonacciFor(int n) {
    int a = 0, b = 1, c;

    for (int i = 0; i <= n; i++) {  
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

// Calcula e imprime a sequência de Fibonacci usando while
void fibonacciWhile(int n) {
    int a = 0, b = 1, c;
    int i = 0;

    while (i <= n) {  
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("\n");
}

// Calcula e imprime a sequência de Fibonacci usando do...while
void fibonacciDoWhile(int n) {
    int a = 0, b = 1, c;
    int i = 0;

    do {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    } while (i <= n); 
    printf("\n");
}

// Calcula e imprime a sequência de Fibonacci de forma recursiva
void fibonacciRecursivo(int a, int b, int n) {
    if (n >= 0) {  
        printf("%d ", a);
        fibonacciRecursivo(b, a + b, n - 1);
    }
}

int main() {
    int numero;

    printf("Digite um número entre 5 e 15: ");
    if (scanf("%d", &numero) != 1 || !validarEntrada(numero)) {
        printf("Erro: Insira um número inteiro positivo entre 5 e 15.\n");
        return 1;
    }

    
    printf("Sequência de Fibonacci até o índice %d usando o laço for: ", numero);
    fibonacciFor(numero);

    printf("Sequência de Fibonacci até o índice %d usando o laço while: ", numero);
    fibonacciWhile(numero);

    printf("Sequência de Fibonacci até o índice %d usando o laço do...while: ", numero);
    fibonacciDoWhile(numero);

    printf("Sequência de Fibonacci até o índice %d usando recursão: ", numero);
    fibonacciRecursivo(0, 1, numero);
    printf("\n");

    return 0;
}
