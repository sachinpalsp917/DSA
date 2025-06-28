#include <bits/stdc++.h>
using namespace std;

void swapNumber(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void selection_sort(int arr[], int n)
{
    // time complexity -> O(N²) -> best, worst and average
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        // cout << "mini current: " << arr[mini] << endl; // -> my own use
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swapNumber(arr[i], arr[mini]);
        // for (int i = 0; i < n; i++)
        //     cout << arr[i] << " ";
        // cout << endl;
    }
}

void bubble_sort(int arr[], int n)
{
    // time complexity -> worst & avg -> O(N²) & best -> O(N)
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapNumber(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
            break;
    }
}

void insertion_sort(int arr[], int n)
{
    // time complexity -> best -> O(N) & worst & avg -> O(N²)
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swapNumber(arr[j - 1], arr[j]);
            j--;
        }
    }
}
int main(int argc, char const *argv[])
{
    freopen("./input.txt", "r", stdin);   // read from input.txt
    freopen("./output.txt", "w", stdout); // write to output.txt

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Selection sort -> select minimums and swap
    // selection_sort(arr, n);

    // Bubble sort -> push the max to the last by adjacent swaps
    // bubble_sort(arr, n);

    // Insertion sort -> takes an element and places it in it's correct position
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
