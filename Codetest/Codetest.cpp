#include <iostream>
using namespace std;

struct Score
{
    int t;
    int s;
};

Score scores[8];

int main()
{
    int k;
    cin >> k;
    int e = 0;
    Score max = {0, -2};
    for (int i = 0; i < k; i++)
    {
        cin >> scores[i].t >> scores[i].s;
        if (scores[i].s == -1)
            e++;
        if (scores[i].s > max.s)
            max = scores[i];
    }
    int s = max.s - k - e * 2;
    cout << (s < 0 ? 0 : s) << ' ' << max.t;
    return 0;
}