#include <stdio.h>

void aumento_lettera(char * a);

int main() {

    char let;
    aumento_lettera(&let);
    printf("La lettera aumentata e diventata: %c",let);

}

void aumento_lettera(char * a) {
    int aumento;
    printf("Inserire una lettera> ");
    scanf("%c",a);
    printf("Inserire di quanto aumentare la lettera> ");
    scanf("%d",&aumento);
    *a = *a + aumento;
}