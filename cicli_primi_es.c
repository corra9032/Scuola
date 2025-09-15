#include <stdio.h>

int main(){

  int num=0;
  int n;
while(num<20){
  num += 2;
  printf("%d\n",num);
}

  do{
    printf("Inserisci un numero positivo");
    scanf("%d",&n);
  }while(n <= 0);
}