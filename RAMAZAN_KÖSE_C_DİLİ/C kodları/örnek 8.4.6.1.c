#include<stdio.h>
#include<stdlib.h>
int main( void )
{
	char kok_iki[] = "1.414213";
	char pi[] = "3.14";
	char tam_bir_sayi[] = "156";
	char hayatin_anlami[] = "42 is the answer";

	printf( "%d\n", atoi( tam_bir_sayi ) );
	printf( "%d\n", atoi( hayatin_anlami ) );
	printf( "%f\n", atof( kok_iki ) );
	printf( "%f\n", atof( pi ) );
	return 0;
}

