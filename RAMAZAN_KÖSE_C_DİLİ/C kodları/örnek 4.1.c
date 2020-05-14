#include <stdio.h>
main()
{
int i;int toplam=0;
int a[10];
for(i=0;i<10;i++)
{
	printf("dizi elemanlarini gir:");
	scanf("%d",&a[i]);	printf("\n");
	toplam = toplam + a[i];
}
printf("toplam= %d \n",toplam);
getch();
}

