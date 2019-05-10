#include <iostream>
#include <vector>

using namespace std;

void coins_combo(vector<int>& coins, int left, int level, vector<vector<int>>& res, vector<int>& combo) {
    if (level == coins.size()) {
        if (left == 0) res.push_back(combo);
        return;
    }
    for (int i = 0; i <= left / coins[level]; i++) {
        combo.push_back(i);
        coins_combo(coins, left - i * coins[level], level + 1, res, combo);
        combo.pop_back();
    }
}

vector<vector<int>> coins_combo_help(vector<int>& coins, int left) {
    if (coins.empty()) {
        return vector<vector<int>>();
    }
    vector<int> combo;
    vector<vector<int>> res;
    coins_combo(coins, left, 0, res, combo);
    return res;
}

void print_vec(vector<int>& vec) {
    for (auto& i : vec) {
        cout << i << " ";
    }
    cout << '\n';
}

int main () {
    vector<int> coins = {25,10,5,1};
    int left = 99;
    vector<vector<int>> res = coins_combo_help(coins, left);
    for (auto& vec : res) {
        print_vec(vec);
    }
    return 0;
}