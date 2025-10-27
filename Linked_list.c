#include <stdio.h>
struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter value for first node:");
    scanf("%d",&newNode->data);
	//newNode->data = 50;
    newNode->next = NULL;
    head = newNode;
    printf("Node data: %d\n", head->data);

    return 0;
}

