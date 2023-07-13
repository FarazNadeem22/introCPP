#include <iostream>
#include <iomanip>

using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

void sort(int arr[], int size);

int main()
{
    int arr[] = {1,
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

    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    for (int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}

void sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}