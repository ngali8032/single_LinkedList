//This is the main file conntecting all nodes
#include "header.h"
int size = sizeof(NODE)-sizeof(NODE*);
void printMenu()
{
        printf(RED"1.addbeg\n");
        printf("2.print\n");
        printf("3.quit\n");
        printf("4.addlast\n");
        printf("5.addAsc\n");
        printf("6.addDes\n");
        printf("7.delete all nodes\n");
        printf("8.save\n");
        printf("9.delete a node based on roll\n");
        printf("10.reverse\n");
        printf("11. find Middle Node\n"RESET);
        printf("Enter choice:");

}

int main()
{
        int choice;
        NODE *head = NULL;
        head = sync(head);
        while(1)
        {
                printMenu();
                scanf("%d", &choice);
                __fpurge(stdin);
                switch(choice)
                {
                        case 1: head = addbeg(head); break;
                        case 2: print(head); break;
                        case 3: exit(0);
                        case 4: head = addlast(head); break;
                        case 5: head = addAsc(head); break;
                        case 6: head = addDes(head); break;
                        case 7: head = deleteAll(head); break;
                        case 8: save(head); break;
                        case 9: head = deleteANode(head); break;
                        case 10: head = reverse(head); break;
                        case 11: findMiddle(head); break;
                        default: printf("Invalid choice\n"); break;
                }
        }
}
