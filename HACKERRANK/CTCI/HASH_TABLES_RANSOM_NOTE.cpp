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

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    
    map<string, int> magazine_store;
    map<string, int> ransom_store;
    
    for (int i = 0; i < ransom.size(); i++) {
        ransom_store[ransom[i]]++;
    }
    
    for (int i = 0; i < magazine.size(); i++) {
        magazine_store[magazine[i]]++;
    }
    
    for (const auto &key : ransom_store) {
        //cout << key.first << " " << key.second << endl;
        if (magazine_store[key.first] > key.second) {
            continue;
        }
        if (key.second != magazine_store[key.first]) {
            return false;
        }
    }
    
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
