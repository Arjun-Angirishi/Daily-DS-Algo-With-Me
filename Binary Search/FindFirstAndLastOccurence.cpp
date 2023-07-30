//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=1&category[]=Binary%20Search&sortBy=submissions

vector<int> find(int arr[], int n , int x )
{
    int ans1=-1;
    int ans2=-1;
    int st=0;
    int end=n-1;
    int mid;
    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==x){
            ans1=mid;
            end=mid-1;
        }else if(arr[mid]>x){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    int st1=0;
    int end1=n-1;
    
    int mid1;
    while(st1<=end1){
        mid1=(st1+end1)/2;
        if(arr[mid1]==x){
            ans2=mid1;
            st1=mid1+1;
        }else if(arr[mid1]>x){
            end1=mid1-1;
        }else{
            st1=mid1+1;
        }
    }
    vector<int> ans;
    ans.push_back(ans1);
    ans.push_back(ans2);
    return ans;
}