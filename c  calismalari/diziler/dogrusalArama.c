#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Dogrusal arama algoritmasi

int main(){

    int dizi[10],i,arananSayi,bulunduMu=0;
    srand(time(NULL));
    printf("Aranan sayiyi giriniz: \n");
    scanf("%d",&arananSayi);

    for(i=0;i<10;i++){
        dizi[i]=rand()%10;
        printf("%d ",dizi[i]);
    }

    printf("\n");

    for(i=0;i<10;i++){
        if(dizi[i]==arananSayi){
            bulunduMu = 1;
            break;
        }
    }

    if(bulunduMu ==1){
        printf("%d sayisi bulundu. Bu sayi dizinin %d. elemani.",arananSayi,i+1);
    }
    else{
        printf("%d sayisi dizide bulunmamaktadir.",arananSayi);
    }

    return 0;
}