#include <stdio.h>

int main(){
	int nota[4];
	double soma, media;
	int i;
	
	for (i = 0; i < 4; i++){
		printf("Digite a nota %d:\n", i + 1);
		scanf("%d", &nota[i]);
		soma += nota[i];
	
	}
	printf("media: %2.lf\n", soma / 4);
}
