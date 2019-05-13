#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
method 1:
                abc
               /   \
            a       ' '
        /   \       /   \
       ab   a''     b   ''
       /\    /\      /\   /\
    abc ab ac a     bc c  c ''

                abcd
               /   \
            a       ' '
        /   \       /   \
       ab   a''     b   ''
            /\      /\     /\
           ac a    bc b    c ''
              /\      /\  /\ /\
            ad a     bd b cd c d ''

method 2:
                    abc
             /       |       \
             a       b        c
           /  \    /   \    /   \
         ab   ac  bc

*/

void subsets_helper(string& str, vector<string>& res, string& sub, int k, int level) {
    if (level == str.size() || sub.size() == k) {
        if (sub.size() == k) res.push_back(sub);
        return;
    }
    sub.push_back(str[level]);
    subsets_helper(str, res, sub, k, level + 1);
    sub.pop_back();
    subsets_helper(str, res, sub, k, level + 1);
}

void method2_helper(string& str, string& sub, vector<string>& res, int level, int k) {
    if (sub.size() == k) {
        res.push_back(sub);
        return;
    }
    for (int i = level; i < str.size(); i++) {
        sub.push_back(str[i]);
        method2_helper(str, sub, res, i + 1, k);
        sub.pop_back();
    }
} 

pair<vector<string>, vector<string>> subsets_with_k_element(string& str, int k) {
    if (str.size() < 1) {
        return pair<vector<string>,vector<string>>();
    }
    vector<string> res;
    string sub;
    subsets_helper(str, res, sub, k, 0);
    vector<string> sol;
    string temp;
    method2_helper(str, temp, sol, 0, k);
    pair<vector<string>, vector<string>> p(res, sol);
    return p;
}

void print_vec(vector<string>& vec) {
    for (auto& i : vec) {
        cout << i << endl;
    }
}


int main () {
    string str = "abcd";
    pair<vector<string>, vector<string>> p = subsets_with_k_element(str, 2);
    vector<string> res = p.first;
    vector<string> sol = p.second;
    //print_vec(res);
    print_vec(sol);
    return 0;
}