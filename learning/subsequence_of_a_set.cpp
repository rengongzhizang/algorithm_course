#include <iostream>
#include <vector>
#include <string>

using namespace std;

// in this question, sets have duplicated element
void helper(string& str, vector<string>& res, string& sub, int level) {
    if (level == str.size()) {
        res.push_back(sub);
        return;
    }
    sub.push_back(str[level]);
    helper(str, res, sub, level + 1);
    sub.pop_back();
    while (level < str.size() - 1 && str[level] == str[level + 1]) {
        level++;
    }
    helper(str, res, sub, level + 1);
}

vector<string> subsequences(string& str) {
    if (str.empty()) {
        return vector<string>();
    }
    vector<string> res;
    string sub;
    helper(str, res, sub, 0);
    return res;
}

void print_vec(vector<string>& vec) {
    for (auto& i : vec) {
        cout << i << endl;
    }
}

int main() {
    string str = "abbbc";
    vector<string> res = subsequences(str);
    print_vec(res);
    return 0;
}