#include <iostream>
using namespace std; 

int arr[20], B[20];

int n;





   
    
    //step 4.e
    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++; 
    }
    //step 4.f
    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;
    }

    //step 5
    for (int y = low; y <= high; y++)
    {
        arr[y] = B[y];
    }  
    
}