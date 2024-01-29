#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2,T no3)
{
    if(no1>no2 && no1>no3)
    {
        return no1;
    }
    else if(no3>no2 && no3>no1)
    {
        return no3;
    }
    else if(no2>no3 && no2>no1)
    {
        return no3;
    }
}

int main()
{
    int iRet = Max(10, 20, 30);
    cout << iRet<<endl;

    float fRet = Max(10.11f, 20.15f, 50.65f);
    cout << fRet<<endl;

    return 0;
}