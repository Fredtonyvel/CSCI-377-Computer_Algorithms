#include <iostream>

using namespace std;

void merge(int *, int, int, int);

void mergesort(int *a, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, high, mid);
    }


}

void merge(int *a, int low, int high, int mid)
{
    int f[50];
    int i = low;
    int k = low;
    int j = mid + 1;

    while(i <= mid && j <= high)
    {
        if(a[i] < a[j])
        {
            f[k] = a[i];
            k++;
            i++;
        }
        else
        {
            f[k] = a[j];
            k++;
            j++;
        }
    }

    while(i <= mid)
    {
        f[k] = a[i];
        k++;
        i++;
    }
    while(j <= high)
    {
        f[k] = a[j];
        k++;
        j++;
    }

    for(i = low; i < k; i++)
    {
        a[i] = f[i];
    }
}

int main()
{
    int a[20];
    int n = 10;

    cout << "Merge Sort Algorithm" << endl;
    cout << "\nEnter elements to sort: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mergesort(a, 0, 9); //0-9 specifies the range, must changed 3rd value
                        //according to value of n in the main

    cout << "\nSorted array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
