#include <iostream>
#include <vector>
#include <utility>
#include <functional>
#include <queue>
#include <unordered_map>
#include <stdio.h>
using namespace std;
void all_subset_helper(vector<char>& chars, vector<vector<char>>& res, vector<char>& sol , int layer) {
    if (layer == int(chars.size())) {
        res.push_back(sol);
        return;
    }
    sol.push_back(chars[layer]);
    all_subset_helper(chars, res, sol, layer + 1);
    sol.pop_back();
    all_subset_helper(chars, res, sol, layer + 1);
}
vector<vector<char>> all_subset(vector<char>& chars) {
    if (chars.size () < 1) {
        return vector<vector<char>> ();
    }
    vector<vector<char>> res;
    vector<char> sol;
    all_subset_helper(chars, res, sol, 0);
    return res;
}

void print_vec(vector<char>& vec) {
    for (auto& i : vec) {
        cout << i << " ";
    }
    cout << '\n';
}

int main() {
    vector<char> input = {'a', 'b', 'c'};
    vector<vector<char>> res = all_subset(input);
    for (auto& c : res) {
        print_vec(c);
    }
    return 0;
}