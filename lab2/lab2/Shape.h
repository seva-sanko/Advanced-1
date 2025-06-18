#pragma once
#include "iostream"
class Vector;

class Shape {
private:
    static int Count;
    static Shape* shapes[1000];

public:
    Shape();
    virtual ~Shape();
    virtual void Move(Vector& v) = 0;
    virtual void Out();
    virtual double Area();
    static void PrintCount();
    static int GetCount();
    static void AddShape(Shape* shape);
    Shape* GetShape(int index);

};

class Vector;



















//#pragma once
//class Vector;
////#include "MyVector.h"
//#include "iostream"
//class Shape{
//public:
//    static int Count;
//
//    static Shape* shapes[1000];  // Объявление массива указателей
//
//    static void PrintCount() {
//        std::cout << "Now there are " << Count << " shapes." << std::endl;
//    }
//
//    Shape() {
//        Count++;
//    }
//
//    virtual ~Shape() {
//        Count--;
//    }
//
//    virtual void Move(Vector& v) = 0;  // Чисто виртуальная функция для перемещения
//    virtual void Out() = 0;  // Чисто виртуальная функция для вывода
//    virtual double Area() = 0;  // Чисто виртуальная функция для вычисления площади
//
//
//    bool operator==(const Shape& other) const
//    {
//        return false;
//    }
//};

