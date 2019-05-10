#include <iostream>
#include <vector>
#include <string>
using namespace std;
void all_valid_pare(int n, int l, int r, vector<string>& res, string& sol) {    // l, r represent num of '(',')' added so far!!!!!!
    if (l == n && r == n) {                                                     // l + r >= 2 * n
        res.push_back(sol);
        return;
    }
    if (l < n) {
        sol.push_back('(');
        all_valid_pare(n, l + 1, r, res, sol);
        sol.pop_back();
    }
    if (l > r) {
        sol.push_back(')');
        all_valid_pare(n, l, r + 1, res, sol);
        sol.pop_back();
    }
}
vector<string> all_valid_parentheses(int n) {
    if (n < 1) {
        return vector<string>();
    }
    vector<string> res;
    string sol = "";
    all_valid_pare(n, 0 , 0, res, sol);
    return res;
}

void print_vec(vector<string>& vec) {
    for (auto& i : vec) {
        cout << i << endl;
    }
}

int main () {
    vector<string> res = all_valid_parentheses(3);
    print_vec(res);
    vector<string> sol = all_valid_parentheses(5);
    print_vec(sol);
    return 0;
}