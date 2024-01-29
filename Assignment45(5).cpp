#include <iostream>
using namespace std;

template <class T>
void Reverse(T* arr, int iSize)
{
    cout << "Reversed Array: ";
    for (int i = iSize - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    Reverse(values, size);

    delete[] values;

    return 0;
}
