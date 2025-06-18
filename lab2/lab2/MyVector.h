#pragma once

#include "Shape.h"

class Vector : public Shape {
private:
    double x, y;

public:
    Vector(double c1, double c2);
    Vector();
    Vector(const Vector& other);
    ~Vector();

    double GetX() const;
    double GetY() const;
    void SetX(double newX);
    void SetY(double newY);

    Vector& operator=(const Vector& v);
    Vector operator+(const Vector& v);
    double operator!() const;
    bool operator>(const Vector& other) const;
    bool operator==(const Vector& other) const;
    Vector operator*(double scalar) const;
    friend Vector operator*(double scalar, const Vector& v);
    double operator*(const Vector& other) const;
    void Out() override;
    virtual void Move(Vector& v) override;
    virtual double Area() override;
};























//#pragma once
//class Vector : public Shape
//{
//private:
//	double x, y;	// Координаты вектора на плоскости
//	
//public:
//	//========== Три конструктора
//	Vector(double c1, double c2);
//	Vector();// Default
//
//	Vector(const Vector& other);
//	~Vector();
//
//	double GetX() const; // Геттер для x
//	double GetY() const; // Геттер для y
//
//	void SetX(double newX);
//	void SetY(double newX);
//
//	//====== Переопределение операций =====//
//	Vector& operator= (const Vector& v);	// Присвоение
//	Vector operator+(const Vector& v); // Операция сложения
//	double operator!() const;
//
//	bool operator>(const Vector& other) const;
//	bool operator==(const Vector& other) const;
//
//	Vector operator*(double scalar) const;
//
//	friend Vector operator*(double scalar, const Vector& v);
//	double operator*(const Vector& other) const;
//
//	void Out() override;
//	
//	virtual void Move(Vector& v) override; 
//	virtual double Area() override;  
//
//};


