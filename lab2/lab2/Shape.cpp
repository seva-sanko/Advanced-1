#include "Shape.h"

Shape* Shape::shapes[1000];
int Shape::Count = 0;

Shape::Shape() {
    if (Count < 1000)
        shapes[Count] = this;
    Count++;
}

Shape::~Shape() {
    Count--;
    for (int i = 0; i < Count; i++) {
        if (shapes[i] == this) {
            for (int j = i; j < Count - 1; j++) {
                shapes[j] = shapes[j + 1];
            }
        }
    }
}

void Shape::Out()
{
    std::cout << "\nShape";
}

double Shape::Area()
{
    return 0.0;
}


void Shape::AddShape(Shape* shape) {
    if (Count < 1000) {
        shapes[Count++] = shape;
    }
}

Shape* Shape::GetShape(int index) {
    if (index >= 0 && index < Count) {
        return shapes[index];
    }
    else {
        return nullptr; // Или выполните другие действия в зависимости от вашей логики
    }
}

void Shape::PrintCount() {
    std::cout << "Now there are " << Count << " shapes" << std::endl;
}

int Shape::GetCount() {
    return Count;
}
