#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

bool LoocpCheck(PNODE Head)
{
    PNODE Student = Head;
    PNODE Teacher = Head;
    bool bFlag = false;

    while((Teacher != NULL) && (Teacher ->next != NULL))
    {
        Student = Student -> next;
        Teacher = Teacher -> next -> next;

        if(Student == Teacher)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    bRet = LoocpCheck(First);

    if(bRet == true)
    {
        printf("Loop detected in the linkedlist..\n");
    }
    else
    {
        printf("There is no Loop in the linkedlist..\n");
    }
    
    return 0;
}