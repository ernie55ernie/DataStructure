#include "sparse_matrix.h"
#include <stdio.h>

int main(){
	SparseTerm A[3], B[3];
	A[0].row = 5;
	A[0].col = 5;
	A[0].value = 2;

	A[1].row = 1;
	A[1].col = 4;
	A[1].value = 6;

	A[2].row = 2;
	A[2].col = 3;
	A[2].value = 3;

	sparse_transpose(A, B);
	printf("%d\n", B[0].value);
	for(int i = 1; i <= B[0].value; i++){
		printf("%d, %d : %d\n", B[i].row, B[i].col, B[i].value);
	}
}