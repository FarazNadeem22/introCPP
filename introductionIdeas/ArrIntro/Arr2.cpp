#include <iostream>
#include <iomanip>

using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

int searchArr(int arr[], int size, int myNum);

int main()
{
    int numbers[] = {1,
                     3,
                     4,
                     6,
                     7,
                     4,
                     22,
                     11,
                     34,
                     5,
                     6,
                     3,
                     21,
                     87};
    int myNum, index;

    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Enter number to find: ";
    cin >> myNum;

    index = searchArr(numbers, size, myNum);

    if (index != -1)
    {
        cout << myNum << " is at index " << index;
    }
    else
    {
        cout << myNum << " not found.";
    }

    return 0;
}

int searchArr(int arr[], int size, int myNum)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == myNum)
        {
            return i;
        }
    }
    return -1;
}