#include <iostream>

using namespace std;

int main()
{
    char *c = "kartick";

    cout<<sizeof(c)<<endl;

    for(int i=0; c[i]!='\0';i++)
    {
        cout<<c[i];
    }
    cout<<endl;


}