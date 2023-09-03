#include <iostream>
#include <sstream>
#include <string>
#define ll long long

using namespace std;

ll add(string s)
{
    int p1 = 0, p2 = 0;
    ll ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i + 1] == '+' || s[i + 1] == '\0')
        {
            p2 = i;
            ans += stoll(s.substr(p1, p2 - p1 + 1));
            p1 = p2 + 2;
        }
    }
    return ans;
}

ll multiple(string s)
{
    int p1 = 0, p2 = 0;
    ll ans = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i + 1] == '*' || s[i + 1] == '\0')
        {
            p2 = i;
            ans *= add(s.substr(p1, p2 - p1 + 1));
            p1 = p2 + 2;
        }
    }
    return ans;
}

string f(string s)
{
    int p1 = 0, p2 = 0;
    string ns = "";
    int check = 0;
    int l = 0, r = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (check == 0)
        {
            if (s[i] == '(')
            {
                check = 1;
                l = 1, r = 0;
                p2 = i;
                ns += s.substr(p1, p2 - p1 - 1);
                p1 = i;
            }
            else if (s[i + 1] == '\0')
            {
                p2 = i;
                ns += s.substr(p1, p2 - p1 + 1);
            }
        }
        else
        {
            if (s[i] == '(')
                l++;
            else if (s[i] == ')')
            {
                r++;
                if (l == r)
                {
                    check = 0;
                    p2 = i;
                    ns += f(s.substr(p1 + 1, p2 - p1 - 1));
                    p1 = i;
                }
            }
        }
    }
    p1 = 0, p2 = 0;
    ll max = -1, min = 1e18;
    for (int i = 0; i < ns.length(); i++)
    {
        if (ns[i + 1] == ',' || ns[i + 1] == '\0')
        {
            p2 = i;
            ll result = multiple(ns.substr(p1, p2 - p1 + 1));
            if (min > result)
            {
                min = result;
            }
            if (max < result)
            {
                max = result;
            }
            p1 = p2 + 2;
        }
    }
    stringstream stream;
    stream << (max - min);
    string str = stream.str();
    return str;
}

int main()
{
    string s;
    cin >> s;
    if (s.find('f') >= s.length())
    {
        cout << multiple(s);
    }
    else
    {
        int p1 = 0, p2 = 0;
        string ns = "";
        int check = 0;
        int l = 0, r = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (check == 0)
            {
                if (s[i] == '(')
                {
                    check = 1;
                    l = 1, r = 0;
                    p2 = i;
                    ns += s.substr(p1, p2 - p1 - 1);
                    p1 = i;
                }
                else if (s[i + 1] == '\0')
                {
                    p2 = i;
                    ns += s.substr(p1, p2 - p1 + 1);
                }
            }
            else
            {
                if (s[i] == '(')
                    l++;
                else if (s[i] == ')')
                {
                    r++;
                    if (l == r)
                    {
                        check = 0;
                        p2 = i;
                        ns += f(s.substr(p1 + 1, p2 - p1 - 1));
                        p1 = i;
                    }
                }
            }
        }
        cout << multiple(ns);
    }
    return 0;
}
