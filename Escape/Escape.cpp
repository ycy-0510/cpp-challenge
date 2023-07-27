#include <iostream>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    int space[100][100] = {1};
    int x = 0, y = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        switch (i % 4)
        {
        case 0:
            for (int j = 0; j < (int)s[i] - 48; j++)
            {
                if (x + 1 < C)
                {
                    x++;
                    space[x][y] = 1;
                }
            }
            break;
        case 1:
            for (int j = 0; j < (int)s[i] - 48; j++)
            {
                if (y + 1 < R)
                {
                    y++;
                    space[x][y] = 1;
                }
            }
            break;
        case 2:
            for (int j = 0; j < (int)s[i] - 48; j++)
            {
                if (x - 1 >= 0)
                {
                    x--;
                    space[x][y] = 1;
                }
            }
            break;
        case 3:
            for (int j = 0; j < (int)s[i] - 48; j++)
            {
                if (y - 1 >= 0)
                {
                    y--;
                    space[x][y] = 1;
                }
            }
            break;
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (space[j][i])
            {
                cout << "*";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}