#include <iostream>

using namespace std;
void sort (int* a, const size_t& size)
{

    int* temp_;
    for (int i =1; i<size; ++i)
    {
        for (int j =size-1; j>=i; --j)
        {
            if (a[j-1]>a[j])
            {
                temp_= &a[j-1];
                a[j-1]=a[j];
                a[j]= *temp_;
            }
        }
    }
}

int main()
{
    int v[] = {12,  34, 87, 43, 19, 76, -9};
    const size_t array_size = sizeof(v)/sizeof(v[0]);
    sort(v, array_size);
    for(int i=0; i < array_size; i++)
        cout<<v[i]<<" ";
    return 0;
}
