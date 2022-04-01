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
    Node* last = NULL;
    Node* fist = NULL;
    
    Node* tmp ;
    
    for(int i=0;i<4;i++)
    {
        
       
        
        if(fist == NULL)
        {
            fist = malloc(sizeof(Node));
            
            fist->data = i;
            fist->next = NULL;
            tmp=last=fist;
        } else
        {
            tmp = malloc(sizeof(Node));
            tmp->data=i;
            tmp->next=NULL;
            last-> next=tmp;
            last=last->next;

        }
       
        
    }
    
   
    while(p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    return 0;
}
tmp = malloc(sizeof(Node));
tmp->data =i;
tmp->next = NULL;
if(last){
    last->next=tmp;
    last =last->next;
}else{
    fist=last=tmp;
}