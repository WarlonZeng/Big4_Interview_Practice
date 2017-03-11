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

int main() { 

	int cases;
	cin >> cases;

	int list_size_1;
	int list_size_2;

	cin >> list_size_1 >> list_size_2;

	vector<int> list_elements_1(10000, 0);
	vector<int> list_elements_2(10000, 0);

	int n;

	for (int i = 0; i < list_size_1; i++) {
		cin >> n;
		list_elements_1[n]++;
	}

	for (int i = 0; i < list_size_2; i++) {
		cin >> n;
		list_elements_2[n]++;
	}

	// for (int i = 0; i < list_size_1; i++) {
	// 	cout << list_elements_1[i] << " ";
	// }

	// cout << endl;

	//for (int i = 0; i < list_size_1; i++) {
	//	cout << list_elements_2[i] << " ";
	//}

	int remove = 0;

	for (int i = 0; i < 10000; i++) {
		remove = remove + abs(list_elements_1[i] - list_elements_2[i]);
	}

	cout << remove;

	return 0;

}