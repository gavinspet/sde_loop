/*An alias is an alternative name given to an existing entity, such as a
 * variable, function, or type. In programming, creating an alias can provide a
 * more descriptive or convenient way to refer to an entity, making code more
 * readable and understandable. Aliases are commonly used in various programming
 * languages for different purpose.
 */

#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <thread>
#include <unistd.h>

using namespace std;

int main() {
  int original_variable = 10;
  int &alias_variable = original_variable;
}