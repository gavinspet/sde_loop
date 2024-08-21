#include <iostream>

using namespace std;


namespace xyz{
    int xxx = 5;
};

int main(){
    int xxx  = 10;
    cout << "print value of this scope variable " << xxx << "\n";
    cout << "print value of this xyx namespace scope variable " << xyz::xxx << "\n";

}