#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int alt_chars(string test){

    int del = 0;
    int i = 0;
    
    while (test[i + 1] != NULL) {
        if (test[i] == test[i + 1]) {
            del++;
        }
        i++;
    }
    
    return del;
        
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin >> n;
    
    string tests;
    
    while (cin >> tests) {
        cout << alt_chars(tests) << endl;
    }
    
    return 0;
}
