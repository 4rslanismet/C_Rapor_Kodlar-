//YAPILARA FARKLI YOLLA ERİŞMEK

#include <stdio.h>

struct sayilar
{
	int sayi1,sayi2;
};

int main (void)//main fonskiyonu başlangıcı
{

	struct sayilar s1 ={.sayi2=22, .sayi1=11};
	struct sayilar s2 ={.sayi2=30};

printf("sayi1:%d, sayi2:%d\n",s1.sayi1,s1.sayi2);
printf("sayi1:%d",s2.sayi2);




	return 0;
}//main fonksiyonu sonu
