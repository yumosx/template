#include <iostream>
#include <stack>
#include <queue>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


void dfs(TreeNode* root) {
    stack<TreeNode*> ans;
    vector<int> path;

    auto p = root;
    while (ans.size()) {
        while (p) {
            ans.push(p);
            p = p->left;
        }
        p = ans.top();
        path.push_back(p->val);
        ans.pop();
        p = p->right;
    }
}

void bfs(TreeNode* root) {
    queue<TreeNode*> queue;
    vector<int> path;
    queue.push(root);
    while (queue.size()) {
        int n = queue.size();

        for (int i = 0; i < n; i++) {
            auto top = queue.front();
            path.push_back(top->val);
            queue.pop();

            if (top->left) queue.push(top->left);
            if (top->right) queue.push(top->right);
        }
    }
}