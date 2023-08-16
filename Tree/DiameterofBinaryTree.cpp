// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* node, int& diameter) {

        if (!node) {
            return 0;
        }

        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = max(diameter,1+lh + rh);

        return 1 + max(lh, rh);
    }
    
    int diameter(Node* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
};