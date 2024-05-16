#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(float radius) : radius(radius) {}

float Circle::GetArea() const {
    return M_PI * radius * radius;
}

void Circle::Scale(float scaleFactor) {
    radius *= scaleFactor;
}

void Circle::ShowInfo() const {
    std::cout << "Я круг!" << std::endl;
    std::cout << "Моя площадь = " << GetArea() << std::endl;
    std::cout << "Мой радиус = " << radius << std::endl;
}

std::string Circle::GetName() const {
    return "Circle";
}
