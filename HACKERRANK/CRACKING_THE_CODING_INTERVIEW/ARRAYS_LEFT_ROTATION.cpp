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

vector<int> array_left_rotation(vector<int> a, int n, int d) {
    
    int temp[100000];
    vector<int> new_vector;
    int new_position;
    
    for (int i = 0; i < n; i++) {
        new_position = i - d;
        if (new_position < 0)
            new_position = new_position + n;
        temp[new_position] = a[i];
    }
    
    for (int j = 0; j < n; j++) {
        new_vector.push_back(temp[j]);
    }
    
    return new_vector;
}

int main(){
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    vector<int> output = array_left_rotation(a, n, d);
    
    for(int i = 0; i < n; i++)
        cout << output[i] << " ";
    cout << endl;
    
    return 0;
}
