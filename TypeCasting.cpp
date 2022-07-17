//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class TypeCasting {
//public:
//
//	int a,b;
//	float c;
//
//};
//
//class TypeCasting1 : public TypeCasting {
//public:
//
//};
//int main() {
//	int a, b;
//	float c;
//	a = 10, b=3;
//	c = (float)a/b;
//	cout << fixed;
//	cout << setprecision(1);
//	cout << "value of c = " << c << "\n";
//	cout << "***********************************************\n";
//	float x = 3.5;
//	int y;
//	y = static_cast<int>(x);
//	cout << "value of y = " << y << "\n";
//	cout << "***********************************************\n";
//	//Static type cast;
//	
//	TypeCasting1 d1;
//	TypeCasting* b1 = (TypeCasting*)(&d1);
//	TypeCasting* b2 = static_cast<TypeCasting*>(&d1);
//
//	cout << "***********************************************\n";
//	//dynamic type cast
//
//	cout << "***********************************************\n";
//	return 0;
//}