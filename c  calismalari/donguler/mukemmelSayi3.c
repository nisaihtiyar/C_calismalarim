#include <stdio.h>

//6.Soru->3.Soruda yaptığımız mükemmel sayı sorgusunu döngü şartı kullanmayıp sadece break ve continue ile yapınız.

int main(){

    int sayi, toplam=0 , i=1;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    while(1){
        if(i ==sayi){
            break;
        }
        if(sayi%i==0){
            toplam+= i;
        }
        i++;
    }

    if(toplam == sayi){
        printf("%d mukemmel sayidir. \n",sayi);
    }
    
    else{
        printf("%d mukemmel sayi degildir. \n",sayi);
    }

    return 0;
}