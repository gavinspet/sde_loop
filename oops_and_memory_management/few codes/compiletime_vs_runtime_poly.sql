---------------------------------------------------------------
        Runtime Polymorphism vs. Compile-Time Polymorphism
---------------------------------------------------------------

Compile-Time Polymorphism (Static Polymorphism):
--------------------------------------------------
- Decided at compile time.
- Known as method overloading or function overloading.
- Multiple functions with the same name but different parameters.
- The appropriate function is determined based on the function signature.
- Example: int add(int a, int b) and double add(double a, double b).

Runtime Polymorphism (Dynamic Polymorphism):
--------------------------------------------------
- Decided at runtime.
- Achieved through inheritance and virtual functions.
- Base class has a virtual function, and derived classes override it.
- The appropriate function is determined based on the actual object type.
- Example: Shape class with a virtual draw() method overridden by Circle and Square classes.

In simple terms, compile-time polymorphism is like choosing a recipe from a 
cookbook based on the name and ingredients, while runtime polymorphism is like a chef 
preparing a dish from the chosen recipe, adapting it as needed.
