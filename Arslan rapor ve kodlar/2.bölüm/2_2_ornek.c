//GİRİLEN VİZE VE FINAL DEĞERİNDEN HARF NOTU HESAPLAYAN PROGRAM

#include <stdio.h>

int main ()
{
	int vize;
	int final;
	float not;

	printf("%s\n","Vize notunu giriniz:"); //kullanıcıdan vize değerini al
	scanf("%d",&vize);

	printf("%s\n","Final notunu giriniz:"); //kullanıcıdan final değerini al
	scanf("%d",&final);

	not =(vize * 0.2) + (final * 0.8); //vizenin %20'si ile finalin %80'ni topla 

	if(not <= 49.999)
		printf("Not ortalamanız : %.3f kaldınız.\n",not);

	else 
		printf("Not ortalamanız : %.3f geçtiniz.\n",not);

	return 0;

}