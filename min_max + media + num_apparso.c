#include <stdio.h>
#include <string.h>


int media(int *arr,int far);
void min_max(int *arr,int far);
void num_apparso(int *arr,int far);

int main (){

    int bro[10];
    int ciclo = sizeof(bro)/sizeof(bro[0]);
    printf("Please enter 10 numbers\n");
   for(int i = 0; i < ciclo; i++){
       scanf("%d",&bro[i]);
   }
   printf("%d\n",media(bro,ciclo));
    min_max(bro,ciclo);
    num_apparso(bro,ciclo);
    return 0;
}

int media(int *arr,int far){
  int medias = 0;
    for(int i = 0; i < far; i++){
      medias = medias + arr[i];
    }
    medias = medias / far;
    return medias;
  }
void min_max(int *arr,int far){
int min = arr[0];
    int max = arr[1];
    int i;
    for (i = 0; i < far; i++) {
        if (arr[i] <= min)
            min = arr[i];
        else if (arr[i] >= max)
            max = arr[i];
        else if (min > max) {
            min = max;
            max = min;
        }
    }
    printf("Minimum number is %d\nMaximum number is %d\n",min,max);
}
void num_apparso(int *arr,int far){
    int conta[10] = {0};
    for(int i = 0; i < far; i++) {
        conta[arr[i]]++;
    }
    for(int i = 0; i < 10; i++) {
        printf("il numero %d e apparso %d volte\n",i,conta[i]);
    }
}