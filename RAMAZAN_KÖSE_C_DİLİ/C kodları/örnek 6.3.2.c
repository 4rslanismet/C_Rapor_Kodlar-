#include<stdio.h>
int main( void )
{
	int i;
	// dizi'yi tanimliyoruz.
	int dizi[ 6 ] = { 4, 8, 15, 16, 23, 42 };
	// ptr adinda bir pointer tanimliyoruz.
	int *ptr;
	// ptr'nin dizi'yi isaret etmesini soyluyoruz.
	ptr = dizi;
	// ptr'in degerini artirip, dizi'nin butun 
	// elemanlarini yazdiriyoruz.
	for( i = 0; i < 6; i++ ) 
		printf( "%d\n", *( ptr + i ) );

	return 0;
}

