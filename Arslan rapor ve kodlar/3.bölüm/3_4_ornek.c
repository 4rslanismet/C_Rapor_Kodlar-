//FOR DÖNGÜSÜ İLE 100 KERE İSİM YAZDIRAN PROGRAM

#include <stdio.h>

int main()//main fonksiyonunun başlangıcı
{
	int i; //sayaç-döngü değişkeni

	for(i=0;i<100;i++)
	{
		printf("%d. İsmet\t",i+1);
		
		if(i%10==0)
		    printf("\n");
    }
	return 0;
}//main fonksiyonunun sonu
