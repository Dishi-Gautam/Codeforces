#include <bits/stdc++.h>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxdepth(TreeNode* root){
    int c=0;
    if(root==NULL) return;
    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);
    c=max(lh,rh)+1;
return c;
}

int main(){

     TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Maximum depth of the tree: " << maxdepth(root) << endl;

    return 0;
}








#include <bits/stdc++.h>
using namespace std;

void solve(string &s) {
    vector<int> numbers; 

    for (char c : s) {
        if (c != '+') {
            numbers.push_back(c - '0');
        }
    }

    sort(numbers.begin(), numbers.end());

    s.clear(); 
    for (size_t i = 0; i < numbers.size(); ++i) {
        s += to_string(numbers[i]);
        if (i < numbers.size() - 1) {
            s += '+'; 
        }
    }

    cout << s << endl; 
}

int main() {
    string s;
    getline(cin, s); 
    solve(s); 
    return 0;
}
