#include<iostream>
using namespace std;

template <class T>

T Multiplay(T iNo1 , T iNo2)
{
    T ans;

    ans = iNo1 * iNo2;

    return ans;
}

int main()
{
    int iRet = Multiplay(10,20);
    cout<<iRet<<endl;

    float fRet = Multiplay(10.0f,20.0f);
    cout<<fRet<<endl;

    return 0;

}
