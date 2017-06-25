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

int number_needed(string a, string b) {
    map<char, int> string1;
    map<char, int> string2;
    
    for (int i = 0; i < a.size(); i++) { // c d e 
        string1[a[i]]++; 
        if (string2[a[i]] == 0) {
            string2[a[i]] = 0;
        }
    }

    for (int i = 0; i < b.size(); i++) {
        string2[b[i]]++;
        if (string1[b[i]] == 0) {
            string1[b[i]] = 0;
        }
    }
    
    int delete_elements = 0;
    
    for (const auto &key: string1) {
        delete_elements += (max(key.second, string2[key.first]) - min(key.second, string2[key.first]));
    }
    
    //for (const auto &key : string1) {
    //    cout << key.first << key.second << endl;
    //}
    
    //cout << endl;
    
    //for (const auto &key : string2) {
    //    cout << key.first << key.second << endl;
    //}
    
    return delete_elements;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
