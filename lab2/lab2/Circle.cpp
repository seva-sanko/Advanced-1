#include "Circle.h"

Circle::Circle(const Vector& center, double radius) : ptCntr(center), R(radius) {
    AddShape(this);
}

Circle::Circle(double centerX, double centerY, double radius) : ptCntr(centerX, centerY), R(radius) {
    AddShape(this);
}

void Circle::Out()
{
    std::cout << "\nCircle";
}

void Circle::Move(Vector& v)
{

}

double Circle::Area()
{
    return 3.14*R*R;
}

// Реализации методов в классе Circle
