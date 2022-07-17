#include<iostream>
#include<vector>
#include<string>
using namespace std;

void func(vector<string> arg) {
	cout << "Vector size = " << arg.size() << endl;
}

int main() {
	vector<string> V1(1000000);

	cout << "Before move Vector size = " << V1.size() << endl;

	func(move(V1));

	cout << "After move Vector size = " << V1.size() << endl;

	return 0;
}