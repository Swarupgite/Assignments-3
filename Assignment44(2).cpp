#include<iostream>
using namespace std;

template <class T>

T Max(T iNo1 , T iNo2, T iNo3)
{
    T values[] = {iNo1, iNo2, iNo3};
    T iMax = values[0];

    for (int i = 1; i < 3; i++)
    {
        if (values[i] > iMax)
        {
            iMax = values[i];
        }
    }

    return iMax;
}
int main()
{
    int iRet = Max(10,20,30);
    cout<<"Largest number is : "<<iRet<<endl;

    float fRet = Max(10.0f,20.0f,30.1f);
    cout<<"Largest number is : "<<fRet<<endl;

    return 0;

}
