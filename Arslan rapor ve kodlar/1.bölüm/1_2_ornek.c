// KULLANICININ GİRDİĞİ İKİ SAYIYI TOPLAYAMA

#include <stdio.h>

int main() //main fonksiyonunun başlangıcı
{
	int sayi1 ;
	int sayi2 ;
	int toplam;

	printf("%s\n","Lütfen bir tam sayı giriniz:" ); 

	scanf("%d",&sayi1); // kullanıcadan aldığı değeri sayi1 değişkenine atar


	printf("%s\n","Lütfen bir tam sayı giriniz:" );
	
	scanf("%d",&sayi2); // kullanıcadan aldığı değeri sayi2 değişkenine atar

	toplam = sayi1 + sayi2; // sayi1 ve sayi2 yi topla toplam değişkenine ata

	printf("%d\n",toplam ); //toplam değişkeninin değerini yazdır.
	return 0;
	
}//main fonksiyonu sonu