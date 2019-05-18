#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <limits.h>
#include <cmath>

using namespace std;

vector<int> all_factors(int n) {
    if (n < 1) {
        return {-1};
    }
    if (n <= 2) {
        return {n};
    }
    vector<int> res;
    for (int i = n/2; i > 1; i--) {
        if (n % i == 0) {
            res.push_back(i);
        }
    }
    return res;
}

void helper(int n, vector<int>& factors, vector<vector<int>>& res, vector<int>& sol, int level) {
    if (level == factors.size()) {
        if (n == 1) {
            res.push_back(sol);
        }
        return;
    }
    for (int i = 0; n % int(pow(factors[level],i)) == 0; i++) {
        sol.push_back(i);
        helper(n / int(pow(factors[level], i)), factors, res, sol, level + 1);
        sol.pop_back();
    }
}

vector<vector<int>> factor_combos(int n) {
    if (n < 4) {
        return vector<vector<int>> (); 
    }
    vector<int> sol;
    vector<vector<int>> res;
    vector<int> factors = all_factors(n);
    if (factors.empty()) {
        return res;
    }
    helper(n, factors, res, sol, 0);
    int size = res.size();
    vector<vector<int>> ans(size, vector<int>());
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < factors.size(); j++) {
            while (res[i][j] != 0) {
                ans[i].push_back(factors[j]);
                res[i][j]--;
            }
        }
    }
    return ans;
}

void print_vec(vector<int>& vec) {
    for (auto& i : vec) {
        cout << i << ' ';
    }
    cout << endl;
}

int main() {
    vector<vector<int>> test0 = factor_combos(3);
    for (auto& vec : test0) {
        print_vec(vec);
    }
    vector<vector<int>> test1 = factor_combos(12);
    for (auto& vec : test1) {
        print_vec(vec);
    }
    vector<vector<int>> test2 = factor_combos(37);
    for (auto& vec : test2) {
        print_vec(vec);
    }
    vector<vector<int>> test3 = factor_combos(18);
    for (auto& vec : test3) {
        print_vec(vec);
    }
    vector<vector<int>> test4 = factor_combos(64);
    for (auto& vec : test4) {
        print_vec(vec);
    }
    return 0;
}