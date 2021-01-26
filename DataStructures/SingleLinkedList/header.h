/* Header file for the single linked list */
#include<stdio.h>
#include<stdlib.h>
#define MAX_CMDS_SIZE               50
#define INT_ZERO                    0       /* Initializes to ZERO */
#define INT_1                       1       /* Initializes to ONE  */
#define TRUE                        1
#define DIV_FACTOR                  5
void addEmptyNode(int);
void addBeginNode(int);
void addEndNode(int);
void addAfterNode(int,int);
void addBeforeNode(int,int);
void deleteBeginNode();
void deleteEndNode();
void displayList(void);
typedef struct Node{
    int data;
    struct Node *next;
}node;

