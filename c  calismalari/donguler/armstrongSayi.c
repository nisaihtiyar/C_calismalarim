#include <stdio.h>
#include <math.h>

/*5.Soru-> Girilen bir sayının Armstrong sayısı olup olmadığını sorgulayın.
		Armstrong Sayı= Sayı basamaklarının ayrı ayrı küpleri alınıp toplandığında kendisini veren sayı
		Örneğin 371 sayısı: 3^3+7^3+1^3=371
		NOT:Ekstra olarak, 1 ile 1000 arasındaki tüm Armstrong sayılarını yazdırmaya çalışabilirsiniz
*/

int main(){

    int sayi,temp,toplam=0,basamak;

    printf("Kontrol edilecek sayiyi giriniz: \n");
    scanf("%d",&sayi);

    temp= sayi;
    while(temp!=0){
        basamak = temp%10;
        toplam += pow(basamak,3);
        temp /= 10;
    }

    if(toplam == sayi){
        printf("%d sayisi armstrong sayidir. \n" ,sayi);
    }

    else{
        printf("%d sayisi armstrong sayi degildir. \n", sayi);
    }

    return 0;
}