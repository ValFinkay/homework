//14)Дано одновимірний масив.Циклічно зрушити(зсунути) масив на К елементів вліво або вправо(в залежності від обраної дії користувача)

#include <iostream>
using namespace std;

void shift_arr_left(int* arr, int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void shift_left(int* arr, int n, int k)
{
    k = k % n; 
    shift_arr_left(arr, 0, k - 1);
    shift_arr_left(arr, k, n - 1);
    shift_arr_left(arr, 0, n - 1);
}

void shift_arr_right(int* arr, int n)
{
    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    for (int i = 1; i <= n - 1; i++)
    {
        int temp2 = arr[i];
        arr[i] = arr[n - 1];
        arr[n - 1] = temp2;
    }
}
void shift_right(int* arr, int n, int k)
{
    for (int i = 0; i < k % n; i++)
    {
        shift_arr_right(arr, n);
    }
 
}

int main() {
    const int n = 10;
    int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
    
    cout << "Array before: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter how many elements to shift the array by:" << endl;
    int k = 0;
    cin >> k;

    cout << "Where to move the array: left ot right? (l/r)" << endl;
    char choice = 0;
    cin >> choice;

    switch (choice)
    {
    case 'l': 

        shift_left(arr, n, k);

        cout << "The array is shifted to the left: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    case 'r': 
    
        shift_right(arr, n, k);

        cout << "The array is shifted to the right: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        return true; 

    default:
        cout << "Erorr! Shift direction selection error " << endl;

        return false;
    }

    return 0;
}




