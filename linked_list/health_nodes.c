#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
	int data; 
	struct Node *next; 
	struct Node *prev; 
};

void push(struct Node **head_ref, int new_data) 
{
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node)); 
	
	new_node->data = new_data; 	
	new_node->next = (*head_ref); 
	new_node->prev = NULL; 

	if ((*head_ref) != NULL) 
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

void checkHealth(struct Node *node){
	struct Node *last; 
	while (node != NULL) {
		if (node->data > 0){
			int r = rand() % 2;
			if (r == 1){
				printf(" | Unhealthy");
				node->data -= 1;
			}else{
				printf(" | Healthy");
				node->data = 3;
			}
		}
		last = node;
		node = node->next;
	}
}

int main() 
{
	srand(time(NULL));
	struct Node *head = NULL;	
	push(&head, 3); 
	push(&head, 3);
	push(&head, 3);
	push(&head, 3);
	push(&head, 3);
	push(&head, 3);

	char c;
	while (c != '0'){
		printf("\nEscribir 0 para terminar\n");
		checkHealth(head);
		c = getchar();
	}
	return 0; 
}
