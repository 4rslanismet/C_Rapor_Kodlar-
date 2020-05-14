#include<stdio.h>
int main( void )
{
	// Degisken tipinin nasil olacagini tanimliyoruz
	enum ana_renkler {
		Kirmizi,
		Mavi,
		Sari
	};
	// Degiskeni tanimliyoruz.
	enum ana_renkler piksel;
	// Degisken degerini Mavi olarak belirliyoruz.
	// Dilersek Sari ve Kirmizi da girebiliriz.
	piksel = Mavi;
	// Degisken degeri karsilastiriliyor.
	if( piksel == Kirmizi )
		printf( "Kýrmýzý piksel\n" );
	else if( piksel == Mavi )
		printf( "Mavi piksel\n" );
	else
		printf( "Sarý piksel\n" );
	return 0;
}

