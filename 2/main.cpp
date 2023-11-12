#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int sum = 0;
    int a1 = 1;
    int a2;
    cin >> a2;
    if (a1 > a2)
    {
        swap(a1, a2);
    }

    for (int i = a1; i <= a2; ++i) sum += i;
    cout << sum;
    return 0;
}