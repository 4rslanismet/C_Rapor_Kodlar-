// ÖĞRENCİNİN HARF NOTUNU HESAPLAYAN PROGRAM

#include <stdio.h>

int main ()//main fonksiyonu başlangıcı
{
	int vize ;
	int final;
	float not;

	printf("%s\n","lütfen vize notunuzu giriniz:");

	scanf("%d",&vize);

	printf("%s,\n","lütfen final notunuzu giriniz:");

	scanf("%d",&final);

	not=(vize*0.4) + (final*0.6);

	if(not >=90.00)
		printf("%s\n","Harf notunuz :A" );

	else if(not >=  75)
		printf("%s\n","Harf notunuz :B" );

	else if(not >= 60)
		printf("%s\n","Harf notunuz :C" );
	
	else if(not >= 50)
		printf("%s\n","Harf notunuz :D" );

	else
		printf("%s\n","Harf notunuz :F KALDINIZ !" );

	return 0;

} // main fonksiyonu sonu
