// https://practice.geeksforgeeks.org/problems/fraction-pairs-with-sum-1/1


//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        map<pair<int,int>,int> m;
        int cnt = 0;
        for(int i=0;i<n;i++){
            int num = numerator[i];
            int den = denominator[i];
            int hcf = __gcd(num,den);
            num = num/hcf;
            den = den/hcf;
            if(m.find({den-num,den})!= m.end()) cnt+=m[{den-num,den}];
            m[{num,den}]++;
        }
        return cnt;
        
    }
};