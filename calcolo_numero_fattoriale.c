#include <stdio.h>


int fattoriale(int bro);

int main (){

    int bro;
    printf("Please enter 1 number\n");
    scanf("%d",&bro);

    printf("%d",fattoriale(bro));
    return 0;
}

int fattoriale(int bro) {

    int i;
    int risposta = 1;
    for (i=1;i<=bro;i++) {
        risposta *= i;
        printf("risposta: %d\n",risposta);
       // printf("%d\n",bro);
    }
    return risposta;
}