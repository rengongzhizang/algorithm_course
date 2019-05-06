#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <functional>
using namespace std;
 
int main() {
    vector<int> vec;
    int k = 10;
    while(k) {
        vec.push_back(k);
        k--;
    }
    priority_queue<int, vector<int> > pq(vec.begin(), vec.begin() + 7);
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout<< '\n' <<"life is lonly" << '\n';
    return 0;
}