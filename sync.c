//sync the nodes
#include "header.h"
extern int size;
NODE *sync(NODE *ptr)
{
        FILE *file = NULL;

        file = fopen("single.txt", "r");

        if(file==NULL)
        {
                printf("Failed to open the file\n");
                return ptr;
        }

        printf("File is found and opened for reading\n");

        NODE *newnode = NULL, *temp=NULL;
        NODE var;
        while((fread(&var, size, 1, file))==1){
                newnode = calloc(sizeof(NODE), 1);

                newnode->roll = var.roll;
                strcpy(newnode->name, var.name);


                if(ptr==NULL) ptr=newnode;
                else
                {
                        temp = ptr;
                        while((temp->link)!=NULL)
                        {
                                temp = temp->link;
                        }
                        temp->link = newnode;
                }
        }
        printf("Data sync successfully\n");
        fclose(file);
        return ptr;
}
