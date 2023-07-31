#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, i = 0;
    cin >> a >> b >> c;
    if ((a && b) == c)
    {
        i++;
        cout << "AND" << endl;
    }
    if ((a || b) == c)
    {
        i++;
        cout << "OR" << endl;
    }
    if ((a != b) == c)
    {
        i++;
        cout << "XOR" << endl;
    }
    if (i == 0)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}