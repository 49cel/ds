#include <stdio.h>

struct DNode {
	int data;
	struct DNode *next;
	struct DNode *prev;
}

void insert_front(struct DNode **head, int value) {
	struct DNode *new_node = malloc(sizeof(struct DNode));
	new_node->data = value;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL) {
		(*head)->prev = new_node;
	}

	*head = new_node;
}

void insert_end(struct DNode **head, int value) {
	struct DNode *new_node = malloc(sizeof(struct DNode));
	new_node->data = value;
	new_node->next = NULL;

	if(*head == NULL) {
		new_node->prev = NULL;
		*head = new_node;
		return;
	}

	struct DNode *temp = *head;
	
	while(temp->next != NULL) {
		temp = temp->next;
	}
	
	temp->next = new_node;
	new_node->prev = temp;
}

void delete_value(struct Node **head, int value) {
	struct DNode *temp = *head;
	while (temp != NULL && temp->data != value) {
		temp = temp->next;
	}

	if (temp == NULL) {
		return;
	}

	if (temp->prev != NULL) {
		temp->prev->next = temp->next;
	}
	else {
		*head = temp->next;
	}

	if(temp->next != NULL) {
		temp->next->prev = temp->prev;
	}
	
	free(temp);
}
