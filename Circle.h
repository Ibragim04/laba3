#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape2D.h"

class Circle : public Shape2D {
private:
    float radius;
public:
    Circle(float radius);
    float GetArea() const override;
    void Scale(float scaleFactor) override;
    void ShowInfo() const override;
    std::string GetName() const override;
};

#endif // CIRCLE_H
