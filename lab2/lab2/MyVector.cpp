#pragma once
#include "stdafx.h"
#include "Shape.h"
#include "MyVector.h"

//int Shape::Count = 0; // Инициализация статической переменной

Vector::Vector(double c1, double c2)
{
	x = c1;   y = c2;
	AddShape(this);
	//Count++; // Увеличиваем счетчик при создании объекта
}

Vector::Vector()
{
	x = y = 0.;
	AddShape(this);
	//Count++; // Увеличиваем счетчик при создании объекта
}

void Vector::Out()
{
	cout << "\nVector:  x = " << x << ",  y = " << y;
}

// Определение методов-геттеров
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
	//Count++; // Увеличиваем счетчик при создании объекта
}

Vector::~Vector()
{
	AddShape(this);
	//Count--; // Уменьшаем счетчик при удалении объекта
}


//====== Переопределение операций =====//
Vector& Vector::operator= (const Vector& v)	// Присвоение
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
	return sqrt(x * x + y * y); // Вычисление модуля вектора
}

bool Vector::operator>(const Vector& other) const {
	return (!(*this) > !other); // Сравниваем модули векторов
}

//bool Vector::operator==(const Vector& other) const {
//	return (x == other.x && y == other.y); // Сравниваем координаты векторов
//}

bool Vector::operator==(const Vector& other) const {
	// Сравниваем компоненты с учетом погрешности DBL_EPSILON
	return (fabs(x - other.x) < DBL_EPSILON && fabs(y - other.y) < DBL_EPSILON);
}

Vector Vector::operator*(double scalar) const {
	return Vector(x * scalar, y * scalar);
}

Vector operator*(double scalar, const Vector& v) {
	return Vector(scalar * v.x, scalar * v.y);
}

double Vector::operator*(const Vector& other) const {
	return x * other.x + y * other.y; // Скалярное произведение
}

// Реализации чисто виртуальных функций из класса Shape
void Vector::Move(Vector& v) {
	
}


double Vector::Area() {
	return 0;
}






















