//Queue_Generic

#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;    //DATA CAN BE OF ANY TYPE
    struct node *next;
};

template<class T>
class Queue
{
    private:
        struct node<T> * first;
        int Count;

    public:
        Queue();
        void Enqueue(T no);     //DATA SHOULD BE GENERIC    
        void Display();
        int CountNode();
        void Dequeue();
};

template<class T>
Queue<T>::Queue()
{
    cout<<"Inside constructor\n";
    first = NULL;
    Count = 0;
}

template<class T>
void Queue<T>::Enqueue(T no)
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
void Queue<T>::Display()
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
int Queue<T>::CountNode()
{
    return Count;
}

template<class T>
void Queue<T>::Dequeue()
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

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    Count--;
}

int main()
{
    Queue<int>iobj;
    Queue<float>fobj;
    Queue<double>dobj;
    Queue<char>cobj;

    iobj.Enqueue(101);
    iobj.Enqueue(51);
    iobj.Enqueue(21);
    iobj.Enqueue(11);

    cout<<"Stack of integers:"<<"\n";
    iobj.Display();

    iobj.Dequeue();

    cout<<"Stack of integers:"<<"\n";
    iobj.Display();

    fobj.Enqueue(101.33);
    fobj.Enqueue(51.33);
    fobj.Enqueue(21.33);
    fobj.Enqueue(11.33);

    cout<<"Stack of floats:"<<"\n";
    fobj.Display();

    dobj.Enqueue(101.9899);
    dobj.Enqueue(51.9899);
    dobj.Enqueue(21.9899);
    dobj.Enqueue(11.9899);

    cout<<"Stack of doubles:"<<"\n";
    dobj.Display();

    cobj.Enqueue('D');
    cobj.Enqueue('C');
    cobj.Enqueue('B');
    cobj.Enqueue('A');

    cout<<"Stack of characters:"<<"\n";
    cobj.Display();

    return 0;
}