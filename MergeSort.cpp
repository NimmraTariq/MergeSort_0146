#include<iostream>
using namespace std;

int arr [20], B[20];
int n;

void input() 
{
    


































void mergesort (int low, int high) {
   if (low >= high) 
   {
        return;
   }

   int mid = (low + high) / 2;

   //step 3
   mergesort (low, mid);
   mergesort (mid + 1, high);

    //step 4
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
     {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        } else {
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    while  (j <= high) 
    {
        B[k] = arr[j];
        j++;
        k = k+1;
    }

    while (i <= mid) 
    {
        B[k] = arr[i];
        i++;
        k++;
    }

    for (int x = low; x <= high; x++) 
    {
        arr[x] = B[x];
    }
}