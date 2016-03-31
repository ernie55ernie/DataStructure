#define COMPARE(x, y) ((x < y) ? -1 : (x == y) ? 0 : 1)
#define MAX_SIZE 100	/* maximum size of the array of the non zero term in the 
							polynomial */

typedef struct{
	int coef;	/* coefficient */
	int exp;	/* exponent */
}NonZeroTerm;

typedef struct{
	int count;
	NonZeroTerm terms[MAX_SIZE];
}Polynomial;

void attach(Polynomial*, int, int);

void polynomial_add(Polynomial*, Polynomial*, Polynomial*);