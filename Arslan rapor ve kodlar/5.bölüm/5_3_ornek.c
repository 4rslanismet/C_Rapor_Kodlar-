//KULLANICIDAN İSMİNİ ALARAK HOŞGELDİNİZ YAZDIRAN PROGRAM

#include <stdio.h>

 //KARMAŞIK SIRADA VERİLEN 5 ELEMANLI BİR DİZİYİ SIRALAYAN PROGRAM

#include <stdio.h>

int main()//main fonksiyonu başlangıcı
{

	int dizi[]={3,2,4,5,1};

	int i,j; //döngü değişkenleri
	int temp; //geçici değişken

	printf("%s\n","sırasız dizi:" );

	for(i=0;i<5;i++)
		printf("%d ",dizi[i]);

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;

			}

		}
	}

	printf("\n\n%s\n","sıralı dizi:" );
	for(i=0;i<5;i++)
		printf("%d ",dizi[i]);

	return 0;

}