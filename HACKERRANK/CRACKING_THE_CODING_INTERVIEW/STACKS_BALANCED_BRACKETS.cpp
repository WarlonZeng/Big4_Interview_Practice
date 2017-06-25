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

// famous problem done in class
bool is_balanced(string expression) {
    stack<char> tokenizer;
    for (int i = 0; i < expression.size(); i++) {
        switch (expression[i]) {
            case '(': case '[': case '{': tokenizer.push(expression[i]); break;
            case '}': if (tokenizer.empty() || tokenizer.top() != '{') return false; tokenizer.pop(); break;
            case ']': if (tokenizer.empty() || tokenizer.top() != '[') return false; tokenizer.pop(); break;
            case ')': if (tokenizer.empty() || tokenizer.top() != '(') return false; tokenizer.pop(); break;
            default: break;
        }
    }
    return tokenizer.empty();
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
