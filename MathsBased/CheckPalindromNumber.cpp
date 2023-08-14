// https://practice.geeksforgeeks.org/problems/palindrome0746/1

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string reverseTxt=to_string(n);
		    reverse(reverseTxt.begin(), reverseTxt.end());
		    int reversedInt=stoi(reverseTxt);
		    
		    if(n==reversedInt){
		        return "Yes";
		    }else{
		        return "No";
		    }
		}
};