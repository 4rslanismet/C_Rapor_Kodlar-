#include<stdio.h>
int main( void )
{
	// Deðiþken tipinin nasýl olacaini tanimliyoruz
	enum boolean {
		false = 0,
		true = 1
	};
	// Simdi de 'dogru_mu' adinda bir degisken tanimliyoruz
	enum boolean dogru_mu;
	// Tanimladigimiz 'dogru_mu' degiskenine
	// deger atayip, bir alt satirda da kontrol yapýyoruz.
	dogru_mu = true ;
	if( dogru_mu == true )
		printf( "Dogru\n" );
	else 
	printf("yanlis\n");
	return 0;
}

