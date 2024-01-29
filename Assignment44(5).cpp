#include <iostream>
using namespace std;

template <class T>

T Min(T*arr, int isize)
{
    T iMin = arr[0]; 

    for (int i = 1; i < isize; i++)
    {
        if (arr[i] < iMin)
        {
            iMin = arr[i];
        }
    }

    return iMin;
}

int main()
{
    int intArr[] = {10, 20, 30, 40, 50};

    float floatBrr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Min(intArr, 5);
    cout << "Large no of integers: " << iRet << endl;

    float fRet = Min(floatBrr, 4);
    cout << "Large no of floats: " << fRet << endl;

    return 0;
}
