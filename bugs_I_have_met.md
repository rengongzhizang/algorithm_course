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