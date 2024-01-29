#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    T max=arr[0];
    int i = 0;

    for(i = 0;i<iSize;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {1.1,3.7,9.8,8.7};

    int iSum = Max(arr,5);
    cout<<iSum<<endl;

    float fSum = Max(brr,4);
    cout<<fSum<<endl;

    return 0;
}