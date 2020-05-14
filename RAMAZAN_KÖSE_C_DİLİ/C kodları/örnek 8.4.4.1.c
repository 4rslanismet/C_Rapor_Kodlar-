#include<stdio.h>
#include<string.h>
int main( void )
{
	char ad[30], soyad[20];
	char isim_soyad[50];
	printf( "Ad ve soyadýnýzý giriniz> " );
	scanf( "%s%s", ad, soyad );
	// isim_soyad <-- ad
	strcat( isim_soyad, ad );
	// isim_soyad <-- ad + " "
	strcat( isim_soyad, " " );
	// isim_soyad <-- ad + " " + soyad
	strcat( isim_soyad, soyad );
	printf( "Tam isim: %s\n", isim_soyad );
	return 0;
}

