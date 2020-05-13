//KULLANICININ GİRDİĞİ İKİ SAYININ EŞİTLİĞİNİ KARŞILAŞTIRAN PROGRAM


#include <stdio.h>

int main() //main fonksiyonu başlangıcı
{
	int sayi1;
	int sayi2;

	printf("%s\n","Lütfen karşılaştırmak istediğiniz iki tam sayı giriniz:" );

	scanf("%d%d",&sayi1,&sayi2); // sayi1 ve sayi2 değişkenlerini kullanıcıdan girilmesi

	if(sayi1==sayi2) // iki değerin eşitliğinin kontrolünü yap
	{
		printf("%s\n","Girilen değerler eşit");
	}

	else{
		printf("%s\n","Girilen değerler eşit değil");
	}

	return 0;

}//main fonksiyonu sonu
