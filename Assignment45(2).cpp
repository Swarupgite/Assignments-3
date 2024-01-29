#include <iostream>
using namespace std;

template <class T>
int Frequency(T* arr, int iSize, T iNo)
{
    int count = 0;
    for (int i = 0; i < iSize; ++i)
    {
        if (arr[i] == iNo)
        {
            count++;
        }
    }
    return count;
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

    cout << "Value to check frequency: ";
    int targetValue;
    cin >> targetValue;

    int result = Frequency(values, size, targetValue);

    cout << "Frequency of the specific value: " << result << endl;

    delete[] values;

    return 0;
}
