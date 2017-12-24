#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct {
    char name[50];
    int sala;
} REGISTER;

typedef struct {
    REGISTER info;
    struct LIST *prox;
} LIST;

int main() {

    int op;

    while(1) {
        printf("\n--- M E N U ---\n");
        printf("\n(1) Inserir");
        printf("\n(2) Listar");
        printf("\n(3) Sair");
        printf("\n\n> ");
        scanf("%d", &op);

        switch(op) {
            case 1: printf("\nTwitter");
                break;
            case 2: printf("\nMicrosoft");
                break;
            case 3: printf("\nApple");
                break;
            default: printf("\nFacebook");
                break;            
        }
        getch();
    }


    return 0;
}