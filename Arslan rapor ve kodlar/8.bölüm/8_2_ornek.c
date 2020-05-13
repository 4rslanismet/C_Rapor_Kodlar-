//MALLOC FONKSİYONU İLE 10 ELEMANLI İNTEGER DİZİSİ OLUŞTURAN PROGRAM

#include <stdio.h>
#include <stdlib.h>

int main ()//main fonksiyonu başlangıcı
{

	int *p;
	p=malloc(1874919423);

	if(p==NULL)
	{
		printf("Bellek yetersiz !...\n");
		exit(1);
	}
	
	else 
		printf("Alan ayırma işlemi başarılı");

	return 0;
}
