//https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1
#include<bits/stdc++.h>

class Solution
{
public:
    int largest(vector <int> &arr, int n)
    {
        int ans=INT_MIN;
        for(auto i: arr){
            ans=max(i,ans);
        }
        return ans;
    }
};
