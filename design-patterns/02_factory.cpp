#include <iostream>
#include <memory>

enum ShapeType { CircleType, SquareType, TriangleType };

class Shape {
public:
  virtual void draw() = 0;
  virtual ~Shape() = default;
};

class Circle : public Shape {
public:
  void draw() override { std::cout << "Draw Circle\n"; }
};

class Square : public Shape {
public:
  void draw() override { std::cout << "Draw Square\n"; }
};

class Triangle : public Shape {
public:
  void draw() override { std::cout << "Draw Triangle\n"; }
};

class ShapeFactory {
public:
  std::unique_ptr<Shape> getShape(ShapeType type) {
    switch (type) {
    case ShapeType::CircleType:
      return std::make_unique<Circle>();
    case ShapeType::SquareType:
      return std::make_unique<Square>();
    case ShapeType::TriangleType:
      return std::make_unique<Triangle>();
    default:
      return nullptr;
    }
  }
};

int main() {
  ShapeFactory factory;
  std::unique_ptr<Shape> shape1 = factory.getShape(CircleType);
  std::unique_ptr<Shape> shape2 = factory.getShape(SquareType);
  std::unique_ptr<Shape> shape3 = factory.getShape(TriangleType);

  if (shape1)
    shape1->draw();
  if (shape2)
    shape2->draw();
  if (shape3)
    shape3->draw();

  return 0;
}
