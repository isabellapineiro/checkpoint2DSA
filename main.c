#include <stdio.h>
#include <string.h>

//INTEGRANTES: ISABELLA PINEIRO SANTANA RM562779

//calculando o fatorial
unsigned long long int fatorial(int n) {
    unsigned long long int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

//sequencia de Fibonacci
void exibirFibonacci() {
    int n;
    printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Número inválido. Digite entre 1 e 50.\n");
        return;
    }

    int fibonacci[50] = {0, 1};

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    printf("Sequência de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
}

//exibindo fatoriais
void exibirFatoriais() {
    int n;
    printf("Digite um número inteiro (1 a 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Número inválido. Digite entre 1 e 20.\n");
        return;
    }

    printf("Fatoriais:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d! = %llu\n", i, fatorial(i));
    }
}

//vê se é palíndromo
void verificarPalindromo() {
    char palavra[101];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    int ehPalindromo = 1;

    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - i - 1]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra NÃO é um palíndromo.\n");
    }
}

// verifica se a segunda string é substring da primeira
void verificarSubstring() {
    char string1[101], string2[101];
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    if (strstr(string1, string2)) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string NÃO está contida na primeira.\n");
    }
}

int main() {
    printf("===== MENU =====\n");
    printf("1 - Sequência de Fibonacci\n");
    printf("2 - Fatoriais\n");
    printf("3 - Verificar Palíndromo\n");
    printf("4 - Verificar Substring\n");

    printf("Escolha uma opção: ");
    char escolha;
    scanf(" %c", &escolha);

    switch (escolha) {
        case '1':
            exibirFibonacci();
            break;
        case '2':
            exibirFatoriais();
            break;
        case '3':
            verificarPalindromo();
            break;
        case '4':
            verificarSubstring();
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}