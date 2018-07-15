#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

unsigned int flip_bits(unsigned int A) {
    stack<int> bits;
    int count = 0;
    for (int i = 0; i < 32; i++) {
        bits.push(A % 2);
        A = A / 2;
        count++;
    }
    
    unsigned num = 0;
    string buf = "";
    
    for (int i = 0; i < 32 - count; i++) {
        buf += "0";
    }
    
    //cout << buf << endl;
    
    for (int i = 0; !bits.empty(); i++) {
        buf += to_string(bits.top());
        bits.pop();
    }
    
    //cout << buf << endl;
    
    string flip_buf = "";
    
    for (int i = 0; i < buf.size(); i++) {
        if (buf[i] == '1') {
            flip_buf += "0";
        }
        if (buf[i] == '0') {
            flip_buf += "1";
        }
    }
    
    //cout << flip_buf << endl;
    
    for (int i = 31, j = 0; i >= 0; i--, j++) {
        if (flip_buf[j] == '1') {
            num = num + pow(2, i);
        }
    }
    
    //cout << num << endl;
    
    return num; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    
    cin >> n;
    
    unsigned int x;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << flip_bits(x) << endl;
    }
    
    return 0;
}
