//header files, macrocs, function declarations

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"
typedef struct node
{
        int roll;
        char name[20];
        struct node *link;
}NODE;

NODE *addbeg(NODE *);
void print(NODE *);
NODE *addlast(NODE *);
NODE *addAsc(NODE *);
NODE *addDes(NODE *);
void *deleteAll(NODE *);
void save(NODE *);
NODE *sync(NODE *);
void *reverse(NODE *);
NODE* deleteANode(NODE *);
void findMiddle(NODE *);
