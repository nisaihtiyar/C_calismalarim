#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Araya sokma algoritmasi 

int main(){

    int dizi[10],i,j,eleman;
    srand(time(NULL));

    printf("Dizi: \n");
    for(i=0;i<10;i++){
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    printf("\n");
    printf("Sirali Dizi: \n");

    for(i=1;i<10;i++){
        eleman = dizi[i];
        for(j=i-1;j>=0 && eleman <= dizi[j];j--){
            dizi[j+1]=dizi[j];
        }
        dizi[j+1]=eleman;
    }

    for(i=0;i<10;i++){
        printf("%d ",dizi[i]);
    }



    return 0;
}