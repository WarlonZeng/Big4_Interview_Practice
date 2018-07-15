#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    long sum = 0;
    
    while (cin >> n) {
        sum = sum + n;
    }
    cout << sum;
    return 0;
}
