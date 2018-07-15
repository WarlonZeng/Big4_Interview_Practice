#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int lonely_integer(vector < int > a) {
    map<int, int> kvstore;
    
    for (int i = 0; i < a.size(); i++) {
        kvstore[a[i]] += 1;
        //cout << kvstore[a[i]];
    }
    //cout << endl;
    for (const auto& key: kvstore) {
        if (key.second == 1) {
            return key.first;
        }
    }
    return -999;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    cout << lonely_integer(a) << endl;
    return 0;
}
