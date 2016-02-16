#include <iostream>

using namespace std;

int main()
{
    cout << "Insertion Sort Program" << endl << endl;

    int A[100];
    int n = 10;
    int key, temp;

    cout << "Enter the numbers for the array: " << endl;

    for(int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    A[0] = 0;

    for (int j = 2; j <= n; j++)
    {
        key = A[j];
        temp = j - 1;

        while(temp > 0 && A[temp] > key)
        {
            A[temp + 1] = A[temp];
            temp--;
        }

        A[temp + 1] = key;
    }

    cout << "\n\nSorted array: " << endl;

    for(int i = 1; i <= n; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
