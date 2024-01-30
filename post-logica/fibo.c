#include <stdio.h>
#include <stdlib.h>

// Verifica se a entrada é um número inteiro positivo entre 5 e 15
int validarEntrada(double n) {
    if (n >= 5 && n <= 15 && n == (int)n) {
        return 1; // Número é inteiro e está na faixa desejada
    }
    return 0; // Não atende aos critérios
}

// Função para validar se a entrada é um número inteiro
int ehInteiro(double n) {
    return n == (int)n;
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
  double numero;  // Entrada do usuário
  int valid = 0;   // Controle para verificar se a entrada é válida

  // Loop até que a entrada seja válida
  while (!valid) {
      printf("Digite um número entre 5 e 15: "); 
      // Verifica se a entrada não é um número ou não está na faixa desejada ou não é inteiro
      if (scanf("%lf", &numero) != 1 || !validarEntrada(numero) || !ehInteiro(numero)) {
          printf("Erro: Insira um número inteiro positivo entre 5 e 15.\n");  // Mensagem de erro
          while ((getchar()) != '\n'); // Limpa o buffer de entrada para evitar loop infinito em caso de erro
      } else {
          valid = 1;  // Se a entrada é válida, define 'valid' como 1 para sair do loop
      }
  }

  // Converte o número para um valor inteiro
  int numeroInteiro = (int)numero;

    printf("Sequência de Fibonacci até o índice %d usando o laço for: ", numeroInteiro);
    fibonacciFor(numeroInteiro);

    printf("Sequência de Fibonacci até o índice %d usando o laço while: ", numeroInteiro);
    fibonacciWhile(numeroInteiro);

    printf("Sequência de Fibonacci até o índice %d usando o laço do...while: ", numeroInteiro);
    fibonacciDoWhile(numeroInteiro);

    printf("Sequência de Fibonacci até o índice %d usando recursão: ", numeroInteiro);
    fibonacciRecursivo(0, 1, numeroInteiro);
    printf("\n");

    return 0;
}
