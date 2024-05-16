#ifndef TRIANGULARPYRAMID_H
#define TRIANGULARPYRAMID_H

#include "Shape3D.h"

class TriangularPyramid : public Shape3D {
private:
    float height;
public:
    TriangularPyramid(float height);
    float GetVolume() const override;
    void Scale(float scaleFactor) override;
    void ShowInfo() const override;
    std::string GetName() const override;
};

#endif // TRIANGULARPYRAMID_H
