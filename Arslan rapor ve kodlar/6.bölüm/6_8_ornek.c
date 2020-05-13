//1 DEN 100 E KADAR OLAN SAYILARI YAZDIRAN RECURSİVE FONKSİYON

#include <stdio.h>
#include <stdlib.h>

void sayiYaz(int sayi)
{	
		
	if(sayi<=100)
	{

		printf("sayi:%d\t",sayi );
		sayiYaz(sayi+1);
	}

	else
	  	exit;

}
int main () //main bbaşlangıcı
{
	sayiYaz(1);

	return 0;

}
