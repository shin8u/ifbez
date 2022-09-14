#include <iostream>
#include <fstream>
using namespace std;
string reverse(string s) {
	string rev;
	for (int i = s.size() - 1; i >= 0; i--) {
		rev = rev.append(1, s[i]);
	}
	return rev;
}
int main()
{
	string s[100];
	ifstream f("input.txt");
	ofstream h("output.txt");
	for (int i = 0; i < 100; i++) {
		f >> s[i];
		string rev = reverse(s[i]);
		h << rev<<' ';
	}
}
