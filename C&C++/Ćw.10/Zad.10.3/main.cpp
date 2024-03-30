#include <iostream>
#include <cassert>

using namespace std;

typedef struct Node
{
    int head;
    struct Node * tail;
} Node_t;


Node_t * createNode (int head, Node_t * tail)
{
    Node_t * node = (Node_t *) malloc (sizeof(*node));
    node -> head = head;
    node -> tail = tail;

    return node;
}

void pushBack (Node_t * root, int value)
{
     Node_t * currentNode = root;
     if (currentNode != NULL)
     {
         while (currentNode -> tail != NULL)
         currentNode = currentNode -> tail;
         currentNode -> tail = createNode (value, NULL);
     }
}

void pushFront (Node_t ** root, int value)
{
    if (root != NULL)
    {
        Node_t * node = createNode(value, *root);
        *root = node;
    }
}

bool popBack (Node_t ** root, int * buffer)
{
    bool result = false;
    if (root != NULL && *root != NULL && buffer != NULL)
    {
        Node_t * currentNode = *root;
        if (currentNode -> tail == NULL)
        {
            *buffer = currentNode -> head;
            free(currentNode);
            *root = NULL;
        }
        else
        {
            while (currentNode -> tail -> tail != NULL)
            currentNode = currentNode -> tail;
            *buffer = currentNode -> tail -> head;
            free(currentNode -> tail);
            currentNode -> tail = NULL;
        }
        result = true;
    }
    return result;
}

bool popFront( Node_t ** root, int * buffer)
{
    bool result = false;
    if (root != NULL && *root != NULL && buffer != NULL)
    {
        * buffer = (*root) -> head;
        Node_t * next = (*root) -> tail;
        free(*root);
        *root = next;
        result = true;
    }
    return result ;
}

// zad.2

void removeByIndex (Node_t **root, unsigned int index)
{
   // If linked list is empty
   if (*root == NULL)
      return;

   // Store head node
   Node_t* temp = *root;

    // If head needs to be removed
    if (index == 0)
    {
        *root = temp -> tail;   // Change head
        free(temp);               // free old head
        return;
    }

    // Find previous node of the node to be deleted
    for (int i=0; temp != NULL && i<index-1; i++)
         temp = temp -> tail;

    // If position is more than number of nodes
    if (temp == NULL || temp -> tail == NULL)
         return;

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    Node_t *next = temp -> tail -> tail;

    // Unlink the node from linked list
    free(temp -> tail);  // Free memory

    temp -> tail = next;  // Unlink the deleted node from list
}

// zad.3

void push (Node_t ** root, int value)
{
     Node_t * currentNode = *root;
     if (currentNode != NULL)
     {
         while (currentNode -> tail != NULL)
         currentNode = currentNode -> tail;
         currentNode -> tail = createNode (value, NULL);
     }
}

bool pop (Node_t ** root, int * buffer)
{
    bool result = false;
    if (root != NULL && * root != NULL && buffer != NULL)
    {
        * buffer = (*root) -> head;
        Node_t * next = (*root) -> tail;
        free (*root);
        *root = next;
        result = true;
    }
    return result;
}

bool isEmpty (Node_t * root)
{
    return root -> tail == NULL;
}

int main()
{
    /*pusta lista, usuwanie indeksu 0*/
    Node_t* empty_list = NULL;
    int res;
    removeByIndex(&empty_list, 0);
    assert(popFront(&empty_list, &res) == false);

    /*pusta lista, usuwanie indeksu 1*/
    Node_t* empty_list_1 = NULL;
    removeByIndex(&empty_list_1, 1);
    assert(popFront(&empty_list_1, &res) == false);

    /*lista jednoelementowa, usuwanie indeksu 0*/
    Node_t *list_1elem = createNode(1, NULL);
    removeByIndex(&list_1elem, 0);
    assert(popFront(&list_1elem, &res) == false);

    /*lista jednoelementowa, usuwanie indeksu 1*/
    Node_t *list_1elem_1 = createNode(1, NULL);
    removeByIndex(&list_1elem_1, 1);
    assert(popFront(&list_1elem_1, &res) == true);
    assert(res = 1);

    /*list n-elem, indeks 0*/
    Node_t *list_elem_n = createNode(1, NULL);
    pushBack(list_elem_n, 2);
    pushBack(list_elem_n, 3);
    removeByIndex(&list_elem_n, 0);
    assert(list_elem_n->head == 2);

    /*list n-elem, indeks 1*/
    Node_t *list_elem_n_1 = createNode(1, NULL);
    pushBack(list_elem_n_1, 2);
    pushBack(list_elem_n_1, 3);
    removeByIndex(&list_elem_n_1, 1);
    assert(list_elem_n_1->head == 1);
    assert(list_elem_n_1->tail->head == 3);

    /*list n-elem, indeks 2*/
    Node_t *list_elem_n_2 = createNode(1, NULL);
    pushBack(list_elem_n_2, 2);
    pushBack(list_elem_n_2, 3);
    removeByIndex(&list_elem_n_2, 2);
    assert(list_elem_n_2->head == 1);
    assert(list_elem_n_2->tail->head == 2);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
