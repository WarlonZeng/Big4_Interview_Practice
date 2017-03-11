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
#include <stdio.h>
#include <cctype>
//#define M_PI 3.1415926535897932

using namespace std;

int main() {

	string input;
	char ch;

	while (getline(cin, input)) {
		stringstream ss(input);
		ss >> noskipws;

		while (ss >> ch) {
			if (ch == ' ')
				printf(" ");
			if (ch == '\n')
				printf("\n");
			if (ch == '1')
				printf("`");
			if (ch == '2')
				printf("1");
			if (ch == '3')
				printf("2");
			if (ch == '4')
				printf("3");
			if (ch == '5')
				printf("4");
			if (ch == '6')
				printf("5");
			if (ch == '7')
				printf("6");
			if (ch == '8')
				printf("7");
			if (ch == '9')
				printf("8");
			if (ch == '0')
				printf("9");
			if (ch == '-')
				printf("0");
			if (ch == '=')
				printf("-");
			if (ch == 'W')
				printf("Q");
			if (ch == 'E')
				printf("W");
			if (ch == 'R')
				printf("E");
			if (ch == 'T')
				printf("R");
			if (ch == 'Y')
				printf("T");
			if (ch == 'U')
				printf("Y");
			if (ch == 'I')
				printf("U");
			if (ch == 'O')
				printf("I");
			if (ch == 'P')
				printf("O");
			if (ch == '[')
				printf("P");
			if (ch == ']')
				printf("[");
			if (ch == '\\')
				printf("]");
			if (ch == 'S')
				printf("A");
			if (ch == 'D')
				printf("S");
			if (ch == 'F')
				printf("D");
			if (ch == 'G')
				printf("F");
			if (ch == 'H')
				printf("G");
			if (ch == 'J')
				printf("H");
			if (ch == 'K')
				printf("J");
			if (ch == 'L')
				printf("K");
			if (ch == ';')
				printf("L");
			if (ch == '\'')
				printf(";");
			if (ch == 'X')
				printf("Z");
			if (ch == 'C')
				printf("X");
			if (ch == 'V')
				printf("C");
			if (ch == 'B')
				printf("V");
			if (ch == 'N')
				printf("B");
			if (ch == 'M')
				printf("N");
			if (ch == ',')
				printf("M");
			if (ch == '.')
				printf(",");
			if (ch == '/')
				printf(".");
		}
		cout << endl;
	}

	return 0;
}