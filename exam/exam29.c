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
    int c;
    Node *p = NULL;
    Node *tmp ;
    
    while(c)
    {
        scanf("%d",&c);
        if(c == 1111)
            break;
        tmp =  malloc(sizeof(Node));
        tmp->data = c;
        tmp->next = p;
        p = tmp;
    }
    
   
    while(p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
    return 0;
}