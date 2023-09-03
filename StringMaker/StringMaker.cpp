#include <iostream>
using namespace std;

char s[25][25];

int main()
{
    int k, q, r;
    cin >> k >> q >> r >> s[0];
    for (int i = 0; i < q; i++)
        for (int j = 0; j < k; j++)
        {
            int n;
            cin >> n;
            s[i + 1][n - 1] = s[i][j];
        }
    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j <= q; j++)
            cout << s[j][i];
        cout << endl;
    }
}