#include <iostream>
using namespace std;

void doStuff(int ar_size, int * ar) {
	// your code here
}

int main() {
	int t;
	cin >> t;
	for(int j=0; j<t; j++){
		int ar_size;
		cin >> ar_size;
		int ar[ar_size];
		for(int i = 0; i < ar_size; i++) {
			cin >> ar[i];
		}
		doStuff(ar_size, ar);
		}
	return 0;
}
