// X DEĞERİNİ 0 İLE KARŞILAŞTIRAN PROGRAM

#include <stdio.h>

int main () //main fonksiyonu başlangıcı
{

	int X;

	printf("%s\n","Lütfen karşılaştırma yapılacak olan X tam sayısını giriniz:"); 

	scanf("%d",&X); // X değerini oku

	if(X==0)// X=0 durumu
		printf("X in değeri %d , 0'a eşittir \n", X);

	else if(X>0) // X > 0
		printf("X in değeri %d , 0'dan büyüktür \n", X);
	
	else
		printf("X in değeri %d , 0'dan küçüktür\n", X);

	return 0;

} //main fonksiyonu sonu
