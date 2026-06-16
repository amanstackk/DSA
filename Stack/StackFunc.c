#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* top = NULL;

void push(struct node** top, int x){
	struct node* newnode = malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = *top;
	*top = newnode;
}

int pop(struct node** top) {
	if(*top == NULL){
		printf("Stack Underflow\n");
		return -1;
	}
	struct node* temp = *top;
	*top = temp->next;
	int val = temp->data;
	free(temp);
	return val;
}

int empty(struct node* top){
	return top == NULL;
}

void display(struct node* top){
	if(top == NULL){
		printf("Stack empty\n");
		return;
	}
	struct node* temp = top;
	while(temp){
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main(){
	struct node* top;
	push(&top, 5);
	push(&top, 6);
	push(&top, 7);
	push(&top, 8);
	push(&top, 9);
	pop(&top);
	empty(top);
	display(top);
	return 0;
}