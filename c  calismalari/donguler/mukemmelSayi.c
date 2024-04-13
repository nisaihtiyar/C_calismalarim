#include<stdio.h>

/*3.Soru->Kullanıcıdan bir adet sayı alınıp sayının mükemmel sayı olup olmadığı sorgulanacak.
		Mükemmel Sayı= Kendisi hariç bütün pozitif bölen sayıları topladığınız zaman kendisini veren sayı!
			Örneğin 6 sayısı: 3 +2 +1=6.
*/

int main(){

    int sayi,toplam = 0,i;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    for(i=1;i<sayi;i++){

        if(sayi%i==0){
            toplam += i;
        }
    }

    if(toplam == sayi){
        printf("%d mukemmel sayidir.",sayi);
    }

    else{
        printf("%d mukemmel sayi degildir.", sayi);
    }
    return 0;
}