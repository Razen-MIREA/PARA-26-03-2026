#include <iostream>

double pi = 3.14159;

class Shape {
public:
    virtual double area() const;
    virtual void print() const;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return pi*radius*radius;
    }
    double getRadius() {return radius;}
    void print() const override {}
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width*height;
    }
    double getWidth() {return width;}
    double getHeight() {return height;}
    void print() const override {}
};

int main() {
    Shape* shapes[] = {new Shape, new Circle(3), new Rectangle(2, 3)};
    shapes[0] = static_cast<Circle*>(shapes[0]);
    std::cout << shapes[1]->getRadius();
    // не хочет выводить :(
    return 0;
}
