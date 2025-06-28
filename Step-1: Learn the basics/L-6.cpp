#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);   // read from input.txt
    freopen("output.txt", "w", stdout); // write to output.txt

    // Counting frequencies of array elements

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // // precompute -> hashing
    // int hash[13] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]] += 1;
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int number;
    //     cin >> number;
    //     // fetch
    //     cout << hash[number] << " times" << endl;
    // }

    // string hashing
    // string s;
    // cin >> s;

    // // precompute
    // int hash[256] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i]]++;
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     char c;
    //     cin >> c;
    //     // fetch
    //     cout << c << " appears " << hash[c] << " times" << endl;
    // }

    // using map stl
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // // pre-compute
    // // map<int, int> mpp; //this is map default ordered
    // unordered_map<int, int> mpp; // this is unordered map
    // for (int i = 0; i < n; i++)
    // {
    //     mpp[arr[i]]++;
    // }

    // // print mpp
    // for (auto it : mpp)
    // {
    //     cout << it.first << "->" << it.second << endl;
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int number;
    //     cin >> number;
    //     // fetch
    //     cout << mpp[number] << endl;
    // }

    // Counting frequencies of array elements
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (auto it : mpp)
    {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq)
        {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq)
        {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
    return 0;
}
