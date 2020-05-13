//X DEĞERİNİN 0 'A GÖRE OLASI İHTİMALLERİNİN DEĞERLENDİRİLMESİ

#include <stdio.h>

int main() //main fonksiyonu başlangıcı
{
	int X ; 

	printf("%s\n","	Lütfen karşılaştırma yapılcak olan X tam sayı değerini giriniz:" );//X değerini kullanıcıdan al

	scanf("%d",&X);

	if(X==0)// X = 0 olma durumu
		printf("girdiğiniz X %d değeri 0 'a eşittir\n", X ); 
	
	if(X>0) // X > 0 olma durumu
		printf("girdiğiniz X %d değeri 0 'dan büyüktür\n", X );

	if(X<0) // X < 0 olma durumu
		printf("girdiğiniz X %d değeri 0'dan küçüktür\n", X );

	return 0;

}//main fonksiyonu sonu
