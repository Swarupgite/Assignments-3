#include<iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int size;

public:
    Array(int value = 10)
    {
        cout << "Inside constructor\n";
        this->size = value;
        this->Arr = new int[size];
    }

    Array(Array &ref)
    {
        cout << "Inside copy constructor\n";

        this->size = ref.size;
        this->Arr = new int[this->size];

        for (int i = 0; i < this->size; i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }

    ~Array()
    {
        cout << "Inside Destructor\n";

        delete[] Arr;
    }

    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout << "Please enter elements:\n";
    for (int i = 0; i < this->size; i++)
    {
        cin >> Arr[i];
    }
}

void Array::Display()
{
    cout << "Elements are\n";

    for (int i = 0; i < this->size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

class ArrSearch : public Array
{
public:
    ArrSearch(int no = 10) : Array(no)
    {}

    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
    void Accept();
};

int ArrSearch::SearchFirst(int value)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }

    if (i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::Frequency(int value)
{
    int iCnt = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SearchLast(int value)
{
    int i;

    for (i = size - 1; i >= 0; i--)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }

    if (i >= 0)
    {
        return i + 1;
    }
    else
    {
        return -1;
    }
}

int ArrSearch::EvenCount()
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int ArrSearch::OddCount()
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int ArrSearch::SumAll()
{
    int isum = 0;
    for (int i = 0; i < size; i++)
    {
        isum += Arr[i];
    }
    return isum;
}

void ArrSearch::Accept()
{
    cout << "Please enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
}

int main()
{
    cout << "Inside main\n";

    ArrSearch sobj(5);
    sobj.Accept();
    sobj.Display();

    int iret = sobj.Frequency(11);

    cout << "Frequency is " << iret << "\n";

    iret = sobj.SearchFirst(11);

    cout << "First occurrence is " << iret << "\n";

    iret = sobj.SearchLast(11);

    cout << "Last occurrence is " << iret << "\n";

    iret = sobj.EvenCount();

    cout << "Even count is " << iret << "\n";

    iret = sobj.OddCount();

    cout << "Odd count is " << iret << "\n";

    iret = sobj.SumAll();

    cout << "Sum of all elements is " << iret << "\n";

    return 0;
}
