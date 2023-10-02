//12) Дано 2 одновимірних масиви(А і В) по К елементів кожен.Утворити третій масив(С) із К * 2 елементів, 
//переписуючи у нього спочатку всі елементи масиву А по порядку, а потім елементи масиву В.

#include <iostream>
#include <stdio.h>

using namespace std;


void combining_arrays(int arrA[], int arrB[], int n, int m, int arrC[])
{
    int i = 0, j = 0, k = 0;

    while (i < n)
        arrC[k++] = arrA[i++];

    while (j < m)
        arrC[k++] = arrB[j++];
}

int main()
{
    int arrA[] = { 1, 2, 3, 4 };
    const int n = sizeof(arrA) / sizeof(arrA[0]);

    int arrB[] = { 5, 6, 7 };
    const int m = sizeof(arrB) / sizeof(arrB[0]);

    int arrC[n + m];

    combining_arrays(arrA, arrB, n, m, arrC);

   
    for (int i = 0; i < n + m; i++)

    cout << "Array after merging: " << arrC[i] << endl;

    return 0;
}