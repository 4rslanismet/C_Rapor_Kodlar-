// DİNAMİK OLARAK STRİNG TANIMLAMA

#include <stdio.h>
#include <stdlib.h>

int main () // main fonksiyonu başlangıcı
{
	char *str = malloc(sizeof(char)*20); //dinamik olarak 20 karakterlik bir string alanı ayırdık

	str="Dennis Ritchie";

	printf("str:%s\n",str);

	
	

	return 0;
} //main fonksiyonu başlangıcı
