//delete a particular node based on roll
#include "header.h"

NODE *rollBased(NODE *ptr)
{
        int roll, flag=0;
        printf("Enter the roll:- ");
        scanf("%d", &roll);

        if(ptr->link==NULL)
        {
                if(ptr->roll==roll)
                {
                        flag=1;
                        free(ptr);
                        ptr=NULL;
                }
        }
        else if(ptr->link->link==NULL)
        {
                NODE *temp=ptr;
                if(temp->roll==roll)
                {
                        flag=1;
                        ptr=ptr->link;
                        free(temp);
                }
                else if(temp->link->roll==roll)
                {
                        flag=1;
                        temp = temp->link;
                        free(temp);
                }
        }
        else if(ptr->roll==roll)
        {
                flag=1;
                NODE *temp = ptr;
                ptr=ptr->link;
                free(temp);
        }
        else{
                NODE *nptr=ptr, *cptr=NULL, *pptr=NULL;
                while(nptr!=NULL)
                {
                        pptr=cptr;
                        cptr=nptr;
                        nptr=nptr->link;
                        if(cptr->roll==roll)
                        {
                                flag=1;
                                free(cptr);
                                pptr->link=nptr;
                                break;
                        }
                }
        }
        if(flag==1)
        {
                printf("Node found and successfully deleted\n");
        }
        else{
                printf("Not found with %d\n", roll);
        }
        return ptr;
}

NODE *deleteANode(NODE *ptr)
{
        if(ptr==NULL)
        {
                printf("No nodes availabale to delete\n");
                return NULL;
        }
        ptr=rollBased(ptr);
        return ptr;
}
