#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<iomanip>
#include <utility>
#include<map>
#include<set>
#include<iterator>
#include<stack>
#include<bitset>
#include<queue>
#include<deque>
#define all(v) ((v).begin()) , ((v).end())
#define sz(v) ((int)((v).size()))
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
set<string> st;
set<string> ::iterator it;
map<string, int> mp;
map<string, int> ::iterator itr;
vector<long long> v;
vector<long long> vc;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	while (getline(cin, s)) {
		string str;
		int a = 0, l = 0;
		for (int i = 0; i < s.size(); i++) {
			if (isalpha(s[i]))
				l++;
			else if (l > 0) {
				a++;
				l = 0;
			}

		}
		cout << a << endl;
	}

}
