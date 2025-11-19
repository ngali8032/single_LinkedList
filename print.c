//print nodes
#include "header.h"

void print(NODE *ptr)
{
        if(ptr==NULL)
        {
                printf("No nodes available to print\n");
                return;
        }
        NODE *temp=NULL;
        temp=ptr;
        while(temp)
        {
                printf(GREEN"%d\t%s\n"RESET, temp->roll, temp->name);
                temp=temp->link;
        }
}
