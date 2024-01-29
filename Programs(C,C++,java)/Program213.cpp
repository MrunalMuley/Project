#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    T Sum=T();//intializing value of sum
    int i = 0;

    for(i = 0;i<iSize;i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr,5);
    cout<<iSum<<endl;

    float fSum = AddN(brr,4);
    cout<<fSum<<endl;

    return 0;
}