//https://practice.geeksforgeeks.org/problems/majority-vote/1

class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        int el1=-55;
        int el2=-55;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(cnt1==0&&nums[i]!=el2){
                el1=nums[i];
                cnt1++;
            }else if(cnt2==0){
                el2=nums[i];
                cnt2++;
            }else if(nums[i]==el1){
                cnt1++;
            }else if(nums[i]==el2){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1){
                c1++;
            }else if(nums[i]==el2){
                c2++;
            }
        }
        vector<int> v;
        if(c1>n/3){
            v.push_back(el1);
        }
        if(c2>n/3){
            v.push_back(el2);
        }
        if(v.size()==0){
            v.push_back(-1);
        }
        return v;
    }
};