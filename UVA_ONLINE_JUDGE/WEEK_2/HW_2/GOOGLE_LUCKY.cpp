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

	int cases;
	string input;

	getline(cin, input);
	stringstream ii(input);

	ii >> cases;

	char site[20][120];
	int max;
	int ranks[20];

	for (int i = 1; i < cases + 1; i++) { 

		max = 0;

		for(int j=1; j<=10; j++) {
            scanf("%s%d", &site[j], &ranks[j]);
            if (ranks[j] > max)
                max = ranks[j];
        }

        cout << "Case #" << i << ":" << endl;

        for (int k=1; k<=10; k++) {
            if (max == ranks[k])
            	cout << site[k] << endl;

        }
    }
  

	return 0;
	// system("PAUSE");
}