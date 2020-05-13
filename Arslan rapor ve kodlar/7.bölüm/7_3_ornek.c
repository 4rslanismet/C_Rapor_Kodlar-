//DİZİ ELEMANLARINI POİNTERLARA ATAMAK

#include <stdio.h>

int main ()//main fonksiyonu başlangıcı
{
	int dizi[]={10,20,30,40,50};
	int *diziPointer=dizi; // diziPointer dizi'yi işaret etsin
	int i  ; //döngü değişkenleri

	printf("dizi pointerları ile dizi yazdırılıyor\n");//dizi pointerları ile dizi yazmak
	
	for(i=0;i<5;i++)
		printf("dizi[%d]:%d\n",i,dizi[i]);

	printf("\n\ndizi offset yöntemi ile dizi yazıdırılıyor\n");//dizi offset yöntemi ile dizi yazmak

	for(i=0;i<5;i++)
		printf("*(dizi+%d):%d\n",i,*(dizi+i));


	printf("\n\npointer offset yöntemi ile dizi yazıdırılıyor\n");//pointer offset yöntemi ile dizi yazmak

	for(i=0;i<5;i++)
		printf("*(Pointerdizi+%d):%d\n",i,*(diziPointer+i));

	return 0;

}