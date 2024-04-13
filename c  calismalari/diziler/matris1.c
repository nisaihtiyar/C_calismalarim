#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//satir ve sutunlardaki sayilari toplama


int main(){

    int i,j,satirToplam,sutunToplam,ilkMatris[5][5];
    srand(time(NULL));
    printf("Matris: \n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            ilkMatris[i][j] = rand()%10;
            printf("%d \t", ilkMatris[i][j]);
        }
        printf("\n");
    }


     for(i=0;i<5;i++){
        satirToplam=0;
        sutunToplam=0;

        for(j=0;j<5;j++){
            satirToplam += ilkMatris[i][j];
            sutunToplam += ilkMatris[j][i];
        }
        
        printf("%d. satirin toplami : %d\n",i+1,satirToplam);
        printf("%d. sutunun toplami : %d\n\n",i+1,sutunToplam);
    }

   


    return 0;
}