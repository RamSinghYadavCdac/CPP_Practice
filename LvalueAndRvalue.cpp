//#include<iostream>
//
//using namespace std;
//
//void fun(int&& y) {
//	cout << "Rvalue x = " << y << endl;
//}
//
//void fun1(int& z) {
//	cout << "Lvalue x = " << z << endl;
//}
//int main() {
//
//	int x{ 5 };
//
//	cout << "X value is = " << x << endl;
//
//	fun(x);//Error Lvalue reference
//
//	fun(std::move(x));//We can not use in future;
//
//	fun(5);//Rvalue reference;
//
//	return 0;
//}