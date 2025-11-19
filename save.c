//save the files
#include "header.h"
extern int size;
void save(NODE *ptr)
{
        NODE* temp = ptr;
        FILE *file = NULL;
        file = fopen("single.txt", "w");
        if(file==NULL)
        {
                printf("failed to open the file for save\n");
                return;
        }
        while(temp!=NULL)
        {
                fwrite(temp, size, 1, file);
                temp = temp->link;
        }
        printf("Sucessfully saved the file\n");
        fclose(file);
}
