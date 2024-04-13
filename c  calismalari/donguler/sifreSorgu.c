#include<stdio.h>

/*
2.Soru->Şifre Sorgulama.Kullanıcıdan döngü içinde karakterler alıp şifre uygunluğu sorgulama
		-Büyük harf küçük harf kullanılması gerek.
		-Sayı kullanılmış olması gerek.
		-Şifrenin 8 karakterden uzun olmuş olması gerek.
		-Şifrenin 16 karakterden kısa olması gerek.
*/

int main(){
    int kucukHarfSorgu=0,buyukHarfSorgu=0,sayiSorgu=0,karakterSayisi=0;
	char ch;
	printf("Lutfen bir sifre giriniz:");
	do{
		ch=getchar();
		if(kucukHarfSorgu==0){
			if(islower(ch)){
				kucukHarfSorgu=1;
			}
		}
		if(buyukHarfSorgu==0){
			if(isupper(ch)){
				buyukHarfSorgu=1;
			}
		}
		if(sayiSorgu==0){
			if(isdigit(ch)){
				sayiSorgu=1;
			}
		}
		karakterSayisi++;
	}while(ch!='\n'); //kullanici enter a basana kadar getchar() ile karakter aliriz 
	
	if(kucukHarfSorgu && buyukHarfSorgu && sayiSorgu && karakterSayisi>=8 && karakterSayisi<=16){
		printf("Sifreniz kabul edilmistir.");
	}
	else{
		printf("Sifreniz kabul edilmemistir.");
	}
}