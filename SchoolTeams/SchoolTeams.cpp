#include <iostream>
using namespace std;

struct Cls
{
    int b;
    int g;
};

int main()
{
    int n, m;
    int a = 0;
    cin >> n >> m;
    Cls classes[n + m];
    for (int i = 0; i < n + m; i++)
    {
        cin >> classes[i].b >> classes[i].g;
    }
    for (int i = 0; i < n + m - 1; i++)
    {
        for (int j = 0; j < n + m - 1 - i; j++)
        {
            if ((classes[j].b - classes[j].g) > (classes[j + 1].b - classes[j + 1].g))
            {
                Cls temp = classes[j];
                classes[j] = classes[j + 1];
                classes[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n + m; i++)
    {
        a += (i < n ? classes[i].b : classes[i].g);
    }
    cout << a;
    return 0;
}
