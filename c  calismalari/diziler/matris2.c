#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//2 matrisin toplami

int main(){

    int ilkMatris[5][5],ikinciMatris[5][5],toplamMatris[5][5];
    int i,j;
    srand(time(NULL));

    printf("Birinci matris: \n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            ilkMatris[i][j] = rand()%10;
            printf("%d \t", ilkMatris[i][j]);
        }
        printf("\n");
    }

    printf("Ikinci matris: \n");

     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            ikinciMatris[i][j] = rand()%10;
            printf("%d \t", ikinciMatris[i][j]);
        }
        printf("\n");
    }

    printf("Toplam matrisi: \n");

     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            toplamMatris[i][j] = ilkMatris[i][j] + ikinciMatris[i][j];
            printf("%d \t", toplamMatris[i][j]);
        }
        printf("\n");
    }




    return 0;
}