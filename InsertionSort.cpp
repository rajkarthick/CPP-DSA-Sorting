/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


void InsertionSort(int a[], int max)
{
    int i,j, key;
    
    for (i = 1; i < max; i++)
    {
        key = i;
        j = i - 1;
        
        while(j >=0 && a[j] > a[key])
        {
            int temp = a[key];
            a[key]   = a[j];
            a[j]     = temp;
            key      = j;
            j--;
        }
    }
}

int main()
{
    int a[] = {5,1,4,11,33,10,8,7,3,9,6,2};
    
    int max = sizeof(a)/sizeof(int);
    
    InsertionSort(a, max);

    for (int i=0; i< max ; i++)
    {
        cout <<a[i] << " ";
    }
    return 0;
}
