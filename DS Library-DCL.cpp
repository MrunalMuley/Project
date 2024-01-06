//Doubly Circular_Generic

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
class DoublyCL
{
    private:
        struct node<T>* First;
        struct node<T>* Last;
        int Count;

    public:
        DoublyCL();
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
DoublyCL<T>::DoublyCL()
{
    First=NULL;
    Last=NULL;
    Count=0;
}

template<class T>
void DoublyCL<T>::InsertFirst(T no)
{
    struct node<T>* newn=new struct node<T>;
    newn->next=NULL;
    newn->prev=NULL;
    newn->data=no;

    if(First==NULL && Last==NULL)
    {
        First=newn;
        Last=newn;
    }
    else
    {
        newn->prev=Last;
        newn->next=First;
        First=newn;
    }
    First->prev=Last;
    Last->next=First;
    Count++;
}

template<class T>
void DoublyCL<T>::InsertLast(T no)
{
    struct node<T>* newn=new struct node<T>;
    newn->next=NULL;
    newn->prev=NULL;
    newn->data=no;

    if(First==NULL && Last==NULL)
    {
        First=newn;
        Last=newn;
    }
    else
    {
       newn->prev=Last;
       Last->next=newn;
       Last=newn;
    }
    First->prev=Last;
    Last->next=First;
    Count++;
}

template<class T>
void DoublyCL<T>::Display()
{
    struct node<T>* temp=First;
    
    cout<<"Elements of linked list are:\n";
    do
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp=temp->next;
    }
    while(temp != Last->next);
    cout<<endl;
}

template<class T>
int DoublyCL<T>::CountNode()
{
    return Count;
}

template<class T>
void DoublyCL<T>::DeleteFirst()
{
    if(First==NULL && Last==NULL)
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;
        Last->next=First;
        First->prev=Last;
    }
    Count--;
}

template<class T>
void DoublyCL<T>::DeleteLast()
{
    if(First==NULL && Last==NULL)
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        Last=Last->prev;
        delete First->prev;
        Last->next=First;
        First->prev=Last;
    }
    Count--;
}

template<class T>
void DoublyCL<T>::InsertAtPos(T no,int iPos)
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
void DoublyCL<T>::DeleteAtPos(int iPos)
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
    DoublyCL<int>iobj;
    DoublyCL<float>fobj;
    DoublyCL<double>dobj;
    DoublyCL<char>cobj;

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