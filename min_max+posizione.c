#include <stdio.h>

int main() {

    int posizione_min;
    int posizione_max;
    int min = 1;
    int max;
    int numeri[10];
    int lun=sizeof(numeri)/sizeof(numeri[0]);
    printf("Inserisci 10 numeri\n");
    for (int i =0;i < lun;i++) {
        scanf("%d",&numeri[i]);
    }

    for (int i =0;i < lun;i++) {
        if (numeri[i] > max) {
            max = numeri[i];
            posizione_max = i;
        }
        if (numeri[i] < min)
            min = numeri[i];
            posizione_min = i;
    }
    if (min == max) {
        printf("Il min e max sono uguali a %d",min);
    }
    else
        printf("min %d nella posizione %d e max %d nella posizione %d",min,posizione_min,max,posizione_max);
}