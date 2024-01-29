#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE temp=*Head;     // temporary->as we do not want to change head

    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        while(temp->next != NULL) //trvel LL till last node
        {
            temp=temp->next;
        }
        temp->next=newn;  //add address of new node at end of last node
    }
}

void Display(PNODE Head)
{
    printf("Elements of linked list are:\n");
    while (Head != NULL)
    {
        printf("%d->",Head->data);
        Head=Head->next;
    } 
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCnt=0;
    while(Head != NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp=*Head;

    if(*Head== NULL)  //empty
    {
        return;
    }
    else if((*Head)->next ==NULL)    //only one
    {
        free(*Head);
        *Head=NULL;
    }
    else        //more than one
    {
        *Head=(*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
    
    if(*Head== NULL)  //empty
    {
        return;
    }
    else if((*Head)->next ==NULL)    //only one
    {
        free(*Head);
        *Head=NULL;
    }
    else        //more than one
    {
        while(temp->next->next != NULL) //trvel LL till last node
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void InsertAtPos(PPNODE Head,int No, int iPos)
{
    int Size=0;
    Size=Count(*Head);
    PNODE newn=NULL;
    int i=0;
    PNODE temp=*Head;

    if((iPos<1) || (iPos>Size+1))           //invalid
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos==1)                      //first position
    {
        InsertFirst(Head,No);
    }
    else if(iPos==Size+1)                      //last position
    {
        InsertLast(Head,No);
    }
    else                                       //valid position
    {
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;

        for(i=1;i<(iPos-1);i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}

void DeleteAtPos(PPNODE Head,int iPos)
{
    int Size=0;
    Size=Count(*Head);
    PNODE temp=*Head;
    PNODE targatednode=NULL;
    int i=0;

    if((iPos<1) || (iPos>Size))                      //invalid position
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos==1)                              //first position
    {
        DeleteFirst(Head);
    }
    else if(iPos==Size)                        //last position
    {
        DeleteLast(Head);
    }
    else                                      //valid position
    {
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        targatednode=temp->next;
        temp->next=targatednode->next;
        free(targatednode);
    }
}

void DisplayLarge(PNODE Head)
{  
    PNODE temp=Head;
    
    while (temp != NULL)
    {   
        int iNum=temp->data;
        int iDigit=0;
        int iMax=0;
        while(iNum != 0)
        {
            iDigit=iNum%10;
            if(iMax<iDigit)
            {
                iMax=iDigit;
            }
            iNum=iNum/10;
        }
            printf("Largest digit of number:%d\n",iMax);
        
        temp=temp->next;
    } 
}

int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,121);
    InsertFirst(&First,28);
    InsertFirst(&First,62);
    InsertFirst(&First,21);
    InsertFirst(&First,15);

    Display(First);
    iRet=Count(First);
    printf("Nodes of linked list are:\n%d\n",iRet);
    DisplayLarge(First);
    
    InsertLast(&First,496);
    InsertLast(&First,201);

    Display(First);
    iRet=Count(First);
    printf("Nodes of linked list are:\n%d\n",iRet);
    DisplayLarge(First);

    InsertAtPos(&First,105,5);

    Display(First);
    iRet=Count(First);
    printf("Nodes of linked list are:\n%d\n",iRet);
    DisplayLarge(First);

    DeleteAtPos(&First,5);
    
    Display(First);
    iRet=Count(First);
    printf("Nodes of linked list are:\n%d\n",iRet);
    DisplayLarge(First);

    DeleteFirst(&First);

    Display(First);
    iRet=Count(First);
    printf("Nodes of linked list are:\n%d\n",iRet);
    DisplayLarge(First);

    DeleteLast(&First);
    
    Display(First);
    iRet=Count(First);
    printf("Nodes of linked list are:\n%d\n",iRet);
    DisplayLarge(First);

    return 0;
}