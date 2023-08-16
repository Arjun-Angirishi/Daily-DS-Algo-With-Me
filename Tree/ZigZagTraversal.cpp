// https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> ans;
    	if(root==NULL){
    	    return ans;
    	}
    	queue<Node* > q;
    	q.push(root);
    	bool flag=true;
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int> v(size);
    	    for(int i=0;i<size;i++){
    	        Node* curr=q.front();
    	        q.pop();
    	        if(curr->left!=NULL){
    	            q.push(curr->left);
    	        }
    	        if(curr->right!=NULL){
    	            q.push(curr->right);
    	        }
    	        int index=flag?i:size-1-i;
    	        v[index]=curr->data;
    	    }
    	    flag=!flag;
    	    for(auto p:v){
    	        ans.push_back(p);
    	    }
    	}
    	return ans;
    }
};