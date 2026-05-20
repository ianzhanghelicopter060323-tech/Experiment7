#include <iostream>
#include <algorithm>
using namespace std;


template <class T>
class Order
{
    private:
        int len;
        T *arr;
    public:
        Order(const T *arr_in, int len_in);
        ~Order();

        void AscenOrder();
        void Print() const;
};


/* ============= sorting class defination ============== */
template <class T>
Order<T>::Order(const T *arr_in, int len_in)
{
    len = len_in;
    arr = new T [len];

    for (int i=0; i<len; i++)
    {
        arr[i] = arr_in[i];
    }
}

template <class T>
Order<T>::~Order()
{
    delete [] arr;
    arr = nullptr;
}


template <class T>
void Order<T>::AscenOrder()
{
    sort(arr, arr + len);
}


template <class T>
void Order<T>::Print() const
{
    for (int i=0; i<len-1; i++)
    {
        cout << arr[i] << ", " ;
    }
    cout << arr[len-1] << endl;
}
/* ====================================================== */


int main()
{
    // define two array
    int arr_int[] = {11, 45, 14, 1, 9, 19, 8, 10};
    double arr_double[] = {1.1, 1.14, 5.14, 19.19};

    Order<int> od_int(arr_int, 8);
    Order<double> od_double(arr_double, 4);

    // ascending order sorting
    od_int.AscenOrder();
    od_double.AscenOrder();

    // print
    od_int.Print();
    od_double.Print();

    return 0;
}