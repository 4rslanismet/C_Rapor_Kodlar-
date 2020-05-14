#include<stdio.h>
int main( void )
{
	char isim[30];
	int i;
	printf( "Ýsim giriniz> ");
	scanf( "%s", isim );

	printf( "Girdiðiniz isim: ");
	for( i = 0; isim[i]!='\0'; i++ )
		printf( "%c", isim[i] );
	printf("\n");

	return 0;
}

