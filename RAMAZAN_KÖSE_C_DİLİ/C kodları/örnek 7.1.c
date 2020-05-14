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
	// Kullanicidan eleman sayisini girmesini
	// istiyoruz.
	printf( "Eleman sayýsýný giriniz> ");
	scanf( "%d", &eleman_sayisi );

	// calloc( ) fonksiyonuyla dinamik olarak 
	// dizimizi istedigimiz boyutta yaratiyoruz. 
	dizi = calloc( eleman_sayisi, sizeof( int ) );

	// Ornek olmasi acisindan dizinin elemanlarini 
	// ekrana yazdiriliyor. Dizilerde yapabildiginiz 
	// her seyi hicbir fark olmaksizin yapabilirsiniz.
	for( i = 0; i < eleman_sayisi; i++ )
		printf( "%d\n", dizi[i] );
	// Dinamik olan diziyi kullandiktan ve isinizi 
	// tamamladiktan sonra free fonksiyonunu kullanip
	// hafizadan temizlemelisiniz.
	free( dizi );

	return 0;
}

