#include<stdio.h>
int main( void )
{
	struct {
		int yil;
		int ay;
		int gun;
	} siz, kiz_kardes, erkek_kardes;
	printf( "Do�um g�n�n�z� giriniz> ");
	scanf( "%d-%d-%d",	&siz.gun,&siz.ay,&siz.yil );
	printf( "K�z karde�iniz> " );
	scanf( "%d-%d-%d", 	&kiz_kardes.gun,&kiz_kardes.ay,&kiz_kardes.yil );
	printf( "Erkek karde�iniz> " );
	scanf( "%d-%d-%d", 	&erkek_kardes.gun,&erkek_kardes.ay,&erkek_kardes.yil );
	printf("\n\n ----------------------------------------------------------------------------\n\n");
	printf( "Do�um g�n�n�z:  ");
	printf( "%d-%d-%d \n\n",	siz.gun,siz.ay,siz.yil );
	printf( "K�z karde�inizin dogum g�n�>  " );
	printf( "%d-%d-%d\n\n", 	kiz_kardes.gun,kiz_kardes.ay,kiz_kardes.yil );
	printf( "Erkek karde�iniz> " );
	printf( "%d-%d-%d \n\n", 	erkek_kardes.gun,erkek_kardes.ay,erkek_kardes.yil );
	return 0;
}

