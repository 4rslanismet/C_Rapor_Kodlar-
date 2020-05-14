#include<stdio.h>
#include<stdlib.h>
int main( void )
{
	// Dinamik bir dizi yaratmak icin 
	// pointer kullaniriz.
	int *dizi;
	// Dizimizin kac elemanli olacagini 
	// eleman_sayisi isimli degiskende 
	// tutuyoruz.
	int eleman_sayisi;
	int i;

	printf( "Eleman sayýsýný giriniz> ");
	scanf( "%d", &eleman_sayisi );

	// malloc( ) fonksiyonuyla dinamik olarak 
	// dizimizi istedigimiz boyutta yaratiyoruz. 
	dizi = malloc( eleman_sayisi * sizeof( int ) );

	for( i = 0; i < eleman_sayisi; i++ )
		printf( "%d\n", dizi[i] );

	// Dinamik olan diziyi kullandiktan ve isinizi 
	// tamamladiktan sonra free fonksiyonunu kullanip
	// hafizadan temizlemelisiniz.
	free( dizi );

	return 0;
}

