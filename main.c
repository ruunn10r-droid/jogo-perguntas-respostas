#include <stdio.h>

int main() {
    int pontos = 0;
    char resposta;

    printf("🎮 Jogo de Perguntas e Respostas 🎮\n\n");

    // Pergunta 1
    printf("1) Qual a capital do Brasil?\n");
    printf("a) São Paulo\n");
    printf("b) Brasília\n");
    printf("c) Rio de Janeiro\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'b' || resposta == 'B') {
        printf("✅ Resposta correta!\n\n");
        pontos++;
    } else {
        printf("❌ Resposta errada. A correta é Brasília.\n\n");
    }

    // Pergunta 2
    printf("2) Quanto é 5 + 7?\n");
    printf("a) 12\n");
    printf("b) 10\n");
    printf("c) 14\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'a' || resposta == 'A') {
        printf("✅ Resposta correta!\n\n");
        pontos++;
    } else {
        printf("❌ Resposta errada. A correta é 12.\n\n");
    }

    // Pergunta 3
    printf("3) Qual linguagem estamos estudando agora?\n");
    printf("a) Java\n");
    printf("b) Python\n");
    printf("c) C\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'c' || resposta == 'C') {
        printf("✅ Resposta correta!\n\n");
        pontos++;
    } else {
        printf("❌ Resposta errada. A correta é C.\n\n");
    }

    // Resultado final
    printf("Você acertou %d de 3 perguntas.\n", pontos);

    if (pontos == 3) {
        printf("🏆 Parabéns! Você foi aprovado!\n");
    } else {
        printf("📚 Continue praticando para melhorar.\n");
    }

    return 0;
}
