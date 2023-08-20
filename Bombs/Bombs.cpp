#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c[n][n], cn[n][n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            c[i][j] = s[j];
            cn[i][j] = s[j];
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (c[i][j] == '*')
            {
                for (int x = 0; x < n; x++)
                    cn[i][x] = '*';
                for (int y = 0; y < n; y++)
                    cn[y][j] = '*';
            }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << cn[i][j];
        cout << endl;
    }
    return 0;
}
