#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int test[n];
    for (int i = 0; i < n; i++)
    {
        cin >> test[i];
        if (test[i] == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
}