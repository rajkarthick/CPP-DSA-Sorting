#include <iostream>
using namespace std;

void SelectionSort(int a[], int max)
{
    int i,j,min_index, key;
    
    bool doswap = false;
    
    for (i=0; i < max; i++)
    {
        key = a[i];
        min_index = i;
        doswap = false;
        
        for(j=i+1; j < max; j++)
        {
            if (key > a[j])
            {
                min_index = j;
                key = a[j];
                doswap = true;
            }
        }
        if (doswap)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }

    }
}

int main()
{
    int a[] = {5,2,4,1,3,10,8,7,9,6};
    int max = sizeof(a)/sizeof(int);
    
    SelectionSort(a, max);

    for (int i=0; i< max ; i++)
    {
        cout <<a[i] << " ";
    }
    return 0;
}
