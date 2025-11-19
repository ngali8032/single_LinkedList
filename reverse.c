//reverse the nodes
#include "header.h"

void *reverse(NODE *ptr)
{
        if(ptr==NULL)
        {
                printf("No nodes to available to reverse\n");
                return NULL;
        }
        else if(ptr->link==NULL)
        {
                printf("Only single node available\n");
                return ptr;
        }

        NODE *nptr = ptr, *cptr = NULL, *pptr = NULL;

        while(nptr!=NULL)
        {
                pptr=cptr;
                cptr=nptr;
                nptr=nptr->link;
                cptr->link=pptr;
        }
        printf("Sucessfully reversed the nodes\n");
        ptr=cptr;
        return ptr;
}
