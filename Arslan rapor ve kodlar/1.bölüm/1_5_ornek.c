
//ATAMA İŞLEMLERİ

#include <stdio.h>

int main() //main fonksiyonu başlangıcı
{
	int a=25 , b=25 ;

	printf("a değişkeninin ilk değeri :%d\nb değişkeninin ilk değeri :%d\n",a,b); // a ve b değişkenini yazdır

	a -=5; // a değişkeninden 5 çıkar ve a değişkenine sonucu ata
	
	printf("a -=5 atamasından sonra a değişkeni :%d\n",a ); // a değerini yazdır

	a +=10; // a değişkenine 10 ekle ve a değişkenine sonucu ata

	printf("a +=10 atamasından sonra a değişkeni:%d\n",a ); // a değerini yazdır

	a *=2; // a değişkenini 2 ile çarp ve a değişkenine sonucu ata
	
	printf("a *=2 atamasından sonra a değişkeni:%d\n",a ); // a değerini yazdır

	a /=b; //a değişkenini b değişkenine böl ve sonucu a değişkenine ata

	printf("a /=b atamasından sonra a değişkeni:%d\n",a ); // a değerini yazdır

	a %=b;  //a değişkeninin b değişkeni kadar modunu al ve sonucu a değişkenine ata
	
	printf("a %=b atamasından sonra a değişkeni:%d\n",a );	// a değerini yazdır

	
	return 0;
} //main fonksiyonu sonu









