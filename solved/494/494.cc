//20043 {{ProblemID}}
//Chapter: Problem Name 
//Brad Yinger

#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <numeric>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

#define foreach(x, v) for (typeof (v).begin() x = (v).begin(); x != (v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cout << #x " is " << x << endl

using namespace std;

int main() {
	string str;
	while(getline(cin, str)) {
		int count = 0;
		bool in_alpha_section = false;
		foreach(iter, str) {
			if(isalpha(*iter)) {
				in_alpha_section = true;
			}
			else if(in_alpha_section) {
				in_alpha_section = false;
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
