#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int count = 0;
    
    int val;
    int n;
    int next;
    
    cin >> val;
    cin >> n;
    
    while (cin >> next) {
        if (next == val)
            cout << count;
        count++;
    }
    
    
    return 0;
    
    
    
}
