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

int main(){
    string s;
    cin >> s;
    
    int words = 1;
    char caps;
    
    for (int i = 0; i < s.size(); i++) {
        caps = s[i] - 'a' + 'A';
        if ((caps >= 'A') && (caps <= 'Z'))
            words++;
    }
    
    cout << s.size() - words + 2;
    
    return 0;
}
