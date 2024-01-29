#include <iostream>
using namespace std;

template <class T>

T AddN(T*arr, int isize)
{
    T sum = 0;

    for (int i = 0; i < isize; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int intArr[] = {10, 20, 30, 40, 50};

    float floatBrr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = AddN(intArr, 5);
    cout << "Sum of integers: " << iRet << endl;

    float fRet = AddN(floatBrr, 4);
    cout << "Sum of floats: " << fRet << endl;

    return 0;
}
