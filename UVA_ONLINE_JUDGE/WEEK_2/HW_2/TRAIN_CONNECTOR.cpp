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
	// vector<int> male;
	// vector<int> female;

	int cases;
	string input;

	getline(cin, input);
	stringstream ii(input);

	ii >> cases;

	int male = 0;
	int female = 0;

	char ch;

	string temp;
	char genders;


	while (cases--) {
		male = 0;
		female = 0;

		getline(cin, temp);
		stringstream ss(temp);

		while (ss >> genders) {
			// cout << genders << endl;
			if (genders == 'M')
				male++;
			if (genders == 'F')
				female++;

		}

		// cout << male << endl;
		// cout << female << endl;

		if ((male == female) && temp.size() > 2)
			cout << "LOOP" << endl;
		else
			cout << "NO LOOP" << endl;

	}

	return 0;
}