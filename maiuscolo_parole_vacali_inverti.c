#include  <stdio.h>
#include <string.h>

int contaparole(char *a);

int contavocali(char *a);

void maiuscolo(char *a);

void invertita(char *a);

int main() {
    char frase[100];
    int parole;
    int vocali;
    printf("Inserisci una frase(max 100 caratteri)>");
    gets(frase);
    maiuscolo(frase);
    parole = contaparole(frase);
    vocali = contavocali(frase);
    invertita(frase);
    printf("Ci sono %d parole che hanno %d vocali\n", parole, vocali);
    printf("La frase invertita e:'%s'",frase);
}

void maiuscolo(char *a) {
    int lun = strlen(a);
    for (int i = 0; i < lun; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 32;
        }
    }
}

int contaparole(char *a) {
    int lun = strlen(a);
    int cont = 0;
    int i = 0;
    while (i < lun) {
        while (a[i] == ' ' && i < lun) {
            i++;
        }
        if (i < lun)
            cont++;

        while (a[i] != ' ' && i < lun) {
            i++;
        }
    }
    return cont;
}

int contavocali(char *a) {
    int lun = strlen(a);
    int cont = 0;
    int i = 0;
    for (i; i < lun; i++) {
        if (a[i] == 'a' ||
            a[i] == 'e' ||
            a[i] == 'i' ||
            a[i] == 'o' ||
            a[i] == 'u')
            cont++;
    }
    return cont;
}
void invertita(char *a) {
    char temp[100];
    int lun = strlen(a);
    int cont = 0;
    int i;
    for (i = lun - 1; i >= 0; i--) {
        temp[cont] = a[i];
        cont++;
    }
    temp[cont] = '\0';
    strcpy(a,temp);

}