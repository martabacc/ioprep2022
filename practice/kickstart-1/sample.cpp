#include <bits/stdc++.h>
#define loop(g, n) for (g = 0; (g) < (int)(n); ++(g))
using namespace std;

int main()
{
    int tc, g;
    cin >> tc;
    loop(g, tc)
    {
        int m, n, c;
        int count = 0, temp = 0;
        cin >> m >> n;
        loop(c, m)
        {
            cin >> temp;
            count += temp;
        }
        cout << "Case #" <<g+1<< ": " <<count - ((count / n) * n) << endl;
    }

    return 0;
}