//This file is used for adding files at last of nodes
#include "header.h"

NODE *addlast(NODE *ptr)
{
        NODE *newnode = NULL;
        newnode = calloc(1, sizeof(NODE));
        printf("Enter the roll:");
        scanf("%d", &newnode->roll);
        printf("Enter the name:");
        scanf("%s", newnode->name);

        if(ptr==NULL)
        {
                ptr = newnode;
        }
        else if((ptr->link)==NULL)
        {
                ptr->link = newnode;
        }
        else
        {
                NODE *temp = ptr;
                while((temp->link)!=NULL)
                {
                        temp = temp->link;
                }
                temp->link = newnode;
        }
        return ptr;
}
