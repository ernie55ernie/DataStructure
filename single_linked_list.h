#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int data;
	struct node* next;
}list_node;

typedef list_node* list_pointer;

list_pointer head, current, previous;

void initialize();

void traverse();

void insert(int value);

void delete(int value);

int count();

void concatenate(list_pointer A, list_pointer B);

void invert();