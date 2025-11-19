//This file is used for adding in the ascending order
#include "header.h"

NODE *addAsc(NODE *ptr)
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
                if((ptr->roll)<(newnode->roll))
                        ptr->link = newnode;
                else
                {
                        newnode->link = ptr;
                        ptr = newnode;
                }
        }
        else if((ptr->roll)>(newnode->roll))
        {
                newnode->link = ptr;
                ptr = newnode;
        }
        else
        {
                NODE *temp = ptr;
                NODE *prev = NULL;

                while((temp->roll)<(newnode->roll))
                {
                        prev = temp;
                        temp = temp->link;
                }
                prev->link = newnode;
                newnode->link = temp;
        }
        return ptr;
}
