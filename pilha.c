#include <stdio.h>
#define N 5

int pilha[N];
int t=0;

void empilhar(){

    int elemento;

    printf("Digite um numero:\n");
    scanf("%d", &elemento);
    pilha[t++]=elemento;
}

int desempilhar(){

    return pilha[--t];
}

void imprimirPilha(){

    printf("\nPilha: ");
    for(int i=0;i<t;i++)
    printf("%d ", pilha[i]);

}

int vazia(){

    return t==0;
}

int cheia(){

    return t==N;
}

int main()
{
       int  opc;

        while(1)
    {

        printf("Escolha uma das opcoes:\n");
        printf("1-Empilhar;\n");
        printf("2-Desempilhar;\n");
        printf("3-Imprimir;\n");
        printf("0-Sair;\n");
        scanf("%d", &opc);

        switch(opc)
        {
            case 1:
                    if(!cheia())
                        empilhar();
                    break;
            case 2: 
                    if(!vazia())
                        printf("Desempilhar: %d.\n", desempilhar());
                    break;
            case 3:
                    imprimirPilha();
                    printf("\n");
                    break;
            case 0:
                    return 0;
                    
            default:
                    printf("\nOpcao Invalda!\n");
                    break;
        }

    }

}