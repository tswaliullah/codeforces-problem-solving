#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int cnt = 0;
    while (t--)
    {
        int a[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        int total = a[0] + a[1] + a[2];

        if (total >= 2)
        {
            cnt++;
        }
    }
    
    cout << cnt << endl;

    return 0;
}