#include <iostream>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    int s[R][C];
    int m = 0, n = 0;
    for (int y = 0; y < R; y++)
    {
        for (int x = 0; x < C; x++)
        {
            cin >> s[y][x];
            if (s[y][x] == 1)
            {
                m++;
            }
        }
    }
    for (int y = 0; y < R; y++)
    {
        for (int x = 0; x < C; x++)
        {
            if (s[y][x] == 5)
            {
                int t = 0;
                for (int b = y - 1; b <= y + 1; b++)
                {
                    for (int a = x - 1; a <= x + 1; a++)
                    {
                        if (a >= 0 && b >= 0 && a < C && b < R && (a != x || b != y))
                        {
                            if (s[b][a] == 5)
                            {
                                t = 1;
                            }
                        }
                    }
                }
                if (t == 0)
                {
                    for (int b = y - 1; b <= y + 1; b++)
                    {
                        for (int a = x - 1; a <= x + 1; a++)
                        {
                            if (a >= 0 && b >= 0 && a < C && b < R && (a != x || b != y))
                            {
                                if (s[b][a] == 1)
                                {
                                    n++;
                                    s[b][a] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    m -= n;
    cout << n << " " << m;
}