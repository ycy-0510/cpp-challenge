#include <iostream>
using namespace std;

int main()
{
    int R, C, W;
    cin >> R >> C >> W;
    int s[R][C];
    int dx = W / 2, dy = W / 2 + W % 2 - 1;
    for (int y = 0; y < R; y++)
    {
        for (int x = 0; x < C; x++)
        {
            s[(y + dy) % R][(x + dx) % C] = y * C + x + 1;
        }
    }
    for (int y = 0; y < R; y++)
    {
        for (int x = 0; x < C; x++)
        {
            cout << s[y][x] << ' ';
        }
        cout << endl;
    }
    return 0;
}