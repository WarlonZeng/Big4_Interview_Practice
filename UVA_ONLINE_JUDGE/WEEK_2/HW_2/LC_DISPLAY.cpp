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

int main() {
	char ch;
	int s;
	int n;
	int hat;

	string temp = "";

	vector<char> char_nums;
	vector<int> nums;
	string input;

	while (getline(cin, input)) {
		stringstream ss(input);

		ss >> s;

		hat = (s);

		while (ss >> ch) {
			nums.push_back(int(ch) - 48);
		}

		if (s == 0 && (nums[0] == 0))
			break;

		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 1) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + " ";
				temp = temp + " ";
			}
			if (nums[i] == 2) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++) {
					temp = temp + "-";
				}
				temp = temp + " ";
			}
			if (nums[i] == 3) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 4) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + " ";
				temp = temp + " ";
			}
			if (nums[i] == 5) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 6) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 7) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 8) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 9) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			cout << temp << " ";
			temp.clear();
		}

		cout << endl;

		for (int x = 0; x < hat; x++) {
			for (int i = 0; i < nums.size(); i++) {
				if (nums[i] == 0) {
					temp = temp + "|";
					for (int j = 0; j < hat; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 1) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 2) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 3) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 4) {
					temp = temp + "|";
					for (int j = 0; j < hat; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 5) {
					temp = temp + "|";
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
				}
				if (nums[i] == 6) {
					temp = temp + "|";
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
				}
				if (nums[i] == 7) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 8) {
					temp = temp + "|";
					for (int j = 0; j < hat; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 9) {
					temp = temp + "|";
					for (int j = 0; j < hat; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				cout << temp << " ";
				temp.clear();
			}
			cout << endl;
		}

		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + " ";
				temp = temp + " ";
			}
			if (nums[i] == 1) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + " ";
				temp = temp + " ";
			}
			if (nums[i] == 2) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 3) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 4) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 5) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 6) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 7) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + " ";
				temp = temp + " ";
			}
			if (nums[i] == 8) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 9) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			cout << temp << " ";
			temp.clear();
		}

		cout << endl;

		for (int x = 0; x < hat; x++) {
			for (int i = 0; i < nums.size(); i++) {
				if (nums[i] == 0) {
					temp = temp + "|";
					for (int j = 0; j < hat; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 1) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 2) {
					temp = temp + "|";
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
				}
				if (nums[i] == 3) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 4) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 5) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 6) {
					temp = temp + "|";
					for (int j = 0; j < hat; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 7) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 8) {
					temp = temp + "|";
					for (int j = 0; j < hat; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				if (nums[i] == 9) {
					for (int j = 0; j < hat + 1; j++)
						temp = temp + " ";
					temp = temp + "|";
				}
				cout << temp << " ";
				temp.clear();
			}
			cout << endl;
		}

		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 1) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + " ";
				temp = temp + " ";
			}
			if (nums[i] == 2) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++) {
					temp = temp + "-";
				}
				temp = temp + " ";
			}
			if (nums[i] == 3) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 4) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + " ";
				temp = temp + " ";
			}
			if (nums[i] == 5) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 6) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 7) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + " ";
				temp = temp + " ";
			}
			if (nums[i] == 8) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			if (nums[i] == 9) {
				temp = temp + " ";
				for (int j = 0; j < hat; j++)
					temp = temp + "-";
				temp = temp + " ";
			}
			cout << temp << " ";
			temp.clear();
		}

		cout << endl;

		cout << endl;

		nums.clear();


	}
	return 0;
	// system("PAUSE");
}