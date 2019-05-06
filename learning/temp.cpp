#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <functional>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void print_tree(TreeNode* root, vector<vector<int> >& res) {
    if (root == NULL) {
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        vector<int> sol;
        for (int i = 0; i < size; i++) {
            if (q.front() -> left != NULL) {
                q.push(q.front() -> left);
            }
            if (q.front() -> right != NULL) {
                q.push(q.front() -> right);
            }
            sol.push_back(q.front() -> val);
            q.pop();
        }
        res.push_back(sol);
    }
}
vector<vector<int> > print_tree_by_layer(TreeNode* root) {
    if (root == NULL) {
        return vector<vector<int> >();
    }
    vector<vector<int> > res;
    print_tree(root, res);
    return res;
}
void print_vec(vector<int>& vec) {
    for (auto& i : vec) {
        cout << i << " ";
    }
    cout << '\n';
}
int main() {

    /*
    vector<int> vec;
    int k = 10;
    while(k) {
        vec.push_back(k);
        k--;
    }
    priority_queue<int, vector<int> > pq(vec.begin(), vec.begin() + 7);
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    */
    TreeNode* root = new TreeNode(1);
    TreeNode* node1 = new TreeNode(2);
    TreeNode* node2 = new TreeNode(3);
    root -> left = node1;
    node1 -> left = node2;
    vector<vector<int> > res = print_tree_by_layer(root);
    for (auto& i : res) {
        print_vec(i);
    }
    cout<< '\n' <<"life is lonly" << '\n';
    return 0;
}