#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
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

vector<string> subsets_with_k_element(string& str, int k) {
    if (str.size() < 1) {
        return vector<string>();
    }
    vector<string> res;
    string sub;
    subsets_helper(str, res, sub, k, 0);
    return res;
}

void print_vec(vector<string>& vec) {
    for (auto& i : vec) {
        cout << i << endl;
    }
}

int main () {
    string str = "abcd";
    vector<string> vec = subsets_with_k_element(str, 2);
    print_vec(vec);
    return 0;
}