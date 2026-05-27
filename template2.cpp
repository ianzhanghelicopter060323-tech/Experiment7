#include <iostream>
using namespace std;


template <class T>

// Ascending Order Sorting with bubble sorting
void AscendOrder(T arr[], int len)
{
    for (int i=0; i<len-1; i++)
    {
        for (int j=0; j<len-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


template <class T>
void Print(const T *arr_in, int len_in)
{
    for (int i=0; i<len_in-1; i++)
    {
        cout << arr_in[i] << ", ";
    } 
    cout << arr_in[len_in-1] << endl;
}


int main()
{
    // define two array
    int arr_int[] = {11, 45, 14, 1, 9, 19, 8, 10};
    double arr_double[] = {1.1, 1.14, 5.14, 19.19};

    AscendOrder(arr_int, 8);
    AscendOrder(arr_double, 4);

    Print(arr_int, 8);
    Print(arr_double, 4);

    return 0;
}