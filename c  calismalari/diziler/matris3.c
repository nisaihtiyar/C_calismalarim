#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//matris transpoz hesaplama

int main(){

    int matris[5][5],transpoz[5][5];
    int i,j;
    srand(time(NULL));

    printf("Matris: \n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matris[i][j] = rand()%10;
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }

    printf("Matrisin transpozu: \n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            transpoz[i][j] = matris [j][i];
            printf("%d\t",transpoz[i][j]);
        }
        printf("\n");
    }

    return 0;
}