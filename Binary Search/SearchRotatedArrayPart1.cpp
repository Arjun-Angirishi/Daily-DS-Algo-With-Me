// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/1 
int Search(vector<int> vec, int K) {
    int low=0;
    int n=vec.size();
    int end=n-1;
    int mid=0;
    while(low<=end){
        mid=(end+low)/2;
        if(vec[mid]==K){
            return mid;
        }else if(vec[low]<vec[mid]){
            if(vec[low]<=K&&vec[mid]>=K){
                end=mid-1;
            }else low=mid+1;
        }else {
            if(vec[end]>=K&&vec[mid]<=K){
                low=mid+1;
            }else end=mid-1;
        }

    }
            return -1;
}