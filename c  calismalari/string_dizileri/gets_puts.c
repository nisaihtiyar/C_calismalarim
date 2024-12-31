#include <stdio.h>

int main(){
    
/*
    char isim[10];
    puts("Lutfen adinizi giriniz: "); //alt satira gecer
    gets(isim);
    puts(isim);
*/

    char isimler[3][10];
    char soyisimler[3][10];
    int i;

    for(i=0;i<3;i++){
        puts("Lutfen isim giriniz:");
        gets(isimler[i]);
        puts("Lutfen soyadinizi giriniz:");
        gets(soyisimler[i]);
    }

    puts("Listedeki kisiler:");
    for(i=0;i<3;i++){
        printf("%s %s \n",isimler[i],soyisimler[i]);
    }

    return 0;
}
