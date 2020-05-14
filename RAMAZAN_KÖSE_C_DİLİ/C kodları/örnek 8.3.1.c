#include <stdio.h>
int main( void )
{
	// Her iki stringede ilk deger 
	// atamasi yapiliyor. Ancak 
	// isim stringinde, boyut 
	// belirtilmezken, soyad stringinde 
	// boyutu ayrica belirtiyoruz.
	char isim[] = "RAMAZAN";
	char soyad[5] = "KOSE";
	printf( "%s %s\n", isim, soyad );

	return 0;
}

