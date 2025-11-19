//delete All nodes at once
#include "header.h"

void *deleteAll(NODE *ptr)
{
        if(ptr==NULL)
        {
                printf("No nodes available\n");
                return NULL;
        }

        if((ptr->link)==NULL)
        {
                free(ptr);
                ptr=NULL;
        }
        else
        {
                NODE *temp = NULL;
                while(ptr)
                {
                        temp = ptr;
                        ptr = ptr->link;
                        free(temp);
                }
        }
        printf("Successfully deleted the all nodes\n");
        return NULL;
}
