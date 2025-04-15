#include<iostream>
using namespace std;

int arr[20], B[20];
int n;

void input() 
{
    while (true)
    {
        cout << "Enter the number of elements (1-20): ";
        cin >> n;
        
        if (n <= 20) 
        {
            break;
        } 

        else 

        {
            cout << "Invalid input. Please enter a number between 1 and 20.\n";
        }
    }

    cout << "\n-------------------------\n" << endl;
    cout << "Enter the elements of the array:\n" << endl;
    cout << "-------------------------\n" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Array index ke-" << i << " : ";
        cin >> arr[i];
    }
}

void mergeSort(int low, int high)
{
    if (low >= high) 
    {
        return;
    }

    int mid = (low + high) / 2;


    mergeSort(low, mid);
    mergeSort(mid + 1, high);


    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        } 
        else 
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    while (j <= high) 
    {
        B[k] = arr[j];
        j++;
        k++;
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

void output()
{
    cout << "\nData setelah diurutkan (Merge Sort): ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()

{
    input();
    mergeSort(0, n - 1);
    output();
}