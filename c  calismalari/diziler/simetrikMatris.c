#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
3.Soru-> Oluşturulan matrisin simetrik olup olmadığını sorgulama.
		1 2 3
		2 1 2
		3 2 1
*/

int main(){

    int i,j;
    srand(time(NULL));

/*

    //rastgele matris olusturma
    printf("Matris: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matris[i][j]=rand()%5;
            printf("%d \t",matris[i][j]);
        }
        printf("\n");
    }

*/
//simetrik demek matrisi transpozunun kendisine esit olmasidir
//yani burada 00 11 22 noktalarinin esitligi onemli degildir!!!
    int matris[3][3]={{1,3,3},{3,2,3},{3,3,1}};
    printf("Matris:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}

    //matrisin simetrikligini sorgulama
    int sorgu=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matris[i][j]!=matris[j][i]){
                sorgu=1;
                break;
            }
            
        }
    }

    if(sorgu){
        printf("\nMatris simetrik degildir.");
    }
    else{
        printf("\nMatris simetriktir.");
    }

    return 0;
}