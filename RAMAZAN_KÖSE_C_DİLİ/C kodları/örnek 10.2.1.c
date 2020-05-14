#include<stdio.h>
int main( void )
{	// Yeni veri tipini olusturuyoruz
	// Ayrica yeni veri tipinden, bir degisken tanimliyoruz.
	enum boolean {
		false = 0,
		true = 1
	};
	// Alttaki komut sayesinde, boolean veri tipini tek adimda yaratabiliyoruz.
	typedef enum boolean bool;
	bool dogru_mu;
	dogru_mu = true;
	if( dogru_mu == true )
		printf( "Dogru\n" );
	return 0;
}

