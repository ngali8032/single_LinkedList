//find middle node
#include "header.h"

void findMiddle(NODE *ptr)
{
        if(ptr==NULL)
        {
                printf("No nodes available to find\n");
        }
        else if(ptr->link==NULL)
        {
                printf("The roll is %d and name is %s\n", ptr->roll, ptr->name);
        }
        else
        {
                NODE *slow=ptr, *fast=ptr;

                while((fast->link!=NULL) && (fast->link->link!=NULL))
                {
                        slow = slow->link;
                        fast = fast->link->link;
                }

                if(fast->link==NULL)
                {
                        printf("The roll is %d and name is %s\n", slow->roll, slow->name);
                }
                else
                {
                        printf("There are two nodes\n");
                        printf("The roll is %d and name is %s\n", slow->roll, slow->name);
                        slow=slow->link;
                        printf("The roll is %d and name is %s\n", slow->roll, slow->name);
                }
        }
}
