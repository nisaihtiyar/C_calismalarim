#include <stdio.h>
#include <string.h>

int main(){

    //STRLEN --> stringin uzunlugunu verir
    //STRCOPY --> gonderilen 2. stringi ilkine kopyalar
    //STRCAT --> gonderilen 2. stringi ilkinin sonuna ekler
    /*STRCMP --> iki stringi karsilastirir
        ikisi ayniysa 0 doner
        ilki alfabetik olarak once geliyorsa 0 dan buyuk deger doner
        ikinci alfabetik olarak buyuk geliyorsa 0 dan kucuk deger doner
    */

   //bu fonksiyonlar string kutuphanesinde hazir olarak var 
   //bunlari kendimiz de yazabiliriz !

   //strlen icin

   char isim[10];
   int karakterSayisi;
   puts("Isminizi giriniz:");
   gets(isim);
   for(karakterSayisi=0;isim[karakterSayisi]!= '\0';karakterSayisi++);
   printf("%s ismi %d karakter icermektedir.",isim,karakterSayisi);

//digerlerini de dizilerle ve dongulerle yapabilirim



    return 0;
}