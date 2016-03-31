#include "polynomial.h"

void attach(Polynomial *p, int coef, int exp){
	if(p->count >= MAX_SIZE)
		return;
	p->terms[p->count].coef = coef;
	p->terms[p->count].exp = exp;
	p->count++;
}

void polynomial_add(Polynomial *pa, Polynomial *pb, Polynomial *pc){
	int current_a = 0, current_b = 0;
	pc->count = 0;
	while(current_a < pa->count && current_b < pb->count){
		switch(COMPARE(pa->terms[current_a].exp, pb->terms[current_b].exp)){
		case -1:
			attach(pc, pb->terms[current_b].coef, pb->terms[current_b].exp);
			current_b++;
			break;
		case 0:
			if((pa->terms[current_a].coef + pb->terms[current_b].coef) != 0){
				attach(pc, pa->terms[current_a].coef + pb->terms[current_b].coef,
					pa->terms[current_a].exp);
				current_a++;
				current_b++;
			}
			break;
		case 1:
			attach(pc, pa->terms[current_a].coef, pa->terms[current_a].exp);
			current_a++;
			break;
		}
	}

	while(current_a < pa->count){
		attach(pc, pa->terms[current_a].coef, pa->terms[current_b].exp);
		current_a++;
	}

	while(current_b < pb->count){
		attach(pc, pb->terms[current_b].coef, pb->terms[current_b].exp);
		current_b++;
	}
}