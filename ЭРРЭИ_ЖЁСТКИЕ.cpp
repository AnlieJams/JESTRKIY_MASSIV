#include <iostream>
using namespace std;

int main()
{
    //ЗАДАНИЕ 1
    setlocale(0, "");
    const int size = 5;
    int array[size] = { 1, 2, 3, 4, 5 };
    int array2[size];

    for (int i = 0; i < size; i++)
    {
        *(array + i) = i;
    }
    for (int i = 0; i < size; i++)
    {
        *(array2 + size - i - 1) = *(array + i);
    }

    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << "   ";
    }
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << *(array2 + i) << "   ";
    }

    //ЗАДАНИЕ 2
    const int size = 5;
    int array[size] = { 1, 2, 3, 4, 5 };

    int min = *array;
    int max = *array;

    for (int i = 0; i < size; i++)
    {
        if (min > *(array + i))
        {
            min = *(array + i);
        }
        if (max < *(array + i))
        {
            max = *(array + i);
        }
    }
    cout << "Минимальный: " << min << "\n";
    cout << "Максимальный: " << max << "\n";

    //ЗАДАНИЕ 3
    const int size = 5;

    int array[5] = { 1, 2, 3, 4, 5 };
    int shift;

    cout << "Введите сдвиг: ";
    cin >> shift;

    cout << "Старый: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << "   ";
    }

    for (int j = 0; j < shift; j++)
    {
        int index = *(array + size - 1);
        for (int i = size - 2; i >= 0; i--)
        {
            *(array + i + 1) = *(array + i);
        }
        *array = index;
    }
    cout << "\n";

    cout << "Новый: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << "   ";
    }
}