#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <queue>
#include <functional>
#include <algorithm>

using namespace std;

void helper(string& str, vector<char>& stack, vector<int>& remains, vector<string>& res, string utils, int total_num) { 
    // braces, bricks, parenthesis left numbers are stored in the remains
    if (str.size() == total_num) {
        res.push_back(str);
        return;
    }
    for (int i = 0; i < remains.size(); i++) {
        if (remains[i] > 0) {
            if (i % 2 == 0) {
                remains[i]--;
                str.push_back(utils[i]);
                stack.push_back(utils[i]);
                helper(str, stack, remains, res, utils, total_num);
                str.pop_back();
                stack.pop_back();
                remains[i]++;
            } else if (!stack.empty() && stack.back() == utils[i-1]) {
                remains[i]--;
                str.push_back(utils[i]);
                stack.pop_back();
                helper(str, stack, remains, res, utils, total_num);
                str.pop_back();
                stack.push_back(utils[i-1]);
                remains[i]++;
            }
        }
    }
}

vector<string> valid_parenthesis_with_diff_types(int l, int m, int s) {
    if (l < 0 || m < 0 || s < 0) {
        return vector<string>();
    }
    string str;
    vector<char> stack;
    vector<string> res;
    string utils = "{}[]()";
    vector<int> remains = {l, l, m, m, s, s};
    int total_num = (l + m + s) * 2;
    helper(str, stack, remains, res, utils, total_num);
    return res;
}

void print_vec(vector<string>& vec) {
    for (auto& i : vec) {
        cout << i << endl;
    }
}

int main() {
    int l = 1;
    int m = 1;
    int n = 1;
    vector<string> res = valid_parenthesis_with_diff_types(l, m, n);
    print_vec(res);
    return 0;
}
