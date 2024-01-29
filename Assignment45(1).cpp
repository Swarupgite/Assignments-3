#include <iostream>
#include <string>
using namespace std;

template <class T>
void Display(T value, int isize)
{
    for (int i = 0; i < isize; i++)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter a value: ";
    string iValue;
    cin >> iValue;

    cout << "Enter the number of times to display: ";
    int iCount;
    cin >> iCount;

    Display(iValue, iCount);

    return 0;
}
