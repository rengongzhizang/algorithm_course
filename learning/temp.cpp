#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <functional>
#include <deque>
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
void zigzag_print_tree(TreeNode* root, vector<vector<int> >& res) {
    if (root == NULL) {
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    bool flag = 0;
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
        if (flag) {
            reverse(sol.begin(), sol.end());
        }
        flag = !flag;
        res.push_back(sol);
    }
}

pair<vector<vector<int> >, vector<vector<int> > > print_tree_by_layer(TreeNode* root) {
    if (root == NULL) {
        return pair<vector<vector<int> >, vector<vector<int> > >();
    }
    vector<vector<int> > res;
    vector<vector<int> > ans;
    print_tree(root, res);
    zigzag_print_tree(root, ans);
    pair<vector<vector<int> >, vector<vector<int> > > vec_pair(res, ans);
    return vec_pair;
}

void zigzag_print(TreeNode* root, vector<vector<int> >& ans) {
    if (root == NULL) {
        return;
    }
    deque<TreeNode*> dq;
    dq.push_back(root);
    bool flag = 1;
    while (!dq.empty()) {
        int size = dq.size();
        vector<int> sol;
        for (int i = 0; i < size; i++) {
            TreeNode* curr = NULL;
            if (flag) {
                curr = dq.front();
                dq.pop_front();
                if (curr -> left != NULL) {
                    dq.push_back(curr -> left);
                }
                if (curr -> right != NULL) {
                    dq.push_back(curr -> right);
                }
            } else {
                curr = dq.back();
                dq.pop_back();
                if (curr -> right != NULL) {
                    dq.push_front(curr -> right);
                }
                if (curr -> left != NULL) {
                    dq.push_front(curr -> left);
                }
            }
            sol.push_back(curr -> val);
        }
        ans.push_back(sol);
        flag = !flag;
    }
}

vector<vector<int> > zigzag_print(TreeNode* root) {
    if (root == NULL) {
        return vector<vector<int> >();
    }
    vector<vector<int> > res;
    zigzag_print(root, res);
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
    TreeNode* node3 = new TreeNode(4);
    TreeNode* node4 = new TreeNode(5);
    TreeNode* node5 = new TreeNode(6);
    root -> left = node1;
    node1 -> left = node2;
    node1 -> right = node3;
    root -> right = node4;
    node4 -> right = node5;
    pair<vector<vector<int> >, vector<vector<int> > > pair = print_tree_by_layer(root);
    vector<vector<int> > res = pair.first;
    vector<vector<int> > ans = pair.second;
    vector<vector<int> > sol = zigzag_print(root);
    for (auto& i : res) {
        print_vec(i);
    }
    for (auto& i : ans) {
        print_vec(i);
    }
    for (auto& i : sol) {
        print_vec(i);
    }
    cout<< '\n' <<"life is lonly" << '\n';
    return 0;
}