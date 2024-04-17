#include<bits/stdc++.h>

using namespace std;

    int romanToInt(string s) {
        int ans = 0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(val(s[i]) <val(s[i+1]))
            ans-= val(s[i]);
            else
            ans+= val(s[i]);
        }
        ans+= val(s[s.length()-1]);

        return ans;
    }

    int val(char c)
    {
        if(c == 'I')
        return 1;
        else if(c=='V')
        return 5;
        else if(c=='X')
        return 10;
        else if(c=='L')
        return 50;
        else if(c=='C')
        return 100;
        else if(c=='D')
        return 500;
    

        return 1000;
    }


int main()
{
    cout<<romanToInt("XII");
}