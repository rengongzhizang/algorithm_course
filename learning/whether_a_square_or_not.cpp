#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <limits.h>

using namespace std;

typedef std::pair<vector<int>, vector<int>> coordin;

coordin find_topleft_bottom_right(vector<vector<int>>& clickers) {
    if (clickers.empty()) {
        return coordin();
    }
    int leftmost = INT_MAX;
    int rightmost = INT_MIN;
    int topmost = INT_MIN;
    int bottommost = INT_MAX;
    for (auto& point : clickers) {
        leftmost = std::min(point[0],leftmost);
        rightmost = std::max(point[0], rightmost);
        topmost = std::max(point[1], topmost);
        bottommost = std::min(point[1], bottommost);
    }
    vector<int> topleft = {leftmost,topmost};
    vector<int> bottomright = {rightmost,bottommost};
    coordin coor(topleft, bottomright);
    return coor;
}

bool check_if_a_fulfilled_square(vector<vector<int>>& clickers) {
    if (clickers.empty()) {
        return false;
    }
    coordin coor = find_topleft_bottom_right(clickers);
    int width = ((coor.second)[0] - (coor.first)[0]) + 1;
    int length = ((coor.first)[1] - (coor.second)[1]) + 1;
    return width * length == clickers.size() ? true : false;
}

void cout_coor(coordin& coor) {
    for (auto& i : coor.first) {
        cout << i << ' ';
    }
    cout << '\n';
    for (auto& i : coor.second) {
        cout << i << ' ';
    }
    cout << '\n';
}

int main() {
    cout << boolalpha;
    vector<vector<int>> test0 = {};                     // Assume return 0 when we have an empty input
    cout << check_if_a_fulfilled_square(test0) << endl;
    /* test case 1:
            x
        x   x   x
                x
    */
    vector<vector<int>> test1 = {{2,0}, {0,1}, {1,1}, {2,1}, {1,2}};
    cout << check_if_a_fulfilled_square(test1) << endl;
    /*  test case 2:
        x   x   x
    */
    vector<vector<int>> test2 = {{1,1}, {1,2}, {1,3}};
    cout << check_if_a_fulfilled_square(test2) << endl;
    /*  test case 3:
        x
    */
    vector<vector<int>> test3 = {{1,2}};
    cout << check_if_a_fulfilled_square(test3) << endl;
    /*  test case 4:
        x   x
        x   x           
        x   x           x   x
    */
    vector<vector<int>> test4 = {{0,0}, {1,0}, {3,0}, {4,0}, {0,1}, {1,1}, {0,2}, {1,2}};
    cout << check_if_a_fulfilled_square(test4) << endl;
    /*  test case 5:
        x   x
        x   x
        
    */
    vector<vector<int>> test5 = {{0,1}, {1,1}, {0,2}, {1,2}};
    cout << check_if_a_fulfilled_square(test5) << endl;
    /*  test case 6:
        x   x   x
        x       x     
        x   x   x
    */
    vector<vector<int>> test6 = {{0,0}, {0,1}, {0,2}, {1,0}, {1,2}, {2,0}, {2,1}, {2,2}};
    cout << check_if_a_fulfilled_square(test6) << endl;
    return 0;
}