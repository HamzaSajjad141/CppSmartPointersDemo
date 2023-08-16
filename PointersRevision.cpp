#include<iostream>
using namespace std;

void sum1(int x, int y)
{
	cout << "The sum is : " << x + y << endl;
}


int main()
{
	// Pointers Revision //
	//What is Pointer? --> DataType which holds the address of other data types
	// * => dereferencing operator //
	// & => address of  operator //
	int a = 3;
	int* b = &a;
	// both line below give same address //
	cout << "The Address of a => " << &a << endl;
	cout << "The Address of a => " << b << endl;
	// below line shows the value // 
	cout << "The Address of a => " << *b << endl;
	// Pointer to Pointer // 
	int x = 4;
	int* y = &x;
	int** z = &y;
	cout << endl;
	cout << "Pointer to Pointer  " << x << endl;
	cout << "The value of x => " << x << endl;
	cout << "The address of x => " << y << endl;
	cout << "The address of x => " << &x << endl;
	cout << "The value of x => " << *y << endl;
	cout << "The address of y => " << &y << endl;
	cout << "value pointed by z => " << *z << endl;
	cout << "value pointer by z using y " << **z << endl;

	// Now modify single pointer and double pointer // 

	*y = 25;
	cout << "The value of x => " << x << endl;
	**z = 50;
	cout << "The value of x => " << x << endl;

	// Pointers and Arrays//
	int arr[5] = { 1,2,3,4,5 };
	int i = 0;
	int* p;
	p = arr;
	while (i < 5)
	{
		cout << arr[i] << endl; // value of array 
		cout << arr << endl; // Address of array
		i++;
	}
	//pointer arithmetic formula =>  //
	cout << endl;
	cout << "The value of arr[0] => " << *p << endl;
	cout << "The value of arr[1] => " << *(p+1) << endl;
	cout << "The value of arr[2] => " << *(p+2) << endl;
	cout << "The value of arr[3] => " << *(p+3) << endl;
	cout << "The value of arr[4] => " << *(p+4) << endl;
	// types to print //
	cout << *(p++) << endl;
	cout << *p << endl;
	cout << *(++p) << endl;

	// Dynamic Allocated Memory //
	int* v = new int;
	*v = 8;
	float* m = new float(20.09);
	cout << endl;
	cout << *v << endl;
	cout << *m << endl;


	cout << endl;
	int* arr1 = new int[3];
	for (int i = 0; i < 3; ++i) 
	{
		arr1[i] = i + 1; // Assigns values to the elements of the dynamically allocated array
		cout << arr[i] << endl;
	}
	delete v; // delete use for free the dynamic allocated memory
	v = nullptr;
	delete m;
	m = nullptr;
	delete [] arr1;
	arr1 = nullptr;

	// pointer to function // 
	void(*func)(int, int);
	func = sum1;
	func(1, 3);


	// Const pointers //
	int r = 5;
	const int* ptr = &r; // we cannot modify the value pointed by ptr
	cout << endl;
	cout << "Const pointer => " << *ptr << endl;

	//---------------The End------------------//




	return 0;
}