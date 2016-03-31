#include "single_linked_list.h"

void initialize(){
	head = (list_pointer)malloc(sizeof(list_node));
	head->next = NULL;
}

void traverse(){
	if(head->next == NULL)
		printf("linked list is empty\n");
	else{
		current = head->next;
		while(current != NULL){
			printf("%d ", current->data);
			current = current->next;
		}
	}
}

void insert(int value){
	list_pointer ptr;
	ptr = (list_pointer)malloc(sizeof(list_node));
	ptr->data = value;
	previous = head;
	current = head->next;
	while((current != NULL) && (current->data > ptr->data)){
		previous = current;
		current = current->next;
	}
	ptr->next = current;
	previous->next = ptr;
}

void delete(int value){
	if(head->next == NULL)
		printf("linked list is empty\n");
	else{
		previous = head;
		current = head->next;
		while((current != NULL) && (current->data != value)){
			previous = current;
			current = current->next;
		}
		if(current != NULL){
			previous->next = current->next;
			free(current);
		}else
			printf("%d doesn't exist\n", value);
	}
}

int count(){
	int length = 0;
	current = head->next;
	while(current != NULL){
		length++;
		current = current->next;
	}
	return length;
}

void concatenate(list_pointer A, list_pointer B){
	list_pointer ptr = A;
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	ptr->next = B->next;
	free(B);
}

void invert(){
	list_pointer forward;
	current = NULL;
	forward = head->next;
	while(forward != NULL){
		previous = current;
		current = forward;
		forward = forward->next;
		current->next = previous;
	}
	head->next = current;
}