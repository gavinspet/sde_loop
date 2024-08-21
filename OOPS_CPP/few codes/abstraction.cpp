#include <iostream>
using namespace std;


class ABC
{
    private:
    int a, b, c;

    public:
    ABC() {};
    int get_a(){
        return a;
    }
    void set_a(int a){
        this->a = a;
    }
    ~ABC() {};
};


int main(){
    ABC obj;
    ABC *obj_ptr = new ABC();

    obj.set_a(10);
    cout << obj.get_a() << "\n";
    delete(obj_ptr);
}