#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <functional>
#include <deque>
#include <unordered_map>
#include <assert.h>
using namespace std;
struct GraphNode {
    int val;
    vector<GraphNode*> neighbors;
    GraphNode(int v) : val(v) {}
};
bool isBipartie(vector<GraphNode*> graph) {
    queue<GraphNode*> q;
    q.push(graph[0]);
    unordered_map<GraphNode*, bool> visited;
    bool curr_color = 1;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            GraphNode* curr = q.front();
            q.pop();
            visited[curr] = curr_color;
            for (auto& pt : (curr -> neighbors)) {
                if (visited.find(pt) != visited.end()) {
                    if (visited[curr] == visited[pt]) {
                        return false;
                    }
                } else {
                    q.push(pt);
                }
            }
        }
        curr_color = !curr_color;
    }
    return true;
}
void isBipartieTest() {
    GraphNode* n1 = new GraphNode(1);
    GraphNode* n2 = new GraphNode(2);
    GraphNode* n3 = new GraphNode(3);
    GraphNode* n4 = new GraphNode(4);
    //n1 -> neighbors.push_back(n2);
    n1 -> neighbors.push_back(n3);
    n1 -> neighbors.push_back(n4);
    n3 -> neighbors.push_back(n1);
    n4 -> neighbors.push_back(n1);
    //n2 -> neighbors.push_back(n4);
    vector<GraphNode*> test_vec;
    test_vec.push_back(n1);
    //test_vec.push_back(n2);
    test_vec.push_back(n3);
    test_vec.push_back(n4);
    /*bool res = (isBipartie(test_vec) == false);
    assert(res);*/
    cout << isBipartie(test_vec) << '\n';
}

int main() {
    isBipartieTest();
    return 0;
}