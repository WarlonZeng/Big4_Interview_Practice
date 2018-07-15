#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i = 1, j = n; i <= n; i++, j--) {
        for (int x = 0; x < j - 1; x++) {
            cout << " ";
        }
        for (int y = 0; y < i; y++) {
            cout << "#";
        }

        cout << endl;
    }
    
    return 0;
}
