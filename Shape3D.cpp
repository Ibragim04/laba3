#include "Shape3D.h"

Shape3D::Shape3D() : volume(0) {}

bool Shape3D::operator>(const Shape3D& other) const {
    return this->GetVolume() > other.GetVolume();
}

bool Shape3D::operator==(const Shape3D& other) const {
    return this->GetVolume() == other.GetVolume();
}

bool Shape3D::operator<(const Shape3D& other) const {
    return this->GetVolume() < other.GetVolume();
}
