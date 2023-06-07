#include<bits/stdc++.h>
using namespace std;


class person
{
    private:
    int id;
    string name;

    public: 
    void set_p()
    {
        cout<<"set name of the person"<<endl;
        cin>>name;
        cout<<"set id of the person"<<endl;
        cin>>id;
    };

    void get_p()
    {
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
};

class student: public person
{
    string course;
    int fee;

    public: 
    void set_s()
    {
        set_p();
        cout<<"set course of the student"<<endl;
        cin>>course;
        cout<<"set fee of the student"<<endl;
        cin>>fee;
    };

    void get_s()
    {
        get_p();
        cout<<"course: "<<course<<endl;
        cout<<"fee: "<<fee<<endl;
    }

};

int main()
{
    student s;
    s.set_s();
    cout<<endl;
    s.get_s();
}