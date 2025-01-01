#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    //Girilen kelime ve harf sayisini bulmak
    char metin[40];
    puts("Bir cumle giriniz.");
    gets(metin);
    int kelimeSayisi=0 , harfSayisi=0,i=0;


    while(metin[i]!= '\0'){
        if(metin[i]==' '||metin[i]=='.'){
            kelimeSayisi+=1;
        }
        else if(metin[i]!=' '||metin[i]!='.'){
            harfSayisi+=1;
        }
        i++;
    }


    printf("Cumledeki kelime sayisi: %d \nCumledeki harf sayisi: %d",kelimeSayisi,harfSayisi);
    return 0;
}