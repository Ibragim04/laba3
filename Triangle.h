#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape2D.h"

class Triangle : public Shape2D {
private:
    float base;
    float height;
public:
    Triangle(float base, float height);
    float GetArea() const override;
    void Scale(float scaleFactor) override;
    void ShowInfo() const override;
    std::string GetName() const override;
};

#endif // TRIANGLE_H
