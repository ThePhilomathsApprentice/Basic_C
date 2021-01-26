/* This  file holds all the function Definition of the Single Linked List */
#include"header.h"
node *start = NULL;         /* Start Node */
/********************************************************************
 * Function Name : displayList()
 * Arguments	 : void
 * Return value	 : void
 * Description	 : Displays the Complete list 
 *
 *******************************************************************/
void displayList()
{
    node *Nptr = start;                   /* Holds the Node       */
    int index_i= INT_ZERO;                   /* Holds the index/count*/
    printf("List ->\n");
    if(start == NULL)
    {
        printf("List is empty\n");    
        return;
    }
    while (Nptr != NULL)
    {
        
        printf("@[%d]:%d\t",index_i,Nptr->data);
        Nptr = Nptr->next;
        index_i++;
        if ( (index_i % DIV_FACTOR) == INT_ZERO )
        {
            printf("\n");
        }
        else
        {   
            /* Nothing to Do */
        }
    }
    printf("\n-------------------------------------------------\n\n");
}

/********************************************************************
 * Function Name : addEmptyNode(int InData)
 * Arguments	 : int InData 
 * Return value	 : void
 * Description	 : Adds a empty node in a list
 *
 *******************************************************************/
void addEmptyNode(int InData)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = InData;
    temp->next = start;
    start      = temp;
}

/********************************************************************
 * Function Name : deleteBeginNode()
 * Arguments	 : void
 * Return value	 : void
 * Description	 : Deletes the Beginning node
 *
 *******************************************************************/
void addBeginNode(int InData)
{
    addEmptyNode(InData);
}

/********************************************************************
 * Function Name : addEndNode(int InData)
 * Arguments	 : int InData 
 * Return value	 : void
 * Description	 : Adds a node at the end of a list
 *
 *******************************************************************/
void addEndNode(int InData)
{
    if (start == NULL)
    {
        addBeginNode(InData);
    }
    else
    {
        node *temp = (node *) malloc(sizeof(node));
        node *Nptr = start;
        while (Nptr->next != NULL)
        {
            Nptr = Nptr->next;
        }
        temp->data = InData;
        temp->next = NULL;
        Nptr->next = temp;
    }
}

/********************************************************************
 * Function Name : addAfterNode(int AfterData,int InData)
 * Arguments	 : int AfterData, int InData 
 * Return value	 : void
 * Description	 : Adds a node at after a given node
 *
 *******************************************************************/
void addAfterNode(int AfterData,int InData)
{
    int Flag    = INT_ZERO;              /* Holds the Added Node flag status */
    if (start == NULL)
    {
        printf("List is empty\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        if (start->data == AfterData)
        {
            addEndNode(InData);
        }
        else
        {
            node *temp = (node *)malloc(sizeof(node));
            temp->data = InData;
            node *Nptr = start;
            while (Nptr != NULL)
            {
                if (Nptr->data == AfterData)
                {
                    temp->next = Nptr->next;
                    Nptr->next = temp;
                    Flag = TRUE;
                    break;
                }
                else
                {
                    Nptr = Nptr->next;
                }
            }
            if (!TRUE)
            {
                printf("Data :%d not found in list\n",AfterData);
            }
            else
            {
                /* Nothing to DO */
            }
        }
    }
}
/********************************************************************
 * Function Name : addBeforeNode(int beforeData,int InData)
 * Arguments	 : int beforeData, int InData 
 * Return value	 : void
 * Description	 : Adds a node at before a given node
 *
 *******************************************************************/
void addBeforeNode(int beforeData,int InData)
{
    int Flag    = INT_ZERO;              /* Holds the Added Node flag status */
    if (start == NULL)
    {
        printf("List is empty\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        if (start->data == beforeData)
        {
            addBeginNode(InData);
        }
        else
        {
            node *temp = (node *)malloc(sizeof(node));
            temp->data = InData;
            node *Nptr = start;
            while(Nptr != NULL)
            {
                if (Nptr->next->data == beforeData)
                {
                    temp->next = Nptr->next;
                    Nptr->next = temp;
                    Flag = TRUE;
                    break;
                }
                else
                {
                    Nptr = Nptr->next;
                }
            }
            if (!Flag == TRUE)
            {
                printf("Given Data :%d in list not found\n",beforeData);
            }
        }
    }
}
/********************************************************************
 * Function Name : deleteBeginNode()
 * Arguments	 : void
 * Return value	 : void
 * Description	 : Deletes the Beginning node
 *
 *******************************************************************/
void deleteBeginNode()
{
    if (start == NULL)
    {
        printf("List is empty\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        node *Nptr = start;
        if (start->next == NULL)
        {
            start = NULL;
            free(Nptr);
        }
        else
        {
            start = start->next;
            free(Nptr);
        }
    }
}
/********************************************************************
 * Function Name : deleteEndNode()
 * Arguments	 : void
 * Return value	 : void
 * Description	 : Deletes the End node
 *
 *******************************************************************/
void deleteEndNode()
{
    if (start == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        node *Nptr = start;
        if (start->next == NULL)
        {
            deleteBeginNode();
        }
        else
        {
            while (Nptr->next->next != NULL)
            {
                Nptr = Nptr->next;
            }
            node *xptr = Nptr->next;
            Nptr->next = NULL;
            free(xptr);
        }
    }       
}
