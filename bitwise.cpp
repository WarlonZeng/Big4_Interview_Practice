#include <iostream>
#include <string>
#include <string.h>
#include <cmath>
#include <new>
#include <vector>
#include <ctime>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <list>
#include <set>
#include <unordered_set>
#include <iterator>
#include <ostream>
#include <array>
#include <forward_list>
#include <stack>
#include <queue>
#include <map>
#include <exception>
#include <unordered_map>
#include <cstdio>
#include <cstdlib>
#include <cctype>

//#define M_PI 3.1415926535897932

using namespace std;

int number_of_ones(unsigned int x) {
    int total_ones = 0;
    //while (x != 0) {
    //  cout << x << endl;
    //  x = x & (x-1);
    //  total_ones++;
    //}

    while (x != 0) {
        if (x % 2 == 1)
            total_ones++;
        x = x / 2;
    }



    return total_ones;
}

int main() {
    int x;
    cout << "unsigned int: ";
    cin >> x;

    int ans;
    ans = number_of_ones(x);
    cout << "number of 1's: " << ans << endl;
    
    return 0;
}