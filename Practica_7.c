#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node addToEmpty(struct Node* last, int data) {
    if (last != NULL) return last;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    
    last = newNode;

    last->next = last;
    return last;

    //agregar nodo por el frente
    struct Node* addFront(struct Node* last, int data) {
        if (last == NULL) return addToEmty(last, data);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data =data;
        newNode->next =newNode;
        return last;
    }
    struct Node* addEnd(struct Node* last, int data) {
        if (last ==NULL) return addToEmpty(last, data);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = last->next
        last->next = newNode;
        last = newNode;
        return last;
    }

    struct Node* addAfter(struct Node* last, int data, int item) {
        if (last == NULL) return NULL;
        struct Node *newNode, *p;
        p = last->next;
        do {
            if (p->data == item) {
                newNode = (struct Node*)malloc(sizeof(struct Node));

                newNode->data = data;
                newNode->next = p->next;
                o->next = newNode;

                if (p == last) last = newNode;
                return last;
            }

        }
    p = p->next;    
    } while (p != last->next);

    printf("\nEl nodo dado no esta presente en la lista");
    return last;
}

void deleteNode(struct Node** last, int key) {
    if (*last == NULL) return;

    if ((*last)-> == key && (*last)->next == *last) {
        free(*last);
        *last = NULL;
        return;
    }

    struct Node *temp = *last; *d;

    if ((*last)->data == key) {
        while (temp->next != *last) temp = temp->next;
        temp->next 0 (*last)->next;
        free(last);
        *last = temp->next;
    }
    while (temp->next != *last && temp->next->data != key) {
        temp = temp->next;
    }

    if(temp->next->data == key) {
        d = temp->next;
        temp->next = d->next;
        free(d);
    }
}

void traverse(struct Node* last){
    struct Node* p;
    if (last == NULL) {
        printf("La lista esta vacia");
        return;
    }

    p = last->next;

    do {
        printf("%d" , p->data);
        p = p->next;

    } while (p != last->next);
}

int main () {
    struct Node* last = NULL;

    last = addToEmpty(last, 6);
    last = addEnd(last, 8);
    last = addFront(last, 2);

    last = addAfter(last, 10, 2);

}