//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
///*
//	[capture clause] (parameter)-> return type{
//		defination of method;
//	}
//	Generally return type are evaluate by the compiler;
//*/
//class LambdaEx {
//
//public:
//	void printValue(vector<int>);
//	void enterValue(int);
//};
//
//void LambdaEx::printValue(vector<int> vr) {
//
//	for_each(vr.begin(), vr.end(), [](int i) {
//		cout << i << " ";
//	});
//	cout << "\n";
//}
//
//void LambdaEx::enterValue(int vr) {
//
//}
//int main()
//{
//	vector<int> v1 = {10,2,3,4,5};
//	cout << "*******************************************************\n";
//	for (auto it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << "\n";
//	cout << "*******************************************************\n";
//
//	LambdaEx lobj;
//
//	lobj.printValue(v1);
//
//	cout << "*******************************************************\n";
//	//pass by reference 
//	auto pushinto = [&](int m)
//	{
//		v1.push_back(m);
//	};
//
//	pushinto(50);
//	cout << "*******************************************************\n";
//	lobj.printValue(v1);
//	cout << "*******************************************************\n";
//	cout << "Pass by value\n";
//	[v1]() {
//		for (auto it = v1.begin(); it != v1.end(); it++) {
//			cout << *it << " ";
//		}
//	};
//	return 0;
//}