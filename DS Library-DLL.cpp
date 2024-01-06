//Doubly Linear_Generic

#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template<class T>
class DoublyLL
{
    private:
        struct node<T>* First;
        int Count;

    public:
        DoublyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no,int ipos);
        void DeleteAtPos(int ipos);
};

template<class T>
DoublyLL<T>::DoublyLL()
{
    First=NULL;
    Count=0;
}

template<class T>
void DoublyLL<T>::InsertFirst(T no)
{
    struct node<T>* newn=new struct node<T>;
    newn->next=NULL;
    newn->prev=NULL;
    newn->data=no;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        newn->next=First;
        First->prev=newn;
        First=newn;
    }
    Count++;
}

template<class T>
void DoublyLL<T>::InsertLast(T no)
{
    struct node<T>* newn=new struct node<T>;
    newn->next=NULL;
    newn->prev=NULL;
    newn->data=no;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        struct node<T>* temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        newn->prev=temp;
        temp->next=newn;
    }
    Count++;
}

template<class T>
void DoublyLL<T>::Display()
{
    struct node <T>* temp=First;

    cout<<"Elements of linked list are:\n";
    cout<<"NULL<=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"| <=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

template<class T>
int DoublyLL<T>::CountNode()
{
    return Count;
}

template<class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First==NULL)
    {
        return;
    }
    else if(First->next==NULL && First->prev==NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        First=First->next;
        delete First->prev;
        First->prev=NULL;
    }
    Count--;
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
    if(First==NULL)
    {
        return;
    }
    else if(First->next==NULL && First->prev==NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        struct node<T>* temp=First;
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        delete temp->next;
        temp->next = NULL; 
    }
    Count--;
}

template<class T>
void DoublyLL<T>::InsertAtPos(T no,int iPos)
{
    if(iPos<1 || iPos>Count+1)
    {
        return;
        cout<<"Invalid Position";
    }
    if(iPos==1)
    {
        InsertFirst(no);
    }
    else if(iPos==Count+1)
    {
        InsertLast(no);
    }
    else
    {
        int i=0;
        struct node<T>* temp=First;
        struct node<T>* newn=new struct node<T>;
        newn->next=NULL;
        newn->prev=NULL;
        newn->data=no;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->prev=temp;
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        Count++;
    }
}

template<class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    if(iPos<1 || iPos>Count)
    {
        return;
        cout<<"Invalid Position";
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==Count)
    {
        DeleteLast();
    }
    else
    {
        int i=0;
        struct node<T>* temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        Count--;
    }
}

int main()
{
    DoublyLL<int>iobj;
    DoublyLL<float>fobj;
    DoublyLL<double>dobj;
    DoublyLL<char>cobj;

    iobj.InsertLast(11);
    iobj.InsertLast(21);
    iobj.InsertLast(51);
    iobj.InsertLast(101);

    cout<<"LinkedList of integers:"<<"\n";
    iobj.Display();

    fobj.InsertLast(11.99);
    fobj.InsertLast(21.99);
    fobj.InsertLast(51.99);
    fobj.InsertLast(101.99);

    cout<<"LinkedList of floats:"<<"\n";
    fobj.Display();

    dobj.InsertLast(11.9959);
    dobj.InsertLast(21.9959);
    dobj.InsertLast(51.9959);
    dobj.InsertLast(101.9959);

    cout<<"LinkedList of doubles:"<<"\n";
    dobj.Display();

    cobj.InsertLast('A');
    cobj.InsertLast('B');
    cobj.InsertLast('C');
    cobj.InsertLast('D');

    cout<<"LinkedList of characters:"<<"\n";
    cobj.Display();

    return 0;
}