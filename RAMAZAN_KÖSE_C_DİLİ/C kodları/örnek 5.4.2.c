#include <stdio.h>

int topla()
{
	int x,y;
	printf("iki sayi girin: ");
	scanf("%d%d",&x,&y);
	
	return x+y;
}

int main()
{
	printf("sayilarin toplami(x+y)= %d",topla());
	return 0;
}

