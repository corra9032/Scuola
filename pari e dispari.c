#include <stdio.h>


char *paridisp(int bro);

int main() {
    int bro;
    printf("Please enter 1 number\n");
    scanf("%d", &bro);

    printf("%s", paridisp(bro));
    return 0;
}

char *paridisp(int bro) {
    if (!(bro % 2))
        return "pari";
    else
        return "dispari";
}
