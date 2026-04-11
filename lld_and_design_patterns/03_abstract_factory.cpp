#include <iostream>
#include <memory>

// Shape Base Class
class Shape {
public:
  virtual void draw() = 0;
  virtual ~Shape() = default;
};

// 2D Shapes
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

// 3D Shapes
class Sphere : public Shape {
public:
  void draw() override { std::cout << "Draw Sphere\n"; }
};

class Cube : public Shape {
public:
  void draw() override { std::cout << "Draw Cube\n"; }
};

class Pyramid : public Shape {
public:
  void draw() override { std::cout << "Draw Pyramid\n"; }
};

// Abstract Factory Base Class
class AbstractShapeFactory {
public:
  virtual std::unique_ptr<Shape> createShape(const std::string &shapeType) = 0;
  virtual ~AbstractShapeFactory() = default;
};

// 2D Shape Factory
class TwoDShapeFactory : public AbstractShapeFactory {
public:
  std::unique_ptr<Shape> createShape(const std::string &shapeType) override {
    if (shapeType == "Circle") {
      return std::make_unique<Circle>();
    } else if (shapeType == "Square") {
      return std::make_unique<Square>();
    } else if (shapeType == "Triangle") {
      return std::make_unique<Triangle>();
    } else {
      return nullptr;
    }
  }
};

// 3D Shape Factory
class ThreeDShapeFactory : public AbstractShapeFactory {
public:
  std::unique_ptr<Shape> createShape(const std::string &shapeType) override {
    if (shapeType == "Sphere") {
      return std::make_unique<Sphere>();
    } else if (shapeType == "Cube") {
      return std::make_unique<Cube>();
    } else if (shapeType == "Pyramid") {
      return std::make_unique<Pyramid>();
    } else {
      return nullptr;
    }
  }
};

// Factory Producer
class FactoryProducer {
public:
  enum FactoryType { TWO_D, THREE_D };

  static std::unique_ptr<AbstractShapeFactory> getFactory(FactoryType type) {
    switch (type) {
    case TWO_D:
      return std::make_unique<TwoDShapeFactory>();
    case THREE_D:
      return std::make_unique<ThreeDShapeFactory>();
    default:
      return nullptr;
    }
  }
};

// Main Function
int main() {
  auto twoDFactory = FactoryProducer::getFactory(FactoryProducer::TWO_D);
  auto threeDFactory = FactoryProducer::getFactory(FactoryProducer::THREE_D);

  std::unique_ptr<Shape> shape1 = twoDFactory->createShape("Circle");
  std::unique_ptr<Shape> shape2 = threeDFactory->createShape("Cube");

  if (shape1)
    shape1->draw();
  if (shape2)
    shape2->draw();

  return 0;
}
