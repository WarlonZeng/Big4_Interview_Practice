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

	int n;

	string input;
	getline(cin, input);

	stringstream ii(input);

	ii >> n;

	string temp;
	string word;
	char ch;
	int size;
	int i = 0;

	string one = "one";
	string two = "two";
	string three = "three";

	int threeErr = 0;
	int oneErr = 0;
	int twoErr = 0;

	while (n--) {

		getline(cin, temp);
		stringstream ss(temp);
		size = temp.size();

		while (ss >> ch) {
			if (ch != one[i])
				oneErr++;
			if (ch != two[i])
				twoErr++;
			if (ch != three[i])
				threeErr++;
			i++;
		}

		if (oneErr == 1 || oneErr == 0)
			cout << 1 << endl;
		if (twoErr == 1 || twoErr == 0)
			cout << 2 << endl;
		if (threeErr == 1 || threeErr == 0)
			cout << 3 << endl;

		oneErr = 0;
		twoErr = 0;
		threeErr = 0;
		i = 0;

	}
	return 0;
}