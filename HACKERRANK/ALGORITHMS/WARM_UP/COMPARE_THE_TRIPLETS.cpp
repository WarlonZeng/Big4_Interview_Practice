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
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    int a_score = 0;
    int b_score = 0;
    
    if (a0 > b0)
        a_score++;
    else if (b0 > a0)
        b_score++;
    
    if (a1 > b1)
        a_score++;
    else if (b1 > a1)
        b_score++;
    
    if (a2 > b2)
        a_score++;
    else if (b2 > a2)
        b_score++;
    
    cout << a_score << " " << b_score;
    return 0;
}
