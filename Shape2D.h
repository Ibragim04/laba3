#ifndef SHAPE2D_H
#define SHAPE2D_H

#include "Shape.h"

class Shape2D : public Shape {
protected:
    float area;
public:
    Shape2D();
    virtual float GetArea() const = 0;
    bool operator>(const Shape2D& other) const;
    bool operator==(const Shape2D& other) const;
    bool operator<(const Shape2D& other) const;
};

#endif // SHAPE2D_H
