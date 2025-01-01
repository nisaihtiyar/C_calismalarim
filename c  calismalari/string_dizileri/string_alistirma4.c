#include <stdio.h>
#include <string.h>

int main(){

    //girilen 2. kelime girilen ilk kelimenin icinde var mi?

    char kelime1[20];
    char kelime2[20];

    puts("Ilk kelimeyi giriniz:");
    gets(kelime1);
    puts("Ikinci kelimeyi giriniz:");
    gets(kelime2);

    int i=0,j=0,devamEdilecekIndex=0;
    int sorgu;

    while(kelime1[i] != '\0'){
        i=devamEdilecekIndex;
        j=0;
        sorgu=1;
        while(kelime2[j] != '\0'){
            if(kelime1[i] != kelime2[j]){
                sorgu=0;
                break;
            }
            i++;
            j++;
        }
        if(sorgu){
            printf("%s kelimesinin icinde %s kelimesi bulunmaktadir.",kelime1,kelime2);
        }
        devamEdilecekIndex++;
    }


    return 0;
}