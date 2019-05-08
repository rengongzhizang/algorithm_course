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

#  ARP 30, 2019
## orders:
* Initialization
* APIs
* iterator (if exists)


## Dynamic array (vector<>, ListArray<>)
```
#include <int>
vector<int> vec = {};
vector<int> vec(n,x);
vector<vector<int>> mat(m, vector<int>(n,x));
vector<vector<vector<int>>> tsr(l, mat);
vector<vector<vector<int>>> tsr(l, vector<vector<int>>(m, vector<int>(n,x)));
```
```
vec.push_back();
vec.pop_back();
vec.front();
vec.back();
```
```
for (auto& i : vec) {
    int val = i;
}
for (auto it = vec.begin(); it != vec.end(); it++) {
    int val = *it;
}
```

## HashMap (unordered_map<>, unordered_set<>)
```
#include<unordered_map> map;
map.insert({k, v});
map[key] = value;
int value = map[key];
bool containing = map.contain(key);
auto it = map.find(key);
return it != map.end() ? 1 : 0;
```
```
for (auto& it : map) {
    int key = it.first;
    int val = it.second;
}
for (auto it = map.begin(); it != map.end(); it++) {
    int key = it -> first;
    int val  = it -> second;
}
```

## Heap/Priority_queue
```
#include <vector>
#include <queue>
#include <functional>
priority_queue<int> pq;
vector<int> vec = {1, 2, 3};
priority_queue<int, vector<int>, greater<int>> pq(vec.begin(), vec.end());
```
```
int max = pq.top();
pq.pop();
pq.push();
```

## Deque/ Queue / Stack (deque<>, queue<>, vector<>)
```
#include <queue>
#include <deque>
queue <int> q;
q.push();
q.pop();
q.front();
q.back();

deque <int> dq;
dq.push_back();
dq.push_front();
dq.pop_back();
dq.pop_front();
dq.front();
dq.back();
dq.at();
```

## Pair
```
#include <utility>
pair <int, int> p1;
pair <int, string> p2(1, "Hello World");
pair <string, int> p3;
p1.first = 1;
p1.second = 2;
p3 = make_pair("Hello", 1);
```


#  May 2, 2019
## orders:
* Initialization
* APIs
* iterator (if exists)

## Dynamic Array;
```
vector<int> vec = {};
vector<int> vec(n,x);
vector<vector<int>> mat(m, vector<int>(n,x));
vector<vector<vector<int>>> tsr(l, vector<vector<int>>(m, vector<int>(n,x)));
```
```
vec.push_back();
vec.pop_back();
vec.front();
vec.back();
vec.at(i);
vec[i];
```
```
for (auto it = vec.begin(); it != vec.end(); it++) {
    int val = *it;
}
```
```
for (auto& it : vec) {
    int val = it;
}
```

## HashMap
```
unordered_map<int, int> map;
map[key] = val;
map.insert({key, val});
map.contain(key);
int val = map[key];
auto it = map.find();
return it != map.end() ? 1 : 0;
```
```
for (auto it = map.begin(); it != map.end(); it++) {
    int key = it -> first;
    int val = it -> second;
}
```
```
for (auto& it : map) {
    int key = map.first;
    int val = map.second;
}
```

## Heap/Priority_queue
```
#include <queue>
#include <functional>
#include <vector>
prioirty_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> pq(vec.begin(), vec.end());
pq.push(g);
int maximum = pq.top();
pq.pop();
```

## Deque/queue/stack
```
#include <deque>
#include <queue>
queue<int> q;
q.push();
q.pop();
q.front();
q.back();
deque<int> dq;
dq.front();
dq.back();
dq.push_back();
dq.push_front();
dq.pop_back();
dq.pop_front();
dq.at();
```

## Pair
```
#include <utility>
pair<int, int> pair1;
pair<string, int> pair2;
pair<int, string> pair3(101, "love"); // review
// pair1.make_pair(1, 101); wrong answer;
pair1 = make_pair(1, 101);
pair2.first = "hello";
pair2.second = 101;
```


#  May 5, 2019
## orders:
* Initialization
* APIs
* iterator (if exists)

## vector<T>
```
vector<int> vec = {1,2,3};
vector<int> vec(n,x);
vector<vector<int>> mat(m, vector<int>(n,x));
vector<vector<vector<int>>> tst(l, vector<vector<int>>(m, vector<int>(m,x)));
vec.push_back();
vec.pop_back();
vec.at();
vec.front();
vec.back();
for (auto it = vec.begin(); it != vec.end(); it++) {
    int val = *it;
}
for (auto& it : vec) {
    int val = it;
}
```
## HashMap
```
#include <unordered_map> // there is a space ' ' between include and type
unordered_map<int, int> map;
map.insert({key, val});
map[key] = val;
if(map.contain(key)) int val = map[key];
auto it = map.find(key);
return it != map.end() ? 1 : 0;
for (auto it = map.begin(); it != map.end(); it++) {
    int key = it -> first;
    int val = it -> second;
}
for (auto& it : map) {
    int key = it.first;
    int val = it.second;
}
```

## Heap
```
#include <vector>
#include <queue>
#include <functional>
priority_queue<int> pq; // max heap
priority_queue<int, vector<int>, greater<int>> pq(vec.begin(), vec.end());
pq.push(g);
pq.pop();
int val = pq.top();
```
## Queue/deque/stack
```
queue<int> q;
deque<int> dq;
q.push(g);
q.pop();
q.front();
q.back();
dq.front();
dq.back();
dq.push_back();
dq.pop_back();
dq.push_front();
dq.pop_front();
dq.at();
```

## Pairs
```
pair<int, int> p1;
pair<string, int> p2 = {"Hello World", 27}; // this is correct, don't forget the one using constructor!
pair<string, int> p3("hello", 27);
pair<int,int> p4;
p4.first = 1;
p4.second = 2;
pair<int, int> p5;
p5 = make_pair(1, 2);
```

# May 6, 2019
```
vector<vector<vector<int>>> tsr(l, vector<vector<int>>(m, vector<int>(n, x)));
vec.push_back();
vec.pop_back();
vec.front();
vec.back();
vec.at();
vec[i];
auto it = find(vec.begin(), vec.end(), x);  // std::find
auto it = vec.begin()
auto& it : vec
unordered_map<int, int> map;
map.insert({1,2});
map[1] = 2;
int val = map.contain(key) ? map[key] : -1;
auto& it : map;
auto it = map.find();       // std::unordered_map::find
auto it = map.begin();
#include <utility>
#include <queue>
#include <functional>
#include <deque>
```
```
pair<int, int> p1(1,2);
p1 = {1,2};
p1 = make_pair(1,2);
p1.first = 1;
p1.second = 2;
```

# May 8, 2019
```
vector<int> vec(10,1);
vector<vector<int> > mat(10, vector<int>(10,1));
vector<vector<vector<int> > > tst(10, vector<vector<int> >(10, vector<int>(10,1)));
priority_queue<int, vector<int>, greater<int> >  pq(vec.begin(), vec.begin() + 2);
queue<int> q;
q.push(1);
q.push(2);
int val = q.front();
deque<int> dq;
dq.push_back(1);
dq.push_front(2);
int at_val = dq.at(1);
std::pair<queue<int>, priority_queue<int, vector<int>, greater<int> > > pair1(q, pq);
```
