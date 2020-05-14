#include <stdio.h>
int main(void)
{ 
	int not[30][3];
	int i,j,toplam;
	double orta;

/* Kullanicidan notlarin alinmasi*/
	for(i=0;i<30;++i)
	{ printf("%d. ogrenci notlari:",i+1);
		for(j=0;j<3;++j)
		scanf("%d", &not[i][j]);
	}

/*Her sinavin ortalamasinin bulunmasi*/
	for(j=0;j<3;++j)
		{ toplam=0;
			for(i=0;i<30;++i)
			toplam+=not[i][j];
			orta=toplam/30.0;
			printf("%d. sinav ortalamasi: %5.2f\n",j+1,orta);
		}

	return (0);	

}

