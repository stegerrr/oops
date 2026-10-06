#include<iostream>
using namespace std;

class person
{
    public :

    int legs;
    int hands;
    int eyes;

    void display()
    {
        cout << "NO OF LEGS  :->" << legs << endl;
        cout << "NO OF HANDS  :->" << hands << endl;
        cout << "NO OF EYES  :->" << eyes << endl;
    }



};

class employee : public person
{
    public :

    string name;
    int id;

    void show()
    {
         cout << "NAME OF EMPLOYEE  :->" << name << endl;
          cout << "ID OF EMPLOYEE  :->" << id << endl;


    }
};

class manager : public employee
{
    public :

    string post;

    void get()
    {
         cout << "POST OF MANAGER  :->" << post << endl;
    }
};


int main()
{
    manager m1;

    cout << "............MANAGER DETAILS.............." << endl << endl;

    m1.legs=8;
    m1.hands=4;
    m1.eyes=12;
    m1.name="om joshi";
    m1.id=123;
    m1.post="ASSISTANT MANAGER UNDER VIRAT TIWARI ";

    m1.display();
    m1.show();
    m1.get();

    return 0;

}
