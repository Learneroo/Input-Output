#include <iostream>
using namespace std;

int doStuff(int a, int b) {
    return a + b;
}

int main() {
	int t;
	cin >> t;
	for(int j=0; j<t; j++){
		int a;
		int b;
		cin >> a;
		cin >> b;
		cout << doStuff(a, b) << endl;;
	}
	return 0;
}