# Bugs I have ever met
## 2019.5.6
1. 
```
    error: __a space is required between consecutive right angle brackets (use '> >')__
    priority_queue<int, vector<int>, greater<int>> pq(vec.begin(), vec.end());
                                                ^~
                                                > >
    priority_queue<int, vector<int> > pq(vec.begin(), vec.end());
```
2. pointers initialization needs a `new` key word
3. in real engineering, use dereference like `std::` all the time
4. `std::unordered_map::find()/std::unordered_set::find()` returns pointers; `std::unordered_map::contains()/std::unordered_set::contains()` returns booleans(only start with c++ 20, so it's risky to use this api).

## 2019.5.9
1. .begin() returns a iterator, .front() returns a reference.
2. 