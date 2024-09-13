#include "Point3D.h"
#include <iostream>
using namespace std;
int Point3D::GetCount()
{
	return count;
}
Point3D::Point3D()
{
	x = y = z = 0;
	count++;
}

Point3D::Point3D(int x)
{
	x = x;
}

Point3D::Point3D(int x, int y) :Point3D(x)
{
	y = y;
}

Point3D::Point3D(int x, int y, int z) :Point3D(x, y)
{
	count++;
	z = z;
}

void Point3D::Input(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point3D::Input()
{
	x = rand() % 10;
	y = rand() % 10;
	z = rand() % 10;
}

void Point3D::Show()
{
	cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
}

Point3D Point3D::Sum(Point3D& b)
{
	Point3D rez;
	rez.x = x + b.x;
	rez.y = y + b.y;
	rez.z = z + b.z;
	return rez;
}

Point3D Point3D::Mult(Point3D& b)
{
	Point3D rez;
	rez.x = x * b.x;
	rez.y = y * b.y;
	rez.z = z * b.z;
	return rez;
}

Point3D& Point3D::Sum(int a, int b, int c)
{
	x += a;
	y += b;
	z += c;
	return *this;
}

Point3D& Point3D::Mult(int a, int b, int c)
{
	x *= a;
	y *= b;
	z *= c;
	return *this;
}

Point3D& Point3D::Min(int a, int b, int c)
{
	x -= a;
	y -= b;
	z -= c;
	return *this;
}

Point3D& Point3D::Div(int a, int b, int c)
{
	x /= a;
	y /= b;
	z /= c;
	return *this;
}

Point3D::~Point3D()
{
	count--;
}

