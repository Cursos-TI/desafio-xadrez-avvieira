/*#include <stdio.h>

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


    printf("\n");


    printf("Cavalo:\n"); // Titulo da peça!!! Na Estrura de Repetição 

    
    int movL = 1;

    while (movL--)
    {
        for(int i = 0; i < 2; i++){
            printf("Baixo\n");
        } 
        printf("Esquerda\n");
    }
    





    return 0;
}


*/

#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0) {
        printf("Direita\n");
       
        moverTorre (casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0) {
        printf("Cima, Direita\n");
       
        moverBispo (casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0) {
        printf("Esquerda\n");
       
        moverRainha (casas - 1);
    }
}





int main(){

    printf("Torre:\n");
    moverTorre(5);

    printf("\n");

    printf("Bispo:\n");
    moverBispo(5);

    printf("\n");

    printf("Rainha:\n");
    moverRainha(8);



    return 0;
}