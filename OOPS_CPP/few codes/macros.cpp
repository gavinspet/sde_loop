#include <iostream>

using namespace std;


#define SQUARE(x) (x*x)

#define SOUND()(cout<<"OINK OINK \n")


int main()
{
    cout<<SQUARE('a')<<endl;
    cout<<SQUARE(97)<<endl;
    // cout<<SQUARE("a")<<endl;
    cout<<SQUARE(5.5)<<endl;
    SOUND();
}
