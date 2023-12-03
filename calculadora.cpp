#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void limparTela() {
    system("cls");
}

void exibirMenu() {
    printf("===== CALCULADORA =====\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Resto da Divisao\n");
    printf("6. Potenciacao\n");
    printf("7. Raiz Quadrada\n");
    printf("8. Logaritmo\n");
    printf("9. Seno\n");
    printf("10. Sair\n");
    printf("========================\n");
}

int main() {
    int escolha;
    double num1, num2, resultado;

    do {
        limparTela();
        exibirMenu();

        printf("Escolha uma opcao (1-10): ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 2:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 3:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 4:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf\n", resultado);
                } else {
                    printf("Erro! Divisao por zero nao permitida.\n");
                }
                break;
            case 5:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    resultado = fmod(num1, num2);
                    printf("Resultado: %.2lf\n", resultado);
                } else {
                    printf("Erro! Divisao por zero para o operador de resto.\n");
                }
                break;
            case 6:
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = pow(num1, num2);
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 7:
                printf("Digite o numero para a raiz quadrada: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                    printf("Resultado: %.2lf\n", resultado);
                } else {
                    printf("Erro! Nao e possivel calcular a raiz quadrada de um numero negativo.\n");
                }
                break;
            case 8:
                printf("Digite o numero e a base do logaritmo: ");
                scanf("%lf %lf", &num1, &num2);
                if (num1 > 0 && num2 > 0 && num2 != 1) {
                    resultado = log(num1) / log(num2);
                    printf("Resultado: %.2lf\n", resultado);
                } else {
                    printf("Erro! Argumentos invalidos para o logaritmo.\n");
                }
                break;
            case 9:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &num1);
                resultado = sin(num1 * M_PI / 180.0);
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 10:
                printf("Saindo da calculadora. Ate logo!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        printf("Pressione qualquer tecla para continuar...\n");
        getch();  // Aguarda a entrada de uma tecla
    } while (escolha != 10);

    return 0;
}

