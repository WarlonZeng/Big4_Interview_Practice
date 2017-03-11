#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <new>
#include <vector>
#include <ctime>
#include <istream>
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
#define M_PI 3.1415926535897932

// Warlon Zeng N11183332

using namespace std;

int main() {

	vector<int> vecSums;

	int n;
	int trash;
	int sum = 0;

	std::string input;


	while (std::getline(std::cin, input)) {
		std::stringstream stream(input);

		while (stream >> n) {
			sum += n;
		}

		if (sum != 0) {
			vecSums.push_back(sum);
		}
		sum = 0;

	}

	for (int i = 0; i < vecSums.size(); i++) {
		cout << vecSums[i] << endl;
		cout << endl;
	}

	system("PAUSE");
}