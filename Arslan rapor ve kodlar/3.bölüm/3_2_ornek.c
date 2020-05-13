//ÖGRENCİLERİN NOTLARINI KULLANICIDAN ALARAK SINIFIN NOT ORTALAMASINI BULAN PROGRAM

#include <stdio.h>

int main()//main fonksiyonu başlangıcı
{
	int ogrenci_sayisi;
	int toplam_not = 0;
	int not;
	float ortalama;
	int i = 0; // sayaç 

	printf("%s\n","Lütfen öğrenci sayısını giriniz:");
	scanf("%d",&ogrenci_sayisi);

	if(ogrenci_sayisi<1) //öğrenci sayısını kontrol et
	{
		printf("Öğrenci sayısı 1'den küçük olamaz\n");
		return 0; //programı sonlandır
	}

	while(i<ogrenci_sayisi)
	{
		printf("%d. öğrencinin notunu giriniz:\n",i+1 );
		scanf("%d",&not);
		toplam_not+=not; //toplam notun üzerine girilen not değerini ekle
		i++; //	sayacı arttır
	}

	ortalama=toplam_not/ogrenci_sayisi;

	printf("%d. kişilik sınıfın ortalaması %.3f'dir\n",ogrenci_sayisi,ortalama );

	return 0;

} // main fonksiyonu sonu