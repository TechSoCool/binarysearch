/* Simple Binary Search Program Using Functions in C++*/
/* Data Structure C++ Programs, C++ Array Examples */
#include <iostream>
using namespace std;
#define MAX_SIZE 5
void binary_search(int[], int);
void BubbleSort(int arr_search[MAX_SIZE]);

int main()
{
    int arr_search[MAX_SIZE], i, target;

    cout << "Simple C++ Binary Search Example - Array and Functions\n";
    cout << "\nEnter " << MAX_SIZE << " Elements in the array  : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_search[i];

    cout << "\nYour Data before sorting   :";
    for (i = 0; i < MAX_SIZE; i++)
    {
        cout << "\t" << arr_search[i];
    }

    cout << "\nEnter Element to Search : ";
    cin >> target;

    BubbleSort(arr_search);
    cout << "\nYour Data after sorting    :";
    for (i = 0; i < MAX_SIZE; i++)
    {
        cout << "\t" << arr_search[i];
    }
    binary_search(arr_search, target);
    system("pause");
    return 0;
}
//=========================================================
void binary_search(int fn_arr[], int element)
{
    int f = 0, l = MAX_SIZE, mid;

    while (f <= l)
    {
        mid = (f + l) / 2;

        if (fn_arr[mid] == element)
        {
            cout << "\nSearch Element  : " << element << " : Found :  Position : " << mid + 1 << ".\n";
            break;
        }
        else if (fn_arr[mid] < element)
            f = mid + 1;
        else
            l = mid - 1;
    }

    if (f > l)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}
//=====================================================
void BubbleSort(int arr_search[MAX_SIZE])
{
    int f, n;
    for (f = 0; f < MAX_SIZE; f++)
    {
        for (n = 0; n < (MAX_SIZE - 1); n++)
        {
            if (arr_search[n] > arr_search[n + 1])
            {
                int temp = arr_search[n];
                arr_search[n] = arr_search[n + 1];
                arr_search[n + 1] = temp;
            }
        }
    }
}