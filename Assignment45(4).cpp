#include <iostream>
using namespace std;

template <class T>
int SearchLast(T* arr, int iSize, T iNo)
{
    int iAns = -1; 

    for (int i = 0; i < iSize; ++i)
    {
        if (arr[i] == iNo)
        {
            iAns = i + 1; 
        }
    }

    return iAns;
}

int main()
{
    cout << "Enter the number of values: ";
    int size;
    cin >> size;

    cout << "Enter the values:" << endl;

    int* values = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> values[i];
    }

    cout << "Value to check last occurrence: ";
    int targetValue;
    cin >> targetValue;

    int result = SearchLast(values, size, targetValue);

    if (result != -1)
    {
        cout << "Last occurrence of the specific value: " << result << endl;
    }
    else
    {
        cout << "Value not found in the array." << endl;
    }

    delete[] values;

    return 0;
}
