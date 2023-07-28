//https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int i=0;
        int j=0;
        while(i!=n){
            if(a[i]==a[j]){
                i++;
            }else{
                j++;
                a[j]=a[i];
            }
        }
        return j+1;
    }
};