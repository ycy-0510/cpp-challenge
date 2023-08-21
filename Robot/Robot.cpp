#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    int map[n][m];
    int x, y;
    int min = 10000000;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
            if (min > map[i][j])
            {
                min = map[i][j];
                x = j, y = i;
            }
        }
    }
    int counter = map[y][x];
    map[y][x] = 10000000;
    while (1)
    {
        int dir = 0;
        int min2 = 10000000;
        if (x + 1 < m)
        {
            if (map[y][x + 1] < min2)
            {
                min2 = map[y][x + 1];
                dir = 1;
            }
        }
        if (y + 1 < n)
        {
            if (map[y + 1][x] < min2)
            {
                min2 = map[y + 1][x];
                dir = 2;
            }
        }
        if (x - 1 >= 0)
        {
            if (map[y][x - 1] < min2)
            {
                min2 = map[y][x - 1];
                dir = 3;
            }
        }
        if (y - 1 >= 0)
        {
            if (map[y - 1][x] < min2)
            {
                min2 = map[y - 1][x];
                dir = 4;
            }
        }
        if (dir > 0)
        {
            switch (dir)
            {
            case 1:
                x++;
                break;
            case 2:
                y++;
                break;
            case 3:
                x--;
                break;
            case 4:
                y--;
                break;
            }
            counter += map[y][x];
            map[y][x] = 10000000;
        }
        else
        {
            break;
        }
    }
    cout << counter;
    return 0;
}