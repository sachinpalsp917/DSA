#include <bits/stdc++.h>
using namespace std;
void printName(int n)
{
    if (n == 0)
        return;
    cout << "xyz" << endl;
    n--;
    printName(n);
}

void print1toN(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    print1toN(i + 1, n);
}

void printNto1(int i, int n)
{
    if (i > n)
        return;
    printNto1(i + 1, n);
    cout << i << " ";
}

void sumOfN(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    sumOfN(i - 1, sum + i);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void reverseArray(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

bool pallindrome(int i, string &s)
{
    if (i > s.length() / 2)
        return true;

    if (s[i] != s[s.length() - i - 1])
        return false;

    return pallindrome(i + 1, s);
}

int fibonacci(int n)
{
    if (n <= 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, char const *argv[])
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    // printName(5);
    // print1toN(1, n);
    // printNto1(1, n);
    // sumOfN(n, 0);
    // cout << factorial(5);
    // reverseArray(arr, 0, n - 1);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // string s = "madam";
    // cout << pallindrome(0, s); // 1-> true 0->false
    // cout << fibonacci(n);
    return 0;
}
