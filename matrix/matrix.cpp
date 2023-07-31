#include <iostream>
using namespace std;

int main()
{
    int r, c, m;
    cin >> r >> c >> m;
    int s[10][10];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> s[i][j];
    for (int t = 0; t < m; t++)
    {
        int d;
        cin >> d;
        switch (d)
        {
        case 0:
        {
            int temp[10][10];
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    temp[i][j] = s[i][j];
                }
            }
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    s[j][r - i - 1] = temp[i][j];
                }
            }
            int rp = c, cp = r;
            r = rp, c = cp;
            break;
        }
        case 1:
            for (int i = 0; i < r / 2; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    int temp = s[i][j];
                    s[i][j] = s[r - i - 1][j];
                    s[r - i - 1][j] = temp;
                }
            }
            break;
        }
    }
    cout << r << " " << c << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << s[i][j];
            if (j < c - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}