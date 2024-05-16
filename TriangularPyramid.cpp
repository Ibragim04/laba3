#include "TriangularPyramid.h"
#include <iostream>

TriangularPyramid::TriangularPyramid(float height) : height(height) {}

float TriangularPyramid::GetVolume() const {
    return (1.0f / 3.0f) * area * height;
}

void TriangularPyramid::Scale(float scaleFactor) {
    height *= scaleFactor;
}

void TriangularPyramid::ShowInfo() const {
    std::cout << "Я треугольная пирамида!" << std::endl;
    std::cout << "Мой объем = " << GetVolume() << std::endl;
    std::cout << "Моя высота = " << height << std::endl;
}

std::string TriangularPyramid::GetName() const {
    return "Triangular Pyramid";
}
