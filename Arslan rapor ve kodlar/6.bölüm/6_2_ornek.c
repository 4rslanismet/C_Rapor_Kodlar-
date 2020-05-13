//Kullanıcının girdiği üç sayıdan en büyük olanını fonksiyon ile bulan program:

#include <stdio.h>
	
#define SIZE 3

int enBuyuk (int arr[] , int size ); // enBuyuk fonksiyon prototipi

int main (void) // main başlangıcı
{
	int dizi[SIZE];
	int i;



	for(i=0;i<SIZE;i++)
	{
		printf("%d. sayıyı giriniz:",i+1);
		scanf("%d",&dizi[i]);

	}

	printf("Girdiğiniz değerlerin en büyük olanı %d değeridir.\n",enBuyuk(dizi,SIZE));

	return 0;

} // main sonu 

// enBuyuk fonksiyonu tanımı
//x , y ve z parametre 

int enBuyuk(int arr[],int size)
{
	int buyuk; // en büyük değeri saklayacak olan değişken
	int i,j;//döngü değişkenleri

	buyuk=arr[0];

	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i]>buyuk)
				buyuk=arr[i];
		}
	}

	return buyuk;

} // enBuyuk fonksiyonunun sonu
