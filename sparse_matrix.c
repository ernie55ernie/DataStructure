#include "sparse_matrix.h"

void sparse_transpose(SparseTerm A[], SparseTerm B[]){
	int current_b;
	int i, j;
	B[0].row = A[0].row;
	B[0].col = A[0].col;
	B[0].value = A[0].value;

	if(B[0].value == 0)return;
	current_b = 1;
	for(i = 0; i < A[0].col; i++){
		for(j = 0; j <= B[0].value; j++){
			if(A[j].col == i){
				B[current_b].row = A[j].col;
				B[current_b].col = A[j].row;
				B[current_b].value = A[j].value;
				current_b++; 
			}
		}
	}
}