#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    // Girilen stringi ters cevirme
/*
    char kelime[20];
    int karakterSayisi = strlen(kelime);
    char geciciKarakter;
    puts("Ters cevrilecek kelimeyi giriniz:");
    gets(kelime);

    for(int i = 0; i<karakterSayisi/2;i++){
        geciciKarakter = kelime[i];
        kelime[i] = kelime[karakterSayisi-i-1];
        kelime[karakterSayisi-i-1] = geciciKarakter;
    }
    puts(kelime);
*/

    //Buyuk kucuk harf duyarliligi olmadan girilen iki kelimenin ayni olup olmadini bulalim
    char kelime1[20];
    char kelime2[20];
    int karakterSayisi1,karakterSayisi2, i;
    int karakterSorgusu = 1;

    puts("Sirasiyla 2 kelimeyi giriniz:");
    gets(kelime1);
    gets(kelime2);

    karakterSayisi1 = strlen(kelime1);
    karakterSayisi2 = strlen(kelime2);

    if(karakterSayisi1 != karakterSayisi2){
        puts("Girilen kelimeler ayni degil!");
    }
    else{
        for(i=0;i<karakterSayisi1;i++){
            if((tolower(kelime1[i])) != (tolower(kelime2[i]))){
                karakterSorgusu =0;
                break;
            }
        }
        if(karakterSorgusu){
            puts("Girilen kelimeler birbirinin aynisidir.");
        }
        else{
            puts("Girilen kelimeler ayni degildir.");
        }
    }

    return 0;
}