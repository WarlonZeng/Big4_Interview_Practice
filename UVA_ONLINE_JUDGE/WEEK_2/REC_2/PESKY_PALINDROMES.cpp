#include <iostream>
#include <string>
#include <string.h>
#include <cmath>
#include <new>
#include <vector>
#include <ctime>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <list>
#include <set>
#include <unordered_set>
#include <iterator>
#include <ostream>
#include <array>
#include <forward_list>
#include <stack>
#include <queue>
#include <map>
#include <exception>
#include <unordered_map>
#include <cstdio>
#include <cstdlib>
#include <cctype>

//#define M_PI 3.1415926535897932

using namespace std;

bool palindrome(string& word) {
	int len = word.length();
	int half = (len / 2); // half of the string 

	for (int i = 0, j = len - 1; i <= half; i++, j--) {
		if (word[i] != word[j]) 
			return false;
	}
	return true;
}

int main() {
	string input;
	string temp;
	int n;

	//vector<string> palis;
	map<string, int> palis;
	int len;
	// int j = 0;

	while (getline(cin, input)) {
		for (int i = 0; i < input.length(); i++) {
			for (int j = 1; (i + j) <= input.length(); j++) { // is always sum cuz of substr implementation...
		
				temp = input.substr(i, j);
				// cout << temp << endl;

				if (palindrome(temp)) {
					palis[temp] = 1;
				}
			}

		}

		n = palis.size();

		cout << "The string '" << input << "' contains " << n << " palindromes.\n";
		palis.clear();
	}
	return 0;
}