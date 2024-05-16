#include "Triangle.h"
#include <iostream>

Triangle::Triangle(float base, float height) : base(base), height(height) {}

float Triangle::GetArea() const {
    return 0.5f * base * height;
}

void Triangle::Scale(float scaleFactor) {
    base *= scaleFactor;
    height *= scaleFactor;
}

void Triangle::ShowInfo() const {
    std::cout << "Я треугольник!" << std::endl;
    std::cout << "Моя площадь = " << GetArea() << std::endl;
    std::cout << "Длина моего основания = " << base << std::endl;
    std::cout << "Моя высота = " << height << std::endl;
}

std::string Triangle::GetName() const {
    return "Triangle";
}
