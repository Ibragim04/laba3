#include "Cylinder.h"
#include <iostream>

Cylinder::Cylinder(float height) : height(height) {}

float Cylinder::GetVolume() const {
    return area * height;
}

void Cylinder::Scale(float scaleFactor) {
    height *= scaleFactor;
}

void Cylinder::ShowInfo() const {
    std::cout << "Я цилиндр!" << std::endl;
    std::cout << "Мой объем = " << GetVolume() << std::endl;
    std::cout << "Моя высота = " << height << std::endl;
}

std::string Cylinder::GetName() const {
    return "Cylinder";
}
