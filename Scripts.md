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
