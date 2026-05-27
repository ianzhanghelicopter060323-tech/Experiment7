#include <iostream>
#include <algorithm>

# define MAXSIZE 100

using namespace std;


template <class T>
class SeqClass
{
    private:
        T data[MAXSIZE];
        int leng;
    public:
        SeqClass(): leng(0) {}
        ~SeqClass(){}

        void insert(const T &elem_in);
        T *get(int pos);

        void print() const;

        void dataSort();
};

template<class T>
void SeqClass<T>::insert(const T &elem_in)
{
    if (leng >= MAXSIZE)
    {
        cout << "ERROR! Longer than MAXSIZE" << endl;
        return ;
    }

    data[leng] = elem_in;
    leng ++;
}

template <class T>
T *SeqClass<T>::get(int pos)
{
    if (pos >= leng)
    {
        cout << "ERROR! pos out of bound" << endl;
        return nullptr;
    }

    if (pos < 0)
    {
        cout << "ERROR! pos must be non-negative" << endl;
        return nullptr;
    }


    T *data_out = &data[pos];
    return data_out;
}

template <class T>
void SeqClass<T>::print() const
{
    if (leng == 0)
    {
        cout << "WARNING! empty data" << endl;
        return ;
    }
    
    
    int i=0;
    while (i < leng)
    {
        cout << data[i] << " ";
        
        i ++;
    }
    cout << endl;
}

template <class T>
void SeqClass<T>::dataSort()
{
    if (leng == 0)
    {
        cout << "WARNING! empty data" << endl;
        return ;
    }
    sort(data, data + leng);
}


int main()
{
    SeqClass<int> list;
    SeqClass<char> empty_list;

    // insert() test
    list.insert(11);
    list.insert(45);
    list.insert(14);
    list.print();
    
    // get() test
    int *data_recieve = list.get(1);
    /*int *data_negative =*/list.get(-1); // negative pos
    /*int *data_outbound =*/list.get(3); // out-of-bound test
    /*char *data_empty =*/empty_list.get(0);
    if (data_recieve != nullptr)
        cout << *data_recieve << endl;
    
    // print() test
    empty_list.print();
    list.print();

    // sorting array
    list.dataSort();
    empty_list.dataSort();
    list.print();
    empty_list.print();

    return 0;
}
