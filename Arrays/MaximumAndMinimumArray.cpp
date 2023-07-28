//https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=3&category[]=Arrays&category[]=Tree&sortBy=submissions

pair<long long, long long> getMinMax(long long a[], int n) {
    
    int ans1=INT_MIN;
    int ans2=INT_MAX;
    for(int i=0;i<n; i++){
        if(a[i]>ans1){
            ans1=a[i];
        }
        if(a[i]<ans2){
          ans2=a[i];          
        }
    }
    return make_pair(ans2,ans1);
}