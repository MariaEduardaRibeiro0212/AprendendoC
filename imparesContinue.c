#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i= 0;
	
	for(i; i <= 10; i++){
		if(i % 2 == 0){
			continue;
		}
		printf("%d\n", i);
	}
}
