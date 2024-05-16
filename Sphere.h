#ifndef SPHERE_H
#define SPHERE_H

#include "Shape3D.h"

class Sphere : public Shape3D {
private:
    float radius;
public:
    Sphere(float radius);
    float GetVolume() const override;
    void Scale(float scaleFactor) override;
    void ShowInfo() const override;
    std::string GetName() const override;
};

#endif // SPHERE_H
