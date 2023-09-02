#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    int last = 0;
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        if (last != nums[i])
        {
            last = nums[i];
            cout << nums[i] << " ";
        }
    }
    return 0;
}