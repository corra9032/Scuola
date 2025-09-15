#include <stdio.h>
#include <string.h>

void cifraggio(char *a, int *chiave,int lun);

void decifraggio(char *a, int *chiave,int lun);

int main() {
    char frase[100];
    int lun;
    int key[lun];
    int sn;
    printf("Inserisci una frase da cifrare");
    gets(frase);
    printf("Inserisci quanti numeri:");
    scanf("%d", &lun);
    printf("Inserisci quali numeri:");
    for (int i=0;i<lun;i++) {
        scanf("%d", &key[i]);
    }
    printf("vuoi cifrare (1) o decifrare (2)? ");
    scanf("%d", &sn);
    if (sn == 1) {
        cifraggio(frase, key,lun);
    }
    if (sn == 2) {
        decifraggio(frase, key,lun);
    }
    printf("La frase cifrata e: %s", frase);
}

void cifraggio(char *a, int *chiave,int lun) {
    int lung = strlen(a);
    int cont=0;
    int contm;
    for (int i = 0; i < lung; i++) {
        int temp = a[i];
        if (a[i] >= 'a' && a[i] <= 'z') {
            if (cont >= lun) {
                cont -= lun;
            }
            temp = temp + chiave[cont];
            while (temp > 'a') temp = temp - 'z' + 'a' - 1;
            cont++;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z') {
            if (contm >= lun) {
                contm -= lun;
            }
            temp = temp + chiave[contm];
            while (temp > 'A') temp = temp - 'Z' + 'A' - 1;
            contm++;
        }
        a[i] = (char) temp;
    }
}
void decifraggio(char *a, int *chiave,int lun) {
    int lung = strlen(a);
    int cont=0;
    int contm;
    for (int i = 0; i < lung; i++) {
        int temp = a[i];
        if (a[i] >= 'a' && a[i] <= 'z') {
            if (cont >= lun) {
                cont -= lun;
            }
            temp = temp - chiave[cont];
            while (temp < 'a') temp = temp - 'z' + 'a' - 1;
            cont++;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z') {
            if (contm >= lun) {
                contm -= lun;
            }
            temp = temp - chiave[contm];
            while (temp < 'A') temp = temp + 'Z' - 'A' + 1;
            contm++;
        }
        a[i] = (char) temp;
    }
}