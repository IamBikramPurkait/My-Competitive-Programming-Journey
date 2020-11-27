// Reverse an array by C++ inbuilt swap() function


#include <iostream>
#include <cmath>
using namespace std;



void reverse(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low < high)
    {
        swap(arr[low],arr[high]);       //using inbuilt swap() function

        low++;
        high--;
    }
}

int main()
{

    int arr[] = {10, 5, 7, 30}, n = 4;

    cout << "Before Reverse" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    reverse(arr, n);

    cout << "After Reverse" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}