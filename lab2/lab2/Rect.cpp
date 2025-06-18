#include "Rect.h"

Rect::Rect(const Vector& v1, const Vector& v2) : ptLT(v1), ptRB(v2) {
    AddShape(this);
}

Rect::Rect(double left, double top, double right, double bottom) : ptLT(left, top), ptRB(right, bottom) {
    AddShape(this); // ��������� ������ � ������ shapes
}

// �������� ������ ��� ��������� ���������
void Rect::SetLeftTop(double x, double y) {
    ptLT.SetX(x);
    ptLT.SetY(y);
}

void Rect::SetRightBottom(double x, double y) {
    ptRB.SetX(x);
    ptRB.SetY(y);
}

// ������ Inflate

// ������� 1: ����� ���������� (�� ��������� = 1)
void Rect::Inflate(double delta) {
    double left = delta;
    double top = delta;
    double right = delta;
    double bottom = delta;
    SetLeftTop(ptLT.GetX() - left, ptLT.GetY() + top);
    SetRightBottom(ptRB.GetX() + right, ptRB.GetY() - bottom);
}

// ������� 2: � ����� ����������� (���������� ����� � �����-����)
void Rect::Inflate(double deltaX, double deltaY) {
    double left = deltaX;
    double top = deltaY;
    double right = deltaX;
    double bottom = deltaY;
    SetLeftTop(ptLT.GetX() - left, ptLT.GetY() + top);
    SetRightBottom(ptRB.GetX() + right, ptRB.GetY() - bottom);
}

// ������� 3: � �������� ����������� (��������� ���������� ��� ���� 4-� ������)
void Rect::Inflate(double left, double top, double right, double bottom) {
    SetLeftTop(ptLT.GetX() - left, ptLT.GetY() + top);
    SetRightBottom(ptRB.GetX() + right, ptRB.GetY() - bottom);
}

void Rect::Out() {
    std::cout << "Rect (" << ptLT.GetX() << "," << ptLT.GetY() << "," << ptRB.GetX() << "," << ptRB.GetY() << ")" << std::endl;
}

void Rect::Move(Vector& v)
{
    ptLT = ptLT + v;
    ptRB = ptRB + v;
}

double Rect::Area()
{
    return ptLT*ptRB;
}
















//#pragma once
//#include "Rect.h"
//#include "iostream"
//
//Rect& Rect::operator=(const Rect& other) {
//    if (this == &other)
//        return *this;
//
//    ptLT = other.ptLT;
//    ptRB = other.ptRB;
//    return *this;
//}
//
//double Rect::GetX1() const {
//    return ptLT.GetX();
//}
//
//double Rect::GetY1() const {
//    return ptLT.GetY();
//}
//
//double Rect::GetX2() const {
//    return ptRB.GetX();
//}
//
//double Rect::GetY2() const {
//    return ptRB.GetY();
//}
//
//// �������� ������ ��� ��������� ���������
//void Rect::SetLeftTop(double x, double y) {
//    ptLT.SetX(x);
//    ptLT.SetY(y);
//}
//
//void Rect::SetRightBottom(double x, double y) {
//    ptRB.SetX(x);
//    ptRB.SetY(y);
//}
//
//// ������ Inflate
//
//// ������� 1: ����� ���������� (�� ��������� = 1)
//void Rect::Inflate(double delta) {
//    double left = delta;
//    double top = delta;
//    double right = delta;
//    double bottom = delta;
//    SetLeftTop(ptLT.GetX() - left, ptLT.GetY() + top);
//    SetRightBottom(ptRB.GetX() + right, ptRB.GetY() - bottom);
//}
//
//// ������� 2: � ����� ����������� (���������� ����� � �����-����)
//void Rect::Inflate(double deltaX, double deltaY) {
//    double left = deltaX;
//    double top = deltaY;
//    double right = deltaX;
//    double bottom = deltaY;
//    SetLeftTop(ptLT.GetX() - left, ptLT.GetY() + top);
//    SetRightBottom(ptRB.GetX() + right, ptRB.GetY() - bottom);
//}
//
//// ������� 3: � �������� ����������� (��������� ���������� ��� ���� 4-� ������)
//void Rect::Inflate(double left, double top, double right, double bottom) {
//    SetLeftTop(ptLT.GetX() - left, ptLT.GetY() + top);
//    SetRightBottom(ptRB.GetX() + right, ptRB.GetY() - bottom);
//}
//
//void Rect::Out() const {
//    std::cout << "Rect (" << ptLT.GetX() << "," << ptLT.GetY() << "," << ptRB.GetX() << "," << ptRB.GetY() << ")" << std::endl;
//}
