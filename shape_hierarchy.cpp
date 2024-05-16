#include <iostream>
#include <string>
#include <cmath>

class Shape {
public:
    virtual void Scale(float scaleFactor) = 0;
    virtual void ShowInfo() const = 0;
    virtual std::string GetName() const = 0;
};

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

class Square : public Shape2D {
private:
    float side;
public:
    Square(float side);
    float GetArea() const override;
    void Scale(float scaleFactor) override;
    void ShowInfo() const override;
    std::string GetName() const override;
};

Square::Square(float side) : side(side) {}

float Square::GetArea() const {
    return side * side;
}

void Square::Scale(float scaleFactor) {
    side *= scaleFactor;
}

void Square::ShowInfo() const {
    std::cout << "Я квадрат!" << std::endl;
    std::cout << "Моя площадь = " << GetArea() << std::endl;
    std::cout << "Длина моей стороны = " << side << std::endl;
}

std::string Square::GetName() const {
    return "Square";
}

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

Triangle::Triangle(float base, float height) : base(base), height(height) {}

float Triangle::GetArea() const {
    return 0.5f * base * height;
}

void Triangle::Scale(float scaleFactor) {
    base *= scaleFactor;
    height *= scaleFactor;
}

void Triangle::ShowInfo() const {
    std::cout << "Я треугольник!" << std::endl;
    std::cout << "Моя площадь = " << GetArea() << std::endl;
    std::cout << "Длина моего основания = " << base << std::endl;
    std::cout << "Моя высота = " << height << std::endl;
}

std::string Triangle::GetName() const {
    return "Triangle";
}

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

Circle::Circle(float radius) : radius(radius) {}

float Circle::GetArea() const {
    return M_PI * radius * radius;
}

void Circle::Scale(float scaleFactor) {
    radius *= scaleFactor;
}

void Circle::ShowInfo() const {
    std::cout << "Я круг!" << std::endl;
    std::cout << "Моя площадь = " << GetArea() << std::endl;
    std::cout << "Мой радиус = " << radius << std::endl;
}

std::string Circle::GetName() const {
    return "Circle";
}

class Shape3D : public Shape {
protected:
    float volume;
public:
    Shape3D();
    virtual float GetVolume() const = 0;
    bool operator>(const Shape3D& other) const;
    bool operator==(const Shape3D& other) const;
    bool operator<(const Shape3D& other) const;
};

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

Cylinder::Cylinder(float height) : height(height) {}

float Cylinder::GetVolume() const {
    return area * height;
}

void Cylinder::Scale(float scaleFactor) {
    height *= scaleFactor;
}

void Cylinder::ShowInfo() const {
    std::cout << "Я цилиндр!" << std::endl;
    std::cout << "Мой объем = " << GetVolume() << std::endl;
    std::cout << "Моя высота = " << height << std::endl;
}

std::string Cylinder::GetName() const {
    return "Cylinder";
}

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

int main() {
    // Тестирование иерархии классов
    Square square(5);
    Triangle triangle(4, 3);
    Circle circle(6);
    TriangularPyramid triPyramid(8);
    Cylinder cylinder(5);
    Sphere sphere(4);

    square.ShowInfo();
    triangle.ShowInfo();
    circle.ShowInfo();
    triPyramid.ShowInfo();
    cylinder.ShowInfo();
    sphere.ShowInfo();

    return 0;
}
