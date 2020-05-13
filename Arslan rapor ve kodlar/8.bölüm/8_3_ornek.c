//CALLOC FONKSİYONU İLE BELLEKTEN ALAN TAHSİSİ

#include <stdio.h>
#include <stdlib.h>

int main () // main fonksiyonu başlangıcı
{
	int *pointer;
	
	pointer=calloc(50,sizeof(int));

	if(pointer==NULL)
	{
		printf("bellek yetersiz!...\n");
		exit(1);
	}

	else
	{
	printf("alan tahsisi başarılı\n");
	}

	return 0;
}
