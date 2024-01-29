#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize,T iNo)
{
    int icnt = 0;
    for(int i = 0; i<iSize; i++)
    {
        if(arr[i] == iNo)
        {
            return i;
        }
    }  
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=0;

    iRet = SearchFirst(arr,9,40);

    cout<<iRet;

    return 0;
}