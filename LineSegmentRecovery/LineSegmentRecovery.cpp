#include <iostream>
using namespace std;

#define MAX (int)1e7 + 1

short int s[MAX];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < MAX; i++)
        s[i] = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        s[l]++;
        s[r]--;
    }
    int lp = 0, count = 0, ans = 0;
    for (int i = 0; i < MAX; i++)
    {
        count += s[i];
        if (count == 0)
        {
            ans += i - lp;
            lp = i + 1;
        }
    }
    cout << ans;
    return 0;
}