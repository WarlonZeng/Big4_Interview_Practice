#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    int pos = 0;
    int neg = 0;
    int zeros = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0)
            pos++;
        if (arr[i] < 0)
            neg++;
        if (arr[i] == 0)
            zeros++;
    }
    

   
    
    cout << float(pos)/float(arr.size()) << endl;
    cout << float(neg)/float(arr.size()) << endl;
    cout << float(zeros)/float(arr.size()) << endl;
    
    return 0;
}
