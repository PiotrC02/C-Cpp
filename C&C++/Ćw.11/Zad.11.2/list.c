#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

static Node_t * createNode(int head) {
	Node_t * node = (Node_t *) malloc(sizeof(node));
	node->head = head;
	node->tail = NULL;
	return node;
}

void push(Node_t * root, int value) {
	Node_t * currentNode = root;
	if (currentNode != NULL) {
		while (currentNode->tail != NULL)
			currentNode = currentNode->tail;
		currentNode->tail = createNode(value);
	}
}

void printList(Node_t * root) {
	Node_t * currentNode = root;
	while (currentNode != NULL) {
		printf("%d\n", currentNode->head);
		currentNode = currentNode->tail;
	}
}

Node_t * createList(unsigned int nodeCount, ...)
{
	va_list args;
	va_start(args, nodeCount);

	int head;
	Node_t* root;

	if (nodeCount >= 0)
	{
		head = va_arg(args, int);
		root = createNode(head);
	}
	else
	{
		return NULL;
	}

	for (unsigned int i = 1; i < nodeCount; ++i)
	{
		head = va_arg(args, int);
		push(root, head);
	}
	return root;
}

void removeIf(Node_t ** root, Predicate predicate, int toCompare)
{
    Node_t * currentNode = *root, *prev;
    if (predicate(currentNode->head, toCompare))
    {
        *root = currentNode->tail;
        free(currentNode);
        return;
    }
    while (currentNode->tail != NULL && !predicate(currentNode->head, toCompare))
    {
        prev = currentNode;
        currentNode = currentNode->tail;
    }
    if (currentNode == NULL)
    {
        return;
    }
    prev->tail = currentNode->tail;
    free(currentNode);
    return;
}
