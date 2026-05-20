#include <iostream>
using namespace std;


template <class Min, class Leng>
Min minElem(const Min arr[], Leng length)
{
    Min min_elem = arr[0];

    for (int i=1; i<length; i++)
    {
        if (arr[i] < min_elem)
            min_elem = arr[i];
    }

    return min_elem;
}


int main()
{
    // define two array
    int arr_int[] = {11, 45, 14, 1, 9, 19, 8, 10};
    double arr_double[] = {1.1, 1.14, 5.14, 19.19};

    int len_int = 8;
    int len_double = 4;
    
    cout << "The smallest element in arr_int[] is: "
         << minElem(arr_int, len_int) << endl;
    cout << "The smallest element in arr_double[] is: "
         << minElem(arr_double, len_double) << endl;

    return 0;
}