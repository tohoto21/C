#include <stdio.h>
#include <stdlib.h>

typedef int Data;
typedef struct Node 
{
    Data data;
    struct Node* next;
} Node;

int main()
{
    Node *p = NULL;
    Node *tmp ;
    
    for(int i=0;i<4;i++)
    {
        tmp =  malloc(sizeof(Node));
        tmp->data = i;
        tmp->next = p;
        p = tmp;
    }
    
   
    while(p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    return 0;
}