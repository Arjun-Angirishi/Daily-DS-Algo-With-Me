//https://www.codingninjas.com/studio/problems/postorder-traversal_2035933?leftPanelTab=1

vector<int> postorderTraversal(TreeNode *root)
{
  TreeNode* cur=root;
  vector < int > postOrder;
  if (cur == NULL) return postOrder;

  stack <TreeNode * > st;
  while (cur != NULL || !st.empty()) {

    if (cur != NULL) {
      st.push(cur);
      cur = cur -> left;
    } else {
      TreeNode * temp = st.top() -> right;
      if (temp == NULL) {
        temp = st.top();
        st.pop();
        postOrder.push_back(temp -> data);
        while (!st.empty() && temp == st.top() -> right) {
          temp = st.top();
          st.pop();
          postOrder.push_back(temp -> data);
        }
      } else cur = temp;
    }
  }
  return postOrder;
    
}