#include <stdio.h>
#include <string.h>

int main (){

    char lettere[50]={"AIEOU"};
    int posizione [50];
    int co = 0;
    int lun = strlen(lettere);
    int cont = 0;
    for(int i=0;i<lun;i++) {
        if (lettere[i]== 'a'||
            lettere[i]=='e'||
            lettere[i]=='i'||
            lettere[i]=='o'||
            lettere[i]=='u'||
            lettere[i]=='A'||
            lettere[i]=='E'||
            lettere[i]=='I'||
            lettere[i]=='O'||
            lettere[i]=='U')
        {
            cont++;
            posizione[co] = i;
            co++;
        }
    }
    printf("Ci sono %d vocali\n",cont);
    printf("Nelle posizioni :");
    for (int n=0;n < lun;n++) {
        printf("%d  ",posizione[n]);
    }

}


