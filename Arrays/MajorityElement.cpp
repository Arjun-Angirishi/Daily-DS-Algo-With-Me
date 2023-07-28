//https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1


class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int el=0;
        int cnt=0;
        for(int i=0;i<size;i++){
            if(cnt==0){
                el=a[i];
                cnt++;
            }else if(el==a[i]){
                cnt++;
            }else cnt--;
        }
        int c=0;
        for(int i=0;i<size;i++){
            if(el==a[i]){
                c++;
            }
        }
        if(c>size/2){
            return el;
        }else return -1;
        
    }
};