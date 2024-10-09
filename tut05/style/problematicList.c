#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

static void freeList(struct node *head);
static void printList(struct node *head);

int main() {
	struct node *head = NULL;
	head = add(head, 1);
	head = add(head, 2);
	head = add(head, 3);
	head = add(head, 4);
	printList(head);
	freeList(head);
	return 0;
}

// Helper function to free a linked list
static void freeList(struct node *head) {
	if (head == NULL) {
		return;
	}
	struct node *temp = head;
	while (head != NULL) {
	    temp = head;
	    head = head->next;
	    free(temp);
	}
}

// Helper function to print out values in a linked list
static void printList(struct node *head) {
    while (head->next != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("%d\n", head->data);
    return;
}

struct node *add(struct node *addedNode, int data) {
    // malloc the node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    // set the node's data field
    newNode->data = data;
    // set the node's next field to NULL
    newNode->next = NULL;
	if (addedNode == NULL) {
		addedNode = newNode;
	} else {
        struct node *lastNode = a;
        while (lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
	}
	return addedNode;
}
