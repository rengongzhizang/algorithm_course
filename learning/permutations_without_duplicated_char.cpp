#include <iostream>
#include <string>
#include <vector>

using namespace std;

void permute(string& input, vector<string>& res, int level) {
    if (level == input.size()) {
        res.push_back(input);
        return;
    }
    for (int i = level; i < input.size(); i++) {
        swap(input[i], input[level]);
        permute(input, res, level + 1);
        swap(input[i], input[level]);
    }
}
vector<string> permutation(string& input) {
    if (input.size() < 1) {
        return vector<string>();
    }
    vector<string> res;
    permute(input, res, 0);
    return res;
}

void print_vec(vector<string>& vec) {
    for (auto& i : vec) {
        cout << i << endl;
    }
}

int main() {
    string str = "abc";
    vector<string> res = permutation(str);
    print_vec(res);
    return 0;
}