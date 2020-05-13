//5 ÖĞRENCİNİN VİZE VE FİNAL NOTLARINI ALARAK GEÇME KALMA DURUMUNU YAZDIRAN PROGRAM

#include <stdio.h>

#define SIZE1 2
#define SIZE2 5

int main()//main fonksiyonu başlangıcı
{	
	int notlar[SIZE1][SIZE2];
	float durum[SIZE2];

	int i,j;

	for(i=0;i<SIZE1;i++)
	{
		for(j=0;j<SIZE2;j++)
		{
			if(i==0)
			{
				printf("%d. öğrencinin vize notunu giriniz:",j+1);
				scanf("%d",&notlar[i][j]);
			}

			else
			{
				printf("%d. öğrencinin final notunu giriniz:",j+1);
				scanf("%d",&notlar[i][j]);
			}

		}
	}


	for(i=0;i<SIZE1;i++)
		{
			for(j=0;j<SIZE2;j++)
				{
					if(i==0)
						durum[j] +=(notlar[i][j]*0.4);

					else
						durum[j] +=(notlar[i][j]*0.6);
				}
		}

	for(j=0;j<SIZE2;j++)
		{	
			if(durum[j]<50.000)
				printf("%d numaralı öğrenci kaldı\n",j+1);
			else
				printf("%d numaralı öğrenci geçti\n",j+1);
		}
	
	return 0;
}
