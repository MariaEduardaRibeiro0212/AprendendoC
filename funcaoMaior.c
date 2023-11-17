#include <stdio.h>
#include <locale.h>
 
 float maior(float num1, float num2){
 	if(num1 > num2){
 		return num1;
	 }else{
	 	return num2;
	 }
 };
 
 int main(){
 	
 	float x, y, m;
 	
 	puts("Insira uma valor:");
 	scanf("%f", &x);
 	
 	puts("Insira uma valor:");
 	scanf("%f", &y);
 	
 	m = maior (x, y);
 	printf("Maior: %.2f\n", m);
 }
