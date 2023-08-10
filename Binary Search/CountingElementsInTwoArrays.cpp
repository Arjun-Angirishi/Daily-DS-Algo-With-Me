//https://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1?page=1&category[]=Binary%20Search&sortBy=submissions

class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        sort(arr2,arr2+n);
        vector<int> v;
        for(int i=0;i<m;i++){
            int st=0;
            int end=n-1;
            while(st<=end){
                int mid=(st+end)/2;
                if(arr1[i]>=arr2[mid]){
                    st=mid+1;
                }else {
                    end=mid-1;
                }
            }
            v.push_back(end+1);
        }
        return v;
    }
};