#include "Sphere.h"
#include <iostream>
#include <cmath>

Sphere::Sphere(float radius) : radius(radius) {}

float Sphere::GetVolume() const {
    return (4.0f / 3.0f) * M_PI * std::pow(radius, 3);
}

void Sphere::Scale(float scaleFactor) {
    radius *= scaleFactor;
}

void Sphere::ShowInfo() const {
    std::cout << "Я сфера!" << std::endl;
    std::cout << "Мой объем = " << GetVolume() << std::endl;
    std::cout << "Мой радиус = " << radius << std::endl;
}

std::string Sphere::GetName() const {
    return "Sphere";
}
