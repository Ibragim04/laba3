#ifndef CYLINDER_H
#define CYLINDER_H

#include "Shape3D.h"

class Cylinder : public Shape3D {
private:
    float height;
public:
    Cylinder(float height);
    float GetVolume() const override;
    void Scale(float scaleFactor) override;
    void ShowInfo() const override;
    std::string GetName() const override;
};

#endif // CYLINDER_H
