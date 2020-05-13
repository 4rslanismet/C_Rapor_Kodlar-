// YARI ÇAPINI KULLANICIDAN ALINAN KÜRENİN YÜZEY ALANI VE HACMİNİ HESAPLAYAN PROGRAM

#include <stdio.h>

#define PI 3.14 //define deyimi ile sabit tanımlama

int main ()
{
	float yaricap ;
	float alan , hacim;

	printf("%s\n","Kürenin alan ve hacmini hesaplamak için yarıçap giriniz:");
	scanf("%f",&yaricap);

	alan = 4 * PI * yaricap * yaricap; //yarıçapa göre alan hesaplar
	hacim= 4/3 * PI * yaricap * yaricap * yaricap; // yarıçapa göre hacim hesaplanır

	printf("Girilen yarıçapa göre kürenin yüzey alanı:%.2f\n",alan); //kürenin yüzey alanını yadırır
	printf("Girilen yarıçapa göre kürenin hacmi:%.2f\n",hacim); //kürenin hacimini yazdırır

	return 0;

}