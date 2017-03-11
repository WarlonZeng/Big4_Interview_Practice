#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    //vector<int> arr(n);
    int sum = 0;
    
    //for(int arr_i = 0;arr_i < n;arr_i++){
       //cin >> arr[arr_i];
    while (cin >> n) {
        //cin >> n;
        sum = sum + n;
    }
    
    cout << sum;
    return 0;
}
