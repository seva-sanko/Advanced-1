#pragma once

#include "MyVector.h"

class Circle : public Shape {
private:
    Vector ptCntr;
    double R;

public:
    Circle(const Vector& center, double radius);
    Circle(double centerX, double centerY, double radius);
    void Out() override;
    virtual void Move(Vector& v) override;
    virtual double Area() override;
};
