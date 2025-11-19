//This file used for adding files in descending order
#include "header.h"

NODE* addDes(NODE* ptr)
{
        NODE *newnode = NULL;
        newnode = calloc(1, sizeof(NODE));
        printf("Enter roll:");
        scanf("%d", &newnode->roll);
        printf("Enter name:");
        scanf("%s", newnode->name);

        if(ptr==NULL)
        {
                ptr = newnode;
        }
        else if((ptr->roll)<(newnode->roll))
        {
                newnode->link = ptr;
                ptr=newnode;
        }
        else if((ptr->link)==NULL)
        {
                ptr->link = newnode;
        }
        else
        {
                NODE *temp = ptr;
                while((temp->roll)>(newnode->roll))
                {
                        if((temp->link)==NULL)
                        {
                                temp->link = newnode;
                                return ptr;
                        }
                        temp = temp->link;
                }

                temp = NULL;
                NODE *prev = NULL;
                temp = ptr;
                while((temp->roll)>(newnode->roll))
                {
                        prev = temp;
                        temp = temp->link;
                }
                prev->link = newnode;
                newnode->link = temp;
        }
        return ptr;
}
