#include<stdio.h>
#include<string.h>
int main( void )
{
	int sonuc;
	char ilk_string[40]="Maymun";
	char ikinci_string[40]="Maytap";
	sonuc = strcmp( ilk_string, ikinci_string );
	printf( "%d\n", sonuc );
	sonuc = strncmp( ilk_string, ikinci_string, 3 );
	printf( "%d\n", sonuc );

	return 0;
}

