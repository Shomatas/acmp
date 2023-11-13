#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int cnt = 0;
    for (int it : a)
    {
        if (it % 2 == 1)
        {
            cout << it << ' ';
            ++cnt;
        }
    }
    cout << '\n';
    for (int it : a)
    {
        if (it % 2 == 0)
        {
            cout << it << ' ';
        }
    }
    cout << '\n' << (cnt <= (n - cnt) ? "YES" : "NO") << '\n';
    return 0;
}