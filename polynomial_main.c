#include "polynomial.h"
#include <stdio.h>

int main(){
	Polynomial A, B, C;
	A.count = 0;
	attach(&A, 3, 5);
	attach(&A, 8, 4);
	attach(&A, -6, 2);
	attach(&A, 5, 0);

	B.count = 0;
	attach(&B, 2, 6);
	attach(&B, 4, 2);
	attach(&B, 1, 0);

	polynomial_add(&A, &B, &C);

	int i;
	printf("%d\n", C.count);
	for(i = 0; i < C.count; i++)
		printf("%dx^%d ", C.terms[i].coef, C.terms[i].exp);
}