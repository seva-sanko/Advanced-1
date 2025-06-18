#pragma once

#include "MyVector.h"

class Rect : public Shape {
private:
    Vector ptLT, ptRB;

public:
    Rect(const Vector& v1, const Vector& v2);
    Rect(double left, double top, double right, double bottom);
    void Inflate(double delta = 1.0);
    void Inflate(double deltaX, double deltaY);
    void Inflate(double left, double top, double right, double bottom);
    void Out() override;
    virtual void Move(Vector& v) override;
    virtual double Area() override;
    void SetLeftTop(double x, double y);
    void SetRightBottom(double x, double y);
};
















//#pragma once
//#include "Shape.h"
//#include "MyVector.h"
//class Rect
//{
//private:
//    Vector ptLT; // Левый верхний угол
//    Vector ptRB; // Правый нижний угол
//
//public:
//    Rect(const Vector& leftTop, const Vector& rightBottom) : ptLT(leftTop), ptRB(rightBottom) {}
//
//    Rect(double left, double top, double right, double bottom) : ptLT(left, top), ptRB(right, bottom) {}
//
//    Rect() : ptLT(0.0, 0.0), ptRB(0.0, 0.0) {}
//
//    double GetX1() const;
//    double GetX2() const;
//    double GetY1() const;
//    double GetY2() const;
//
//    // Методы для доступа к координатам прямоугольника
//    Vector GetLeftTop() const {
//        return ptLT;
//    }
//
//    Vector GetRightBottom() const {
//        return ptRB;
//    }
//
//    Rect& operator=(const Rect& other);
//
//    void SetLeftTop(double x, double y);
//    void SetRightBottom(double x, double y);
//
//    void Inflate(double delta = 1.0);
//    void Inflate(double deltaX, double deltaY);
//    void Inflate(double left, double top, double right, double bottom);
//
//    void Out() const; // Объявление метода Out
//   
//};

