//BST

#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *lchild;
    struct node *rchild;
};

template<class T>
class BST
{
    private:
        struct node<T>* First;

    public:
        BST();
        void Insert(T no);
        void Inorder(struct node<T>* Root ); //root->first ever node which is root   (first=root)
        void Inorder();
        void Preorder(struct node<T>* Root );
        void Preorder();
        void Postorder(struct node<T>* Root );
        void Postorder();
        int Count(struct node<T>* Root);
        int Count();
        int CountLeaf(struct node<T>* Root);
        int CountLeaf();
        int CountParent(struct node<T>* Root);
        int CountParent();
        int CountEven(struct node<T>* Root);
        int CountEven();
        int CountOdd(struct node<T>* Root);
        int CountOdd();
        int Sum(struct node<T>* Root);
        int Sum();
        bool Search(T no);
};

template <class T>
BST<T>::BST()
{
    First=NULL;
}

template <class T>
void BST<T>::Insert(T no)
{
    struct node<T>* newn=new struct node<T>;
    struct node<T>* temp=First;

    newn->data=no;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {
        while(1)  //unconditional loop
        {
            if(no==temp->data)
            {
                cout<<"Unable to insert as data is already is present\n";
                delete newn;
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild==NULL)
                {
                    temp->rchild=newn;
                    break;
                }
                temp=temp->rchild;
            }
            else if(no < temp->data)
            {
                if(temp->lchild==NULL)
                {
                    temp->lchild=newn;
                    break;
                }
                temp=temp->lchild;
            }
        }
    }
}

template <class T>
void BST<T>::Inorder(struct node<T>* Root) //recusrssion
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        cout<<" "<<Root->data;
        Inorder(Root->rchild);
    }
}

template <class T>
void BST<T>::Inorder() //wrapper function ->initiate inorder traversal
{
    Inorder(First);    //root that is first node of bst
}

template <class T>
void BST<T>::Preorder(struct node<T>* Root) //recusrssion
{
    if(Root != NULL)
    {
        cout<<" "<<Root->data ;
        Preorder(Root->lchild);
        Preorder(Root->rchild);
    }
}

template <class T>
void BST<T>::Preorder() 
{
    Preorder(First);    
}

template <class T>
void BST<T>::Postorder(struct node<T>* Root) 
{
    if(Root != NULL)
    {
        Postorder(Root->lchild);
        Postorder(Root->rchild);
        cout<<" "<<Root->data;
    }
}

template <class T>
void BST<T>::Postorder() 
{
    Postorder(First);    
}

template <class T>
int BST<T>::Count(struct node<T>* Root)
{
    static int iCnt=0;

    if(Root!=NULL)
    {
        iCnt++;
        Count(Root->lchild);
        Count(Root->rchild);
    }
    return iCnt;
}

template <class T>
int BST<T>::Count()
{
    Count(First);
}

template <class T>
int BST<T>::CountLeaf(struct node<T>* Root)
{
    static int iCnt=0;

    if(Root!= NULL)
    {
    if((Root->lchild==NULL) && (Root->rchild==NULL))
    {
        iCnt++;
    }
    CountLeaf(Root->lchild);
    CountLeaf(Root->rchild);
    }
    return iCnt;
}

template <class T>
int BST<T>::CountLeaf()
{
    CountLeaf(First);
}

template <class T>
int BST<T>::CountParent(struct node<T>* Root)
{
    static int iCnt=0;

    if(Root!= NULL)
    {
    if((Root->lchild!=NULL) || (Root->rchild!=NULL))
    {
        iCnt++;
    }
    CountParent(Root->lchild);
    CountParent(Root->rchild);
    }
    return iCnt;
}

template <class T>
int BST<T>::CountParent()
{
    CountParent(First);
}

template <class T>
int BST<T>::CountEven(struct node<T>* Root)
{
    static int iCnt=0;

    if(Root!= NULL)
    {
    if((Root->data)%2 == 0)
    {
        iCnt++;
    }
    CountEven(Root->lchild);
    CountEven(Root->rchild);
    }
    return iCnt;
}

template <class T>
int BST<T>::CountEven()
{
    CountEven(First);
}

template <class T>
int BST<T>::CountOdd(struct node<T>* Root)
{
    static int iCnt=0;

    if(Root!= NULL)
    {
    if((Root->data)%2 != 0)
    {
        iCnt++;
    }
    CountOdd(Root->lchild);
    CountOdd(Root->rchild);
    }
    return iCnt;
}

template <class T>
int BST<T>::CountOdd()
{
    CountOdd(First);
}

template <class T>
int BST<T>::Sum(struct node<T>* Root)
{
    static int iSum=0;

    if(Root!= NULL)
    {
        iSum=iSum+(Root->data);
        Sum(Root->lchild);
        Sum(Root->rchild);
    }
    return iSum;
}

template <class T>
int BST<T>::Sum()
{
    Sum(First);
}

template <class T>
bool BST<T>::Search(T no)
{
    bool Flag=false;

    if(First==NULL)
    {
        cout<<"Tree is empty\n";
        return false;
    }
    
    while(First!=NULL)
    {
        if(no==First->data)
        {
            Flag=true;
            break;
        }
        else if(no > First->data)
        {
            First=First->rchild;
        }
        else if(no < First->data)
        {
            First=First->lchild;
        }
    }
    return Flag;
}

int main()
{
    BST<int>bobj;
    BST<float>fobj;
    BST<double>dobj;
    BST<char>cobj;

    int iRet=0;
    bool bRet=false;
    int iValue=0;

    bobj.Insert(21);
    bobj.Insert(11);
    bobj.Insert(17);
    bobj.Insert(45);
    bobj.Insert(10);
    bobj.Insert(78);
    bobj.Insert(30);
    bobj.Insert(5);

    cout<<"Inorder traversal is:\n";
    bobj.Inorder();
    cout<<"\n";

    cout<<"Preorder traversal is:\n";
    bobj.Preorder();
    cout<<"\n";

    cout<<"Postorder traversal is:\n";
    bobj.Postorder();
    cout<<"\n";

    iRet=bobj.Sum();
    cout<<"Sum of nodes are:\n"<<iRet<<"\n";

    cout<<"Enter the data that you want to search:\n";
    cin>>iValue;

    bRet=bobj.Search(iValue);
    if(bRet==true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    return 0;
}