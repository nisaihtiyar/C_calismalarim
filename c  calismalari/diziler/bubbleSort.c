#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Kabarcik siralama algoritmasi

int main(){

    int dizi[10],i,j;
    srand(time(NULL));

    printf("Dizi: \n");
    for(i=0;i<10;i++){
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }

//siralama islemi
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(dizi[j]>dizi[j+1]){
                int gecici=dizi[j];
                dizi[j]= dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }

//sirali diziyi yazdirma
    printf("\nSirali dizi: \n");
    for(i=0;i<10;i++){
        printf("%d ",dizi[i]);
    }


    return 0;
}