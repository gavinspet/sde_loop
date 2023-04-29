#include<bits/stdc++.h>
#include"common.h"
using namespace std;

// method-1 : using set to store elements
// time complexity - O(max(m,n))
// space complexity - O(m+n)
void union_1(vector<int> &nums1, vector<int> &nums2)
{
    set<int> s;
    for(int i=0; i<nums1.size();i++)
    {
        s.insert(nums1[i]);
    }
     for(int i=0; i<nums2.size();i++)
    {
        s.insert(nums2[i]);
    }

    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

// method-2 : sort and using two pointers
void union_2(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    int i = 0, j = 0;
    // m is the size of the first array
    int m = nums1.size(); 
    // n is the size of the second array
    int n = nums2.size();
    while(i<m && j<n)
    {
        if(nums1[i]<nums2[j])
        {
            cout<<nums1[i++]<<" ";
        }
        else if(nums1[i]>nums2[j])
        {
            cout<<nums2[j++]<<" ";
        }
        else
        {
            cout<<nums1[i++]<<" ";
            j++;
        }
    }

    while(i<m)
    {
        cout<<nums1[i++]<<" ";
    }

    while(j<n)
    {
        cout<<nums2[j++]<<" ";
    }
}


int main()
{
    vector<int> nums1, nums2;
    nums1.assign({1,40, 30,2,3,4,5});
    nums2.assign({40,5,3,4,30});
    union_2(nums1,nums2);
    cout<<endl;
}