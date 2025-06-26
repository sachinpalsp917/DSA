#include <bits/stdc++.h>
using namespace std;

void countDigits(int num)
{
    int originalNum = num;
    int count = 0;
    int lastDigit = 0;
    while (num > 0)
    {
        lastDigit = num % 10;
        count += 1;
        num = num / 10;
    }
    cout << "Number of digits is " << count;
}

void reverseNumber(int x)
{
    int revNum = 0;
    int lastDigit = 0;
    while (x > 0)
    {
        lastDigit = x % 10;
        x = x / 10;
        revNum = (revNum * 10) + lastDigit;
    }
    cout << revNum;
}

void checkPalindrome(int x)
{
    int original = x;
    int rev = 0;
    int ld = 0;
    while (x > 0)
    {
        ld = x % 10;
        rev = (rev * 10) + ld;
        x = x / 10;
    }
    if (original == rev)
        cout << "true";
    else
        cout << "false";
}

void armstrongNumber(int x)
{
    int original = x;
    int ld = 0;
    int armsNum = 0;
    while (x > 0)
    {
        ld = x % 10;
        armsNum = armsNum + pow(ld, 3);
        x = x / 10;
    }
    if (original == armsNum)
        cout << "ArmsStrong number";
    else
        cout << "Not armstrong number";
}

void printAllDivisors(int x)
{
    // type - 1 t(o) -> O(N)
    // for (int i = 1; i <= x; i++)
    // {
    //     if (x % i == 0)
    //         cout << i << " ";
    // }

    // type - 2 t(o) -> O(sqrt(n)) + O(no. of factors * log (no of factors)) + O(no of factors)
    // t(o) -> O(sqrt(n))
    vector<int> v;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            v.emplace_back(i);
            if ((x / i) != i)
                v.emplace_back((x / i));
        }
    }
    // t(o) -> O(no. of factors * log (no of factors))
    sort(v.begin(), v.end());
    // t(o) -> O(no of factors)
    for (auto it : v)
    {
        cout << it << " ";
    }
}

void checkPrime(int x)
{
    int count = 0;
    //               sqrt(x)
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
            if ((x / i) != i)
                count++;
        }
    }

    if (count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";
}

void GCDorHCF(int num1, int num2)
{
    // type-1
    for (int i = min(num1, num2); i > 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i;
            break;
        }
    }
    cout << endl;
    // type-2
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 % num2;
        else
            num2 = num2 % num1;
    }
    if (num1 == 0)
        cout << num2;
    else
        cout << num1;
}
int main(int argc, char const *argv[])
{
    int num1 = 20;
    int num2 = 40;
    // countDigits(num1);
    // reverseNumber(num1);
    // checkPalindrome(num1);
    // armstrongNumber(num1);
    // printAllDivisors(num1);
    // checkPrime(num);
    GCDorHCF(num1, num2);
    return 0;
}
