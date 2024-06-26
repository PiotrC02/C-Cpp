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
//typ danych uzywany przez makra va_list, va_start
{
    va_list args;
    //przekazanie argumentu count poprzedzajacego zmienna liste argumentow

    va_start(args, nodeCount);
    //inicjalizacja zmiennej lokalnej

    int head;
    Node_t * root;

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
    //pobranie wartosci ze zmiennej listy argumentow
    {
        head = va_arg(args, int);
        push(root, head);
    }

    return root;
}
