#include <stdio.h>

int main(){
	int mat [3] [3]; //O primeiro cochete é a linha, e o segundo a coluna.
	
	mat[0] [0] = 1;
	mat[0] [1] = 2;
	mat[0] [2] = 3;
	
	
	mat[1] [0] = 4;
	mat[1] [1] = 5;
	mat[1] [2] = 6;
	
	mat[2] [0] = 7;
	mat[2] [1] = 8;
	mat[2] [2] = 9;	
	
	printf("Imprimindo a segunda linha:\n");
	printf("| %d | %d | %d |\n", mat [1] [0], mat [1] [1], mat [1] [2] );
}
