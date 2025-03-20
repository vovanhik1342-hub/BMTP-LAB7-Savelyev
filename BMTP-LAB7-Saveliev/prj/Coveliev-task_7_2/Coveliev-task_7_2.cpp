#include <iostream>
#include <windows.h> 
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int array[10];
    
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    cout << "Масив: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    int maxIndex = 0;

    for (int i = 1; i < 10; i++)
    {
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }

    cout << "\nМаксимальний елемент: " << array[maxIndex] << endl;

    if (maxIndex == 0)
    {
        cout << "Перший елемент вже максимальний" << endl;
    }
    else
    {
        int temp = array[0];
        array[0] = array[maxIndex];
        array[maxIndex] = temp;
    }

    cout << "\nМасив після перестановки:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cin.ignore();
    cin.get();
    return 0;
}