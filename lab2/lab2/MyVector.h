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
//	double x, y;	// ���������� ������� �� ���������
//	
//public:
//	//========== ��� ������������
//	Vector(double c1, double c2);
//	Vector();// Default
//
//	Vector(const Vector& other);
//	~Vector();
//
//	double GetX() const; // ������ ��� x
//	double GetY() const; // ������ ��� y
//
//	void SetX(double newX);
//	void SetY(double newX);
//
//	//====== ��������������� �������� =====//
//	Vector& operator= (const Vector& v);	// ����������
//	Vector operator+(const Vector& v); // �������� ��������
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


