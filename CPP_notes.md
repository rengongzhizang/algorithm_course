#  C++

## Array (fixed size) I don't use this :)
* defined and build on stack in memory;

## Dynamic array (vector<>, ListArray<>)
* vector<T> ( ), Where T stands for __Template__; (Template pros: no extra space cost during construction;)

### Initialization:
1. 1D:
```
vector<int> vec (n);        // a vector fulfilled with n 0s
vector<int> vec (n, x);     // a vector fullfilled with n xs.
vector<int> vec = {};       // empty vec == stack.
```

2. 2D:
```
vector<vector<int>> mat(m, vector<int> (n, x));
vector<vector<int>> mat(m, vector<int> (n);
```

3. 3D:
```
vector<vector<vector<int>>> tsr(l, vector<vector<int>> (m, vector<int> (n)));
```
### APIs:
* ordinary APIs:
```
push_back();
pop_back();
back();
front();
size();
vec[i];
```
* iterate 
```
for (auto it = vec.begin(); it != vec.end(); it++) {
    value = *it;
}
```

## LinkedList (rare)
* list<T>, again I don't use this :)

## TreeMap (map<>, set<>)
* set<T>
* map<T>

For those two data structure, since Binary Search Tree, time complexity O(log_n)

## HashMap (unordered_map<>, unordered_set<>)
* unordered_map<T>
* unordered_set<T>

### Initialization:
```
unordered_map<int, int> map;
```
### APIs:
* insert :
```
map[key] = value;
map.insert({key, value});
```
* get:
```
value = map[key];
value = map.at(key);
```
* check:
```
map.contain(key);
```
```
auto it = map.find(key);
return it == map.end() ? 0 : 1;
```
* iterate:
```
for (auto it = map.begin(); it != map.end(); it++) {
    key = (*it).first;
    value = (*it).second;
}
```

__notice__: c++ iterator is a close left open right set which means`map.end()` out of the boundry of the iterator;


OR:
```
for (auto it = map.begin(); it != map.end(); it++) {
    key = it -> first;
    value = it -> second;
}
```

OR:
```
for (auto& it : map) {
    key = it.first;
    value = it.second;
}
```
## Heap/Priority Queue (priority_queue<>)
* priority_queue<T> 

__Please notice that pq in c++ is a max heap__
__Please notice that #include <queue>__
### Initialization:
```
priority_queue<int> pq;         // max heap
priority_queue<int, vector<int>, greater<int>> pq;      // second argument: container, third argument: comparitor
```

```
vector<int> vec = {1,2,3,4};
priority_queue<int, vector<int>, greater<int>> pq(vec.begin(), vec.end());
```

### APIs:
```
pq.push(x);
int x = pq.top();
pq.pop();
```


## Deque/ Queue / Stack (deque<>, queue<>, vector<>)
* deque<T>
* queue<T>
* vector<T>

### Queue initialization:
```
queue<int> q;
```
### Queue APIs:
```
q.push(x);
q.pop();
int fist = q.front();
int last = q.back();
```

### Deque initialization:
```
deque<int> dq;
```
### Deque APIs:
```
dq.push_back();
dq.pop_back();
dq.push_front();
dq.pop_front();
dq.front();
dq.back();
dq.at();        //quiet similar to vector
```


## Pair/ Tuple (pair<>, tuple<>)
* pair<T1, T2> 
* tuple<T1, T2, ...>

## STL API
* sort
```
std::sort(begin_addres, end_addres);
std::sort(vec.begin(), vec.end());
std::sort(vec.begin(), vec.begin() + k);
```
* find
```
std::find(vec.begin(), vec.end(), target); // vec.end() is a pointer pointing to the back of container's boundry
```
* reverse
```
std::reverse(iter_begin, iter_end);
```

## Compare class
```
typedef pair<int, string> p;
class Greater_string_length {
public:
    bool operator() pair(p n1, p n2) {
    return n1.length() > n2.length();
    }
};
vector<p> vec = {n1, n2, n3};
priority_queue<p, vector<p>, Greater_string_length> pq(vec.begin(), vec.end());
```
