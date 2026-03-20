#include <stdio.h>

int main (){

    printf("Torre:\n"); // Titulo da peça!!! Na Estrura de Repetição For

    for (int i = 1; i <= 5; i++) 
    {
        printf("Direita %d\n", i);
    }



    printf("\n");


    printf("Bispo:\n"); // Titulo da peça!!! Na Estrura de Repetição While

    int i = 1;

    while (i <= 5)
    {
        printf("Cima, Direita %d\n", i);
        i++;
    }



    printf("\n");


    printf("Rainha:\n"); // Titulo da peça!!! Na Estrura de Repetição Do While

    int x = 1;

    do {

       printf("Esquerda %d\n", x);
       x++;

    } while (x <= 8);
    





    return 0;
}