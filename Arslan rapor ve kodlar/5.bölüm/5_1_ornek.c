// 5 ELEMANLI BİR DİZİ TANIMLAYIP ÖNCE TÜM ELEMANLARINI 0 ATAYAN SONRA KULLANICIDAN ALAN PROGRAM

#include <stdio.h>
#include <stdlib.h>
int main()//main fonksiyonu başlangıcı
{

	int dizi[4];
	int i;//sayaç ve indis

	for(i=0;i<5;i++)
		printf("%d. eleman : %d\n",i+1,dizi[i]);

	printf("%s\n","Tüm elemanlara 0 değeri ataması yapılıyor");
	
	for(i=0;i<5;i++){
		
		dizi[i]=0;
		
		if(i==4)
			printf("%s\n","Atma tamamlandı" );

	}

	

	for(i=0;i<5;i++)
		printf("%d. eleman : %d\n",i+1,dizi[i]);
	
	printf("%s\n","Lütfen 5 tane tam sayı giriniz:" );

	for(i=0;i<5;i++)
		scanf("%d",&dizi[i]);

	printf("%s\n","Girdiğiniz tam sayı değerleri" );

	for(i=0;i<5;i++)
		printf("%d. eleman : %d\n",i+1,dizi[i]);

return 0;

}