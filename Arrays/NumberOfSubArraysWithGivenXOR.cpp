// https://www.codingninjas.com/studio/problems/subarrays-with-xor-k_6826258?leftPanelTab=1

#include<bits/stdc++.h>

int subarraysWithSumK(vector < int > a, int b) {
    int xo=0;
    map <int,int> m;
    m[0]++;
    int ans=0;
    for(int i=0;i<a.size();i++){
        xo^=a[i];
        int x=xo^b;
        ans+=m[x];
        m[xo]++;
    }
    return ans;
}