/* Ev sekli cizen program */
#include<stdio.h>
// Evin catisini cizen fonksiyon. 
void catiyi_ciz( void )
{
	printf( "    /\\   \n" );
	printf( "   /  \\  \n" );
	printf( "  /    \\ \n" );
	printf( " /      \\\n" );
	printf( "----------\n" );
}

// Evin katini cizen fonksiyon. 
// sol ve sag degiskenleri fonksiyon 
// parametreleridir.
void kat_ciz( char sol, char sag ) 
{
	printf( "%c        %c\n", sol, sag );
	printf( "%c        %c\n", sol, sag );
	printf( "%c        %c\n", sol, sag );
	printf( "----------\n" );
}

// Programin calismasini saglayan 
// ana fonksiyon. 
int main( void )
{
	char sol_duvar, sag_duvar;
	printf( "Kullanýlacak karakterler> " );
	scanf( "%c",&sol_duvar );
	scanf( "%c",&sag_duvar );
	catiyi_ciz( );
	
	// sol_duvar ve sag_duvar, fonksiyona 
	// giden argumanlardir. 
	kat_ciz( sol_duvar, sag_duvar );
	kat_ciz( sol_duvar, sag_duvar );
	kat_ciz( sol_duvar, sag_duvar );

	return 0;
}

