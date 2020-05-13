//STANDART KÜTÜPHANAE FONKSİYONLARINI KULLANARAK DİNAMİK BELLEK YÖNETMİ

#include <stdio.h>
#include <stdlib.h>

int main () //main fonksiyonu başlangıcı
{

	int * dizi=malloc(sizeof(int)*5); // dizi pointerını 5 elemanlık bir dizi haline getiriyoruz
	int i; //döngü değişkeni

	dizi=realloc(dizi,10); //dizimizi 10 elemanlık olacak şekilde genişletiyoruz

	if(!dizi)
	{
		printf("bellek yeterli değil!..\n");
		exit(1);
	}

	for(i=0;i<10;i++)
	{
		printf("dizinin %d.elemanını giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}


	printf("\n\n%s\n\n","Girilen dizi yazdırılıyor....");

	for(i=0;i<10;i++)
		printf("dizinin %d.elemanı:%d\n",i+1,dizi[i]);

	printf("%s\n","Dizi siliniyor");

	free(dizi); //dizinin alanını geri iade ediyoruz

	
		
	

	return 0;
	

}
