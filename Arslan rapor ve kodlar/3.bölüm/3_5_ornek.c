//200'DEN 900'E KADAR OLAN ÇİFT SAYILARIN TOPLAMINI BULAN PROGRAM

#include <stdio.h>

int main() //main fonksiyonu başlangıcı
{	
	int i; // sayaç
	int toplam = 0; // toplamı saklayan değişken
  	
  	for(i=200;i<900;i++)
  	{	
  		if(i%2==0)
  			toplam +=i;

  		else
  			continue;


  	}

  	printf("200'den 900'e kadar çift sayıların toplamı: %d\n",toplam );
    
    
    return 0;
} //main fonksiyonu başlangıcı
