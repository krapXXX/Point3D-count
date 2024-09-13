#pragma once
class Point3D
{
	int x;
	int y;
	int z;
	static int count;
public:

	static int GetCount();
	Point3D();
	Point3D(int x);
	Point3D(int x, int  y);
	Point3D(int x, int y, int z);
	void Input(int x, int y, int z);
	void Input();
	void Show();
	Point3D Sum(Point3D& b);
	Point3D Mult(Point3D& b);
	Point3D& Sum(int a, int b, int c);//return * this
	Point3D& Mult(int a, int b, int c);//return * this
	Point3D& Min(int a, int b, int c);//return * this
	Point3D& Div(int a, int b, int c);//return * this
	~Point3D();
};

