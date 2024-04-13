#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//1.Soru-> İki adet Matris oluşturup, bu iki matrisi çarparak yeni bir matris oluşturma.
//3x3 iki matris carpimini yapmayi tercih ettim.

int main(){

    int matris1[3][3], matris2[3][3], carpimMatrisi[3][3];
    int i,j,k, toplam;
    srand(time(NULL));

    //matrisleri olusturalim

    printf("Birinci matris: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matris1[i][j]=rand()%5;
            printf("%d \t",matris1[i][j]);
        }
        printf("\n");
    }


    printf("Ikinci matris: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matris2[i][j]=rand()%5;
            printf("%d \t",matris2[i][j]);
        }
        printf("\n");
    }
    
    //matrislerde carpma islemi 
    printf("Carpim matrisi: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            toplam =0;
            for(k=0;k<3;k++){
                toplam += matris1[i][k]*matris2[k][j];
            }
            carpimMatrisi[i][j] = toplam ;
            printf("%d\t",carpimMatrisi[i][j]);
        }
        printf("\n");
    }


    return 0;
}