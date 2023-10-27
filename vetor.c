#include <stdio.h>

int main(){
	int nota[3] = {9, 7, 8};
	double media;
	int i;
	
	for (i = 0; i < 3; i++){
		media += nota[i];
	
	}
	printf("media: %2.lf\n", media / 3);
}
