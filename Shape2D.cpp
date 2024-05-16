#include "Shape2D.h"

Shape2D::Shape2D() : area(0) {}

bool Shape2D::operator>(const Shape2D& other) const {
    return this->GetArea() > other.GetArea();
}

bool Shape2D::operator==(const Shape2D& other) const {
    return this->GetArea() == other.GetArea();
}

bool Shape2D::operator<(const Shape2D& other) const {
    return this->GetArea() < other.GetArea();
}
