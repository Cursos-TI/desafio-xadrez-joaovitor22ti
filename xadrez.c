#include <stdio.h>

//funções
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverBispoRecursivo(int passos, int direcao) {
    if (passos == 0) return;
    for (int i = 0; i < direcao; i++) {
        printf("Cima,Direita\n");
    }
    moverBispoRecursivo(passos - 1, direcao);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

void moverCavalo() {
    int movimentos = 2; // Duas casas para cima
    for (int i = 0; i < movimentos; i++) {
        printf("Cima\n");
    }
    
    for (int j = 0; j < 1; j++) { // Uma casa para a direita
        printf("Direita\n");
    }
}


int main() {
     //chamada das peças e funções
     printf("Torre:\n");
     moverTorre(5);
 
     printf("Bispo:\n");
     moverBispoRecursivo(5, 1);
 
     printf("Rainha:\n");
     moverRainha(8);
 
     printf("Cavalo:\n");
     moverCavalo();
     
    return 0;
}
