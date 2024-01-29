#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    for(int i=0;i<iSize/2;i++)
    {
        T temp = arr[i];
        arr[i] = arr[iSize-i-1];
        arr[iSize-i-1]=temp;
    }
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t"; 
    }

    Reverse(arr,9);
    cout << "\nReversed Array: ";
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t"; 
    }
    
    return 0;
}