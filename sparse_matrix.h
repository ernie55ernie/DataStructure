#define MAX_SIZE 100
typedef struct{
	int row;
	int col;
	int value;
}SparseTerm;

void sparse_transpose(SparseTerm[], SparseTerm[]);