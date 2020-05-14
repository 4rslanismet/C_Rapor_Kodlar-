#include<stdio.h>
#include<string.h>
int main( void )
{
	char kaynak[40]="Merhaba Dunya";
	char kopya[30] = "";
	strncpy( kopya, kaynak, 9 );
	printf( "%s\n", kopya );

	return 0;
}

