#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int sum_1 = 0;
    int sum_2 = 0;
    
    for (int i = 0; i < n; i++) {
        sum_1 = sum_1 + a[i][i];
    }
    

    
    for (int x = 0, y = n -1; x < n; x++, y--) {
        //cout << a[x][y];
        sum_2 = sum_2 + a[x][y];
    }
    
    cout << abs(sum_1 - sum_2);
    //cout << sum_2;
    //cout << sum_1;
    
    return 0;
}
