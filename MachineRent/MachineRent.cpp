#include <iostream>
#include <algorithm>
using namespace std;

struct Activety
{
    int st, et;
};

bool cmp(Activety a1, Activety a2)
{
    return a1.et < a2.et;
}

Activety acts[100001];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> acts[i].st;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> acts[i].et;
    }
    sort(acts, acts + n, cmp);
    int ans = 0;
    int mnow[101];
    for (int i = 0; i < k; i++)
        mnow[i] = -1;
    for (int i = 0; i < n; i++)
    {
        int min = 1.1e8, mmin = -1;
        for (int j = 0; j < k; j++)
            if (acts[i].st > mnow[j])
                if (acts[i].st - mnow[j] < min)
                {
                    min = acts[i].st - mnow[j];
                    mmin = j;
                }
        if (mmin >= 0)
        {
            ans++;
            acts[i].st = -2;
            mnow[mmin] = acts[i].et;
        }
    }
    cout << ans;
    return 0;
}