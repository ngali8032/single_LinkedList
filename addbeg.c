//add beginning of the nodes
#include "header.h"

NODE *addbeg(NODE *ptr)
{

        NODE *newnode = NULL;
        newnode = malloc(sizeof(NODE));
        newnode->link = NULL;
        printf("Enter roll:-");
        scanf("%d", &newnode->roll);
        printf("Enter name:-");
        scanf("%s", newnode->name);
        if(ptr==NULL)
        {
                ptr=newnode;
        }
        else
        {
                newnode->link=ptr;
                ptr=newnode;
        }
        return ptr;
}
