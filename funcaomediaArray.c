#include <stdio.h>
#include <locale.h>

	mediaArrey(int vet[], int num){
	int i, soma = 0;
	double media = 0;
	for(i = 0; i < num; i++){
		soma+=vet[i];
	}
	media = soma/num;
	return media;
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int array[4] = {5, 5, 6, 5};
	double m;
	
	m = mediaArrey(array, 4);
	
	printf("A média do array é %.2lf", m);
	
}
