### Compiling and Creating Executables:
1. Basic Compilation:
    
   g++ source.cpp -o output
    

2. Compile Multiple Source Files into a Single Executable:
    
   g++ source1.cpp source2.cpp -o output
    

3. Compile with Optimization and Debugging Symbols:
    
   g++ -O2 -g source.cpp -o output
    

4. Specify Include Directories:
    
   g++ -I/path/to/includes source.cpp -o output
    

### Creating Libraries:
1. Creating a Static Library (.a):
    
   g++ -c library.cpp -o library.o
   ar rcs libmylib.a library.o
    

2. Creating a Shared Library (.so):
    
   g++ -shared -fPIC library.cpp -o libmylib.so
    

### Linking Headers and Libraries:
1. Linking Header Files:
   - Header files are typically included in your source code using `#include`. 
   Ensure that the header files are in directories specified with `-I`.

2. Linking Static Libraries:
    
   g++ source.cpp -o output -L/path/to/libraries -lmylib
    

3. Linking Shared Libraries:
    
   g++ source.cpp -o output -L/path/to/libraries -lmylib
    

### Other Useful Flags:
1. Compiler Warning Flags:
    
   g++ -Wall -Wextra source.cpp -o output
    

2. Specify C++ Standard:
    
   g++ -std=c++11 source.cpp -o output
    

3. Preprocessor Definitions:
    
   g++ -DDEBUG=1 source.cpp -o output
    
 
