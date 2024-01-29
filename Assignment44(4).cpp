#include <iostream>
using namespace std;

template <class T>

T Max(T*arr, int isize)
{
    T iMax = arr[0]; 

    for (int i = 1; i < isize; i++)
    {
        if (arr[i] > iMax)
        {
            iMax = arr[i];
        }
    }

    return iMax;
}

int main()
{
    int intArr[] = {10, 20, 30, 40, 50};

    float floatBrr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Max(intArr, 5);
    cout << "Large no of integers: " << iRet << endl;

    float fRet = Max(floatBrr, 4);
    cout << "Large no of floats: " << fRet << endl;

    return 0;
}
