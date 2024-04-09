#include <bits/stdc++.h>

using namespace std;

void tamper_string(string &s)
{
    s[0] = 'l';
    s.pop_back();
}


int main()
{
    string s = "kartick";
    tamper_string(s);
    cout<<s<<endl;
}