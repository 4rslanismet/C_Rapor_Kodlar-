#include<stdio.h>
int main( void )
{
	char isim[] = { 'R', 'A', 'M', 'A', 
			'Z', 'A', 'N', '\0' };
	char soyad[5] = { 'K', 'O', 'S', 'E', '\0' };
	printf( "%s %s\n", isim, soyad );
	return 0;
}

