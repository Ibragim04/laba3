#include "Square.h"
#include <iostream>

Square::Square(float side) : side(side) {}

float Square::GetArea() const {
    return side * side;
}

void Square::Scale(float scaleFactor) {
    side *= scaleFactor;
}

void Square::ShowInfo() const {
    std::cout << "Я квадрат!" << std::endl;
    std::cout << "Моя площадь = " << GetArea() << std::endl;
    std::cout << "Длина моей стороны = " << side << std::endl;
}

std::string Square::GetName() const {
    return "Square";
}
