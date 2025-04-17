#include <iostream>
using namespace std; 

int arr[20], B[20];

int n;





    while (i <= mid && j <= high)
    {
        //step 4.d
        if (arr[i] <= arr[j])
        {
            //step 4.d.i
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] + arr[j];
            j++;
        }
        k++; //step 4.d.ii
    }
    
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
    }
    
    
    
}