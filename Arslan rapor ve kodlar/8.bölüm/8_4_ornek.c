//REALLOC FONKSİYONU KULLANIMI

#include <stdio.h>
#include <stdlib.h>

int main () // main fonksiyonu başlangıcı
{
	int i;//döngü değişkeni
	char *c;
	c=malloc(10);

	if(!c)
	{
		printf("Bellek yetersiz!..\n");
		exit(1);
	}

	else
	{
		printf("Bellek tahsisi başarılı\nAlan 5 byte'a küçültülüyor...\n");

		c=realloc(c,5);

		if(!c)
		{
			printf("Bellek yetersiz!...\n");
			exit(1);
		}

		else
		{
			printf("Bellek tahsisi başarılı\n");
		}
	}

	return 0;

}
