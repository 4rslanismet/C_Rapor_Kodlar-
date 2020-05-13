
// FPUTS FONKSİYONU KULLANIMI

#include <stdio.h> 
#define BOYUT 25
  
int main() 
{ 
   char isim[BOYUT]; 
  
    printf("%s\n","isminizi giriniz"); 
    
    printf("\n");

    fgets(isim , BOYUT , stdin);
    
    printf("\n");

    fputs(isim , stdout); 
  
    return 0; 
} 

