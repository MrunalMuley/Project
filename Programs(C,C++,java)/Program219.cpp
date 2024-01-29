#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize,T iNo)
{
    int icnt = 0;
    for(int i = 0; i<iSize; i++)
    {
        if(arr[i] == iNo)
        {
            icnt=i;
        }
    } 
    return icnt; 
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=0;

    iRet = SearchLast(arr,9,40);

    cout<<iRet;

    return 0;
}