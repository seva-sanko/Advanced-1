#pragma once
#include "stdafx.h"
#include "Shape.h"
#include "MyVector.h"

//int Shape::Count = 0; // ������������� ����������� ����������

Vector::Vector(double c1, double c2)
{
	x = c1;   y = c2;
	AddShape(this);
	//Count++; // ����������� ������� ��� �������� �������
}

Vector::Vector()
{
	x = y = 0.;
	AddShape(this);
	//Count++; // ����������� ������� ��� �������� �������
}

void Vector::Out()
{
	cout << "\nVector:  x = " << x << ",  y = " << y;
}

// ����������� �������-��������
double Vector::GetX() const {
	return x;
}

double Vector::GetY() const {
	return y;
}

void Vector::SetX(double newX) {
	x = newX;
}

void Vector::SetY(double newY) {
	y = newY;
}

Vector::Vector(const Vector& other)
{
	x = other.x;
	y = other.y;
	AddShape(this);
	//Count++; // ����������� ������� ��� �������� �������
}

Vector::~Vector()
{
	AddShape(this);
	//Count--; // ��������� ������� ��� �������� �������
}


//====== ��������������� �������� =====//
Vector& Vector::operator= (const Vector& v)	// ����������
{
	if (this == &v)
		return *this;
	x = v.x;
	y = v.y;
	return *this;
}

Vector Vector::operator+(const Vector& v) {
	return Vector(x + v.x, y + v.y);
}

double Vector::operator!() const {
	return sqrt(x * x + y * y); // ���������� ������ �������
}

bool Vector::operator>(const Vector& other) const {
	return (!(*this) > !other); // ���������� ������ ��������
}

//bool Vector::operator==(const Vector& other) const {
//	return (x == other.x && y == other.y); // ���������� ���������� ��������
//}

bool Vector::operator==(const Vector& other) const {
	// ���������� ���������� � ������ ����������� DBL_EPSILON
	return (fabs(x - other.x) < DBL_EPSILON && fabs(y - other.y) < DBL_EPSILON);
}

Vector Vector::operator*(double scalar) const {
	return Vector(x * scalar, y * scalar);
}

Vector operator*(double scalar, const Vector& v) {
	return Vector(scalar * v.x, scalar * v.y);
}

double Vector::operator*(const Vector& other) const {
	return x * other.x + y * other.y; // ��������� ������������
}

// ���������� ����� ����������� ������� �� ������ Shape
void Vector::Move(Vector& v) {
	
}


double Vector::Area() {
	return 0;
}






















