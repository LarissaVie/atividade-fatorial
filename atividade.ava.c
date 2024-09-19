#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int escolha;
    int num, n, a, b;

    while (1) {

        printf("Escolha uma opção:\n");
        printf("1: Calcular o fatorial de um número\n");
        printf("2: Calcular o N-ésimo termo da sequência de Fibonacci\n");
        printf("3: Calcular o MDC de dois números\n");
        printf("4: Sair\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite um número para calcular o fatorial: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("O número deve ser não-negativo.\n");
                } else {
                    printf("O fatorial de %d é %d.\n", num, fatorial(num));
                }
                break;

            case 2:
                printf("Digite o valor de N para calcular o N-ésimo termo da sequência de Fibonacci: ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("O valor de N deve ser não-negativo.\n");
                } else {
                    printf("O %d-ésimo termo da sequência de Fibonacci é %d.\n", n, fibonacci(n));
                }
                break;

            case 3:
                printf("Digite o primeiro numero: ");
                scanf("%d", &a);
                printf("Digite o segundo numero: ");
                scanf("%d", &b);
                printf("O MDC de %d e %d é %d.\n", a, b, mdc(a, b));
                break;

            case 4:
                printf("Saindo\n");
                return 0;

            default:
                printf("Tente novamente.\n");
        }
    }

    return 0;
}
