#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void insert_at_front(struct Node **head, int value) {
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->data = value;
	new_node->next = *head;
	*head = new_node;
}

void insert_at_end(struct Node **head, int value) {
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->data = value;
	new_node->next = NULL;

	if (*head == NULL) {
		*head = new_node;
		return;
	}

	struct Node *temp = *head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = new_node;
}

void delete_by_value(struct Node **head, int value) {
	struct Node *prev = *head;
	struct Node *temp = *head->next;

	while(temp != NULL && temp->data != value) {
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL) {
		return;
	}

	prev->next = temp->next;
	free(temp);
}

int main(void) {
	
	struct Node *head = NULL;
	insert_at_front(&head, 30);
	insert_at_front(&head, 20);
	insert_at_front(&head, 10);
	insert_at_end(&head, 40);

	struct Node *temp = head;

	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}

	printf("\n");

	temp = head;

	while (temp != NULL) {
		struct Node *next = temp->next;
		free(temp);
		temp = next;
	}

	return 0;
}
