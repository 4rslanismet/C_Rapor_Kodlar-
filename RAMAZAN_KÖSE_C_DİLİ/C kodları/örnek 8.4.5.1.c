/* strstr(  ) fonksiyon ornegi */
#include<stdio.h>
#include<string.h>
int main( void )
{
	char adres[] = "Esentepe Caddesi Mecidiyekoy Istanbul";
	char *ptr;
	// 'adres' katari icinde, 'koy' kelimesini 
	// ariyoruz. Bu amacla strstr(  ) fonksiyonunu 
	// kullaniyoruz. Fonksiyon buyuk-kucuk harf
	// duyarlidir. Eger birden fazla eslesme varsa,
	// ilk adres degeri doner. Hic eslesme olmazsa, 
	// pointer degeri NULL olur.
	ptr = strstr( adres, "koy" );
	if( ptr != NULL )
		printf( "Baslangic notkasi: %d\n", ptr - adres );
	else 
		printf( "Eslesme bulunamadi.\n" );
	return 0;
}

