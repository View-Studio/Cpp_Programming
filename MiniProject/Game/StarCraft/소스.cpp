//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a = 11;
//	int b = 302;
//
//	int* aPtr = &a;
//	int* a1Ptr = nullptr;
//	a1Ptr = aPtr;
//	int** bPtr = &aPtr;
//	int*** cPtr = &bPtr;
//
//	cout << "1-1. " << aPtr << endl;
//	cout << *aPtr << endl;
//	cout << "1-2. " << a1Ptr << endl;
//	cout << *a1Ptr << endl;
//	*aPtr = 1223;
//
//	cout << "2. " << aPtr << endl;
//	cout << *aPtr << endl;
//	cout << a << endl;
//
//
//	aPtr = &b;
//	cout << "3. " << aPtr << endl;
//	cout << *aPtr << endl;
//
//	return 0;
//}