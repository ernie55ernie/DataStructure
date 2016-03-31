#include <stdio.h>
#include "single_linked_list.h"

int main(){
	initialize();
	insert(30);
	insert(20);
	delete(30);
	insert(10);
	insert(60);
	traverse();
	printf("count: %d\n", count());
	invert();
	traverse();
}