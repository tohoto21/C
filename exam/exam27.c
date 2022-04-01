#include <stdio.h>


typedef int Data;
typedef struct Node 
{
    Data data;
    struct Node* next;
} Node;

int main()
{
   
    
    Node a = {3}, b={17}, c={21};
    Node *list = &a;
    a.next = &b; b.next = &c; c.next = NULL;
    Node*p = list;
    while(p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}