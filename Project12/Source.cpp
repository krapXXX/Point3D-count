#include<iostream>
#include "Point3D.h"
#include "Time.h"
using namespace std;

int Point3D::count = 0;

int main()
{
	srand(time(0));
	Point3D obj1;
	
	Point3D obj2(1,3,4);
	Point3D obj3;

	obj1.Input(1, 2, 5);
	obj1.Show();

	Point3D rezS = obj1.Sum(10, 20, 30);
	Point3D rezMul = obj1.Mult(10, 20, 30);
	Point3D rezM = obj1.Min(10, 20, 30);
	Point3D rezD = obj1.Div(10, 20, 30);
	cout << "Sum:   ";
	rezS.Show();
	cout << "Mult:  ";
	rezMul.Show();
	cout << "Min:   ";
	rezM.Show();
	cout << "Div:   ";
	rezD.Show();
	obj1.Show();
	cout << endl << "Amount of elements: " << Point3D::GetCount() << endl;
	system("pause");
	return 0;
}

