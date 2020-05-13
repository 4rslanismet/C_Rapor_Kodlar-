
// FGETS FONKSİYONU KULLANIMI

#include <stdio.h> 
#define BOYUT 15 
  
int main() 
{ 
   char isim[BOYUT]; 
  
    printf("%s\n","isminizi giriniz"); 
    fgets(isim , BOYUT , stdin);
    printf("isim: %s\n", isim); 
  
    return 0; 
} 

