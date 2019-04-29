#  ARP 26, 2019
## orders:
* Initialization
* APIs
* iterator (if exists)

## Dynamic array (vector<>, ListArray<>)
### Initialization:
```
vector<int> vec (n, x);
vector<vector<int>> vec (m, vector<int> (n, x));
vector<vector<vector<int>>> vec (l, vector<vector<int>> (m, vector<int> (n, x)));
```
### APIs:
```
vec.push_back();
vec.front();
vec.back();
vec.size();
vec.pop_back();
```
### Iteration:
```
for (auto it = vec.begin(); it != vec.end(); it++) {
    cout << *it;
}

for (auto& it : vec) {
    cout << it;
}
```

## HashMap (unordered_map<>, unordered_set<>)
### Initialization:
```
unordered_map<int, int> map;
```
### APIs:
```
map[key] = value;
map.insert({key, value});
```
```
map.contain(key);
auto it = map.find(key);
return it != map.end() ? 1 : 0;
```
```
int val = map[key];
int val = map.at(key);
```
```
for (auto it = map.begin(); it != map.end(); it++) {
    int key = it -> first;
    int val = it -> second;
}
for (auto& it : map) {
    int key = it.first();
    int val = it.second();
}
```

## Heap/Priority Queue (priority_queue<>)
### Initialization:
```
priority_queue<int> pq;             // max heap
priority_queue<int, vector<int>, greater<int>> pq;      // min heap
priority_queue<int, vector<int>, greater<int>> pq(vec.begin(), vec.end());
```
### APIs:
```
pq.push(x);
int max = pq.top();
pq.pop();
```

## Deque/ Queue / Stack (deque<>, queue<>, vector<>)
### Queue Initialization:
```
queue<int> q;
```
### Queue APIs:
```
q.push();
q.pop();
q.front();
q.back();
```
### Deque Initialization:
```
deque<int> dq;
```
### Deque APIs:
```
dq.push_back();
dq.pop_back();
dq.push_front();
dq.po_front();
dq.front();
dq.back();
dq.at();
```

#  ARP 28, 2019

## orders:
* Initialization
* APIs
* iterator (if exists)

## Dynamic array (vector<>, ListArray<>)
```
#include <vector>;
vector<int> vec = {};
vector<int> vec (n, x);
vector<vector<int>> mat (m, vector<int> (n, x));
vector<vector<vector<int>>> tsr (l, vector<vector<int>> (m, vector<int> (x, n)));
```
```
vec.push_back();
vec.pop_back();
vec.front();
vec.back();
```
```
for (auto& x : vec) {
    int val = x;
}
```

## HashMap (unordered_map<>, unordered_set<>)
```
#include <unordered_map>;
unordered_map<int, int> map;
```
```
map[key] = value;
map.insert({key, value});
map.contain(key);
int value = map[key];
auto it = map.find(key);
return it == map.end() ? 0 : 1;
```
```
for (auto it = map.begin(); it != map.end(); it++) {
    key = it -> first;
    value = it -> second;
}

for (auto& it : map) {
    key = it.first;
    value = it.second;
}
```

## Heap/Priority Queue (priority_queue<>)
```
#include <queue>;
#include <vector>;
#include <functional>;
prioirty_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> pq({1,2,3});     // WRONG!
//it should be :
priority_queue<int, vector<int>, greater<int>> pq(vec.begin(), vec.end());
```
```
int max/min = pq.top();
pq.push();
pq.pop();
//
pq.at();
pq.front();
pq.back();
// Those three don't belong here;
```
```
NOT ITERABLE
```

## Deque/ Queue / Stack (deque<>, queue<>, vector<>)
```
#include <queue>;
#include <deque>;
queue<int> q;
deque<int> dq;
```
```
dq/q.push();
dq/q.pop();
dq/q.front();
dq/q.back();
dq.at();                    //only deque has this
dq/q.front();
dq/q.back();
```

#  ARP 29, 2019
## orders:
* Initialization
* APIs
* iterator (if exists)


## Dynamic array (vector<>, ListArray<>)
```
vector<int> vec(x,n);
vector<vector<int>> mat(m, vector<int>(n,x));
vector<vector<vector<int>>> tsr(l, vector<vector<int>>(m, vector<int>(n, x)));
vec.front();
vec.back();
vec.push_back();
vec.po_back();
for (auto& x : vec) {
    int value = m;
}
for (auto it = vec.begin(); it != vec.end(); it++) {
    int value = *it;
}
```

## HashMap (unordered_map<>, unordered_set<>)
```
unordered_map<int,int> map;
map.insert({k, v});
map[key] = v;
int v = map[k];
map.contain(k);
return map.find(k) != map.end() ? 1 : 0;
for (auto it = map.begin(); it != map.end(); it++) {
    int k = it -> first;
    int v = it -> second;
}
for (auto& it : map) {
    int k = it.first();
    int v = it.second();
}
```

## Heap/Priority Queue (priority_queue<>)
```
#include <queue>
#include <vector>
#include <functional>

priority_queue<int> pq;
vector<int> vec(x, n);
priority_queue<int, vector<int>, greater<int>> pq(vec.begin(), vec.end());
pq.push();
pq.top();
pq.pop();
```

## Deque/ Queue / Stack (deque<>, queue<>, vector<>)
```
deque<int> dq;
dq.push_back();
dq.pop_back();
dq.push_front();
dq.push_back();
dq.front();
dq.back();
dq.at();
queue<int> q;
q.front();
q.back();
q.push();
q.pop();
```
