#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Tek boyutlu oluşturulan bir matrisi kullanıcıdan alınan satır ve sütun sayısına göre iki boyutlu matrise çevirme.
/*
1 2 3 4 5 6 7 8-> satır=4,sütun=2
		1 2
		3 4
		5 6
		7 8	
*/
int main(){

    int satir,sutun;
    int diziTek[10],i,j;
    srand(time(NULL));

    //random bir tek boyutlu mtris olusturma ve yazdirma
    printf("Tek boyutlu matris: \n");
    for(i=0;i<10;i++){
        diziTek[i]=rand()%10;
        printf("%d ",diziTek[i]);
    }

    //kullanicidan iki boyutlu matris icin sayi isteme
    //istenen 2 sayinin carpimi ilk dizinin boyutu kadar olmalidir!! Bunun saglamasini yapmayacagim.
    printf("\nLutfen iki boyutlu matris icin satir ve sutun sayisi seciniz.\n");
    scanf("%d %d",&satir,&sutun);
    int diziIki[satir][sutun];

    for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			diziIki[i][j]=diziTek[sutun*i+j];//sutun*i+j islemi bize bir boyutlu dizide siradaki elemanin konumunu verir
			printf("%d\t",diziIki[i][j]);
		}
		printf("\n");
	}
    

    return 0;
}