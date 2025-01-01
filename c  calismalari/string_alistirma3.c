#include <stdio.h>
#include <string.h>

int main(){
    //palindrom kelime sorgusu
    char kelime[20];
    int i=0;
    int sorguPolindrom = 1;

    puts("Sorgulanacak kelimeyi giriniz:");
    gets(kelime);

    int karakterSayisi = strlen(kelime);

    for(i=0;i<karakterSayisi/2;i++){
        if(kelime[i]!=kelime[karakterSayisi-i-1]){
            sorguPolindrom = 0;
            break;
        }
        
    }

    if(sorguPolindrom == 1){
        printf("%s kelimesi polindromdur.",kelime);
    }
    else{
        printf("%s kelimesi polindrom bir kelime degildir.",kelime);
    }



    return 0;
}