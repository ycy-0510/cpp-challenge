#include <iostream>
#define min(i, j) (i < j ? i : j)
#define max(i, j) (i > j ? i : j)

using namespace std;

struct freeTime
{
    int str;
    int end;
};

int main()
{
    int n, m;
    cin >> n >> m;
    freeTime ft1[n], ft2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> ft1[i].str >> ft1[i].end;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> ft2[i].str >> ft2[i].end;
    }
    int need;
    cin >> need;
    int small = 99999;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = min(ft1[i].end, ft2[j].end) - max(ft1[i].str, ft2[j].str);
            if (x >= need)
            {
                if (max(ft1[i].str, ft2[j].str) < small)
                {
                    small = max(ft1[i].str, ft2[j].str);
                }
            }
        }
    }
    if (small == 99999)
    {
        cout << -1;
    }
    else
    {
        cout << small << " " << small + need;
    }
}