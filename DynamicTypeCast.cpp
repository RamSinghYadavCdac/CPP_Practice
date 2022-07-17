//#include<iostream>
//using namespace std;
//
//class Base {
//
//public:
//	virtual void print() {
//		cout << "Base\n";
//	}
//};
//
//class Derived1 : public Base {
//public:
//	void print() {
//		cout << "Derived1\n";
//	}
//};
//
//class Derived2 : public Base {
//
//public:
//	void print() {
//		cout << "Derived2\n";
//	}
//};
//
//int main() {
//
//	Derived1 d1;
//
//	// dynamic type cast
//	Base* bp = dynamic_cast<Base*>(&d1);
//
//	//dynamic type cast
//	Derived1* dp = dynamic_cast<Derived1*>(bp);
//
//	//Not valid type cast so it will return null
//	Derived2* dp2 = dynamic_cast<Derived2*>(bp);
//	if (dp == nullptr)
//		cout << "NULL\n";
//	else
//		cout << "Not NULL\n";
//
//	if (dp2 == nullptr)
//		cout << "NULL\n";
//	else
//		cout << "Not NULL\n";
//	return 0;
//}