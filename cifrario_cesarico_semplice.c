#include <stdio.h>
#include <string.h>

void cifraggio(char *a, int chiave);

void decifraggio(char *a, int chiave);

int main() {
    char frase[100];
    int sit;
    int sn;
    printf("Inserisci una frase da cifrare");
    gets(frase);
    printf("Inserisci di quanto cifrare");
    scanf("%d", &sit);
    printf("vuoi cifrare (1) o decifrare (2)? ");
    scanf("%d", &sn);
    if (sn == 1) {
        cifraggio(frase, sit);
    } else if (sn == 2) {
        decifraggio(frase, sit);
    }
    printf("La frase cifrata e: %s", frase);
}

void cifraggio(char *a, int chiave) {
    int lun = strlen(a);
    for (int i = 0; i < lun; i++) {
        int temp = a[i];
        if (a[i] >= 'a' && a[i] <= 'z') {
            temp = temp + chiave;
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            temp = temp + chiave;
        }

        if (temp > 'z') {
            while (temp > 'z') {
                temp = temp - 'z' + 'a' - 1;
            }
        } else if (temp > 'Z') {
            while (temp > 'Z') {
                temp = temp - 'Z' + 'A' - 1;
            }
        }
        a[i] = (char) temp;
    }
}

void decifraggio(char *a, int chiave) {
    int lun = strlen(a);
    for (int i = 0; i < lun; i++) {
        int temp = a[i];
        if (a[i] >= 'a' && a[i] <= 'z') {
            temp = temp - chiave;
            while (temp < 'a') temp = temp + 'z' - 'a' + 1;
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            temp = temp - chiave;
            while (temp < 'A') temp = temp + 'Z' - 'A' + 1;
        }
        a[i] = (char) temp;
    }
}
