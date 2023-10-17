#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constantes que definem a quantidade pelo nível
#define NUMERO_DE_TENTATIVAS 3
#define facil 20
#define medio 15
#define dificil 6

int main() {
    int jogarNovamente;

    do {
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    double pontos = 1000;

    // variaveis para armazenar os limites escolhidos
    int limite_inferior, limite_superior; 

    printf("Escolha o limite inferior para o número secreto: ");
    scanf("%d", &limite_inferior);
    printf("Escolha o limite superior para o número secreto: ");
    scanf("%d", &limite_superior);

    srand(time(0));

    // use os limites escolhidos pelo usuário para gerar o número secreto
    int numerosecreto = rand() % (limite_superior - limite_inferior + 1) + limite_inferior;

    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    // código onde conecta o #define de acordo com os níveis
    switch (nivel) {
        case 1:
            totaldetentativas = facil;
            break;
        case 2:
            totaldetentativas = medio;
            break;
        default:
            totaldetentativas = dificil;
            break;
    }

    for (int i = 1; i <= totaldetentativas; i++) {
        printf("-> Tentativa %d de %d\n", i, totaldetentativas);
        printf("Chute um número: ");
        scanf("%d", &chute);

        if (chute < limite_inferior || chute > limite_superior) {
            printf("Seu chute está fora dos limites escolhidos. Tente novamente.\n");
            i--;
            continue;
        }

        acertou = chute == numerosecreto;

        if (acertou) {
            break;
        } else if (chute > numerosecreto) {
            printf("\nSeu chute foi maior do que o número secreto!\n\n");
        } else {
            printf("\nSeu chute foi menor do que o número secreto!\n\n");
        }

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    
    if (acertou) {
		printf(" ___________ \n");
        printf("|           | \n");
        printf("| PARABÉNS! | \n");   
        printf("|___________| \n");
        printf("(\\__/) ||\n");
        printf("(•ㅅ•) ||\n");
        printf("/    づ \n");
        printf("Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {
		printf(" ___________\n");
        printf("|           | \n");
        printf("| QUE PENA! | \n");   
        printf("|___________| \n");
        printf("(\\__/) ||\n");
        printf("(•ㅅ•) ||\n");
        printf("/    づ \n");
        printf("Você perdeu! Tente novamente!\n\n");
    }
        printf("Deseja jogar novamente? (Digite 1 para sim e 2 para não): ");
        scanf("%d", &jogarNovamente);

    } while (jogarNovamente == 1);

    return 0;
}
