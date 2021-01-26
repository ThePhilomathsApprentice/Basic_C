/* This program is a menu driven program for Linked Lists */
#include "header.h"
int main(int argc, char *argv[])
{
    int Choice      = INT_ZERO;             /* Holds Choice given by operator */
    int Data        = INT_ZERO;             /* Holds the data                 */
    int index       = INT_ZERO;             /* Holds the index                */
    int afterData   = INT_ZERO;             /* Holds the After Data           */
    int beforeData  = INT_ZERO;             /* Holds the before Data          */
    while (TRUE)
    {
        printf("-------------------Single Linked List--------------------\n");
        printf("0: Add Empty\n");
        printf("1: Add at Beginning\n");
        printf("2: Add at End\n");
        printf("3: Add Before a node\n");
        printf("4: Add After a node\n");
        printf("5: Add at index\n");
        printf("6: Delete a node at Beginning\n");
        printf("7: Delete a node at End\n");
        printf("8: Delete a node at data\n");
        printf("9: Delete a node at index\n");
        printf("10: Exit List\n");
        printf("11: Print the List\n");
        printf("Enter the Choice\n");
        scanf("%d",&Choice);
     
        switch (Choice)
        {
            case 0: /* Add Empty */
                    printf("Provide the Data\n");
                    scanf("%d",&Data);
                    addEmptyNode(Data);
                    break;
            case 1: /* Add Begin */
                    printf("Provide the Data\n");
                    scanf("%d",&Data);
                    addBeginNode(Data);
                    break;
            case 2: /* Add End */
                    printf("Provide the Data\n");
                    scanf("%d",&Data);
                    addEndNode(Data);
                    break;
            case 3:
                    printf("Provide the list Data\n");
                    scanf("%d",&Data);
                    printf("Provide the Data Before\n");
                    scanf("%d",&beforeData);
                    addBeforeNode(beforeData,Data);
                    break; 
            case 4:
                    printf("Provide the list Data\n");
                    scanf("%d",&Data);
                    printf("Provide the Data After\n");
                    scanf("%d",&afterData);
                    addAfterNode(afterData,Data);
                    break;
            case 5:
                    printf("Provide the Data\n");
                    scanf("%d",&Data);
                    printf("Provide the index\n");
                    scanf("%d",&index);
                    break;
            case 6: 
                    deleteBeginNode();
                    break;
            case 7:
                    deleteEndNode();
                    break;
            case 8:
                    printf("Provide the list data\n");
                    scanf("%d",&Data);
                    break;
            case 9:
                    printf("Provide the list Data\n");
                    scanf("%d",&Data);
                    printf("Provide the index\n");
                    scanf("%d",&index);
                    break;
            case 10:
                    exit(EXIT_SUCCESS);
                    break;
            case 11:
                    printf("------------------------------------------------\n");
                    displayList();
                    break;
            default:
                    printf("Invalid Choice\n");
        }
    }
    return INT_ZERO;
}

