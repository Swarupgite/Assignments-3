#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T* arr, int iSize, T iNo)
{
    for (int i = 0; i < iSize; ++i)
    {
        if (arr[i] == iNo)
        {
            return i + 1; 
        }
    }
    return -1; 
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

    cout << "Value to check first occurrence: ";
    int targetValue;
    cin >> targetValue;

    int result = SearchFirst(values, size, targetValue);

    if (result != -1)
    {
        cout << "First occurrence of the specific value: " << result << endl;
    }
    else
    {
        cout << "Value not found in the array." << endl;
    }

    delete[] values;

    return 0;
}
