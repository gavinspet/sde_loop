#include <bits/stdc++.h>

using namespace std;


    bool isPalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    void solve(string s ,int i,vector<string> &temp,vector<vector<string>> &ans)
    {
        if(i> s.length()-1)
        {
            if(!temp.empty())
                ans.push_back(temp);
            return;
        }
       for(int k=i;k<=s.length()-1;k++)
       {
           if(isPalindrome(s,i,k))
           {
               temp.push_back(s.substr(i,k-i+1));
               solve(s,k+1,temp,ans);
               temp.pop_back();
           }
       }
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        vector<vector<string>> ans;
        solve(s,0,temp,ans);
        return ans;
        
        
    }

int main()
{
    string s = "aab";
     vector<vector<string>> ans = partition(s);

     for(int i=0;i<ans.size();i++)
     {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        // cout<<endl;
     }
}