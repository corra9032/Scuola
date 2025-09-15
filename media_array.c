#include <stdio.h>

int main() {

    int num[8];
    int num_tot;
    int media;
    int lun = sizeof(num)/sizeof(num[0]);
    printf("Inserisci 8 numeri\n");
    for (int i =0;i<lun;i++) {
        scanf("%d",&num[i]);
    }
    for (int i =0;i<lun;i++) {
        num_tot = num[i] + num_tot;
    }
    media = num_tot / lun;
    printf("La media dei numeri e : %d",media);
}