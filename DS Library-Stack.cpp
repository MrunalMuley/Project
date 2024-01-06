//Stack_Generic

#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;    //DATA CAN BE OF ANY TYPE
    struct node *next;
};

template<class T>
class Stack
{
    private:
        struct node<T> * first;
        int Count;

    public:
        Stack();
        void Push(T no);     
        void Display();
        int CountNode();
        void Pop();
};

template<class T>
Stack<T>::Stack()
{
    cout<<"Inside constructor\n";
    first = NULL;
    Count = 0;
}

template<class T>
void Stack<T>::Push(T no)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;   
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)   // if(Count == 0)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    Count++;
}

template<class T>
void Stack<T>::Display()
{
    struct node<T> * temp = first;

    cout<<"Elements of the linked list are : \n";
    
    while(temp != NULL) // Type 1
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp ->next;
    }
    cout<<"NULL \n";
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}

template<class T>
void Stack<T>::Pop()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T> * temp = first;

        first = first->next;
        delete temp;
    }
    Count--;
}

int main()
{
    Stack<int>iobj;
    Stack<float>fobj;
    Stack<double>dobj;
    Stack<char>cobj;
    
    iobj.Push(101);
    iobj.Push(51);
    iobj.Push(21);
    iobj.Push(11);
    
    cout<<"Stack of integers:"<<"\n";
    iobj.Display();
    
    iobj.Pop();

    cout<<"Stack of integers:"<<"\n";
    iobj.Display();

    fobj.Push(101.33);
    fobj.Push(51.33);
    fobj.Push(21.33);
    fobj.Push(11.33);

    cout<<"Stack of floats:"<<"\n";
    fobj.Display();

    dobj.Push(101.9899);
    dobj.Push(51.9899);
    dobj.Push(21.9899);
    dobj.Push(11.9899);

    cout<<"Stack of doubles:"<<"\n";
    dobj.Display();

    cobj.Push('D');
    cobj.Push('C');
    cobj.Push('B');
    cobj.Push('A');

    cout<<"Stack of characters:"<<"\n";
    cobj.Display();

    return 0;
}