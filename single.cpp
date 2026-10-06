#include<iostream>
using namespace std;

class university
{
    public :

    string name;
    int age;
    int contact;

    void display()
    {
        cout << "NAME OF STUDENT --->" << name << endl;
         cout << "AGE OF STUDENT --->" << age << endl;
          cout << "CONTACT OF STUDENT --->" << contact << endl;

    }


};

class student : public university
{
    public :

    int rno;
    string branch;

    void show()
    {
         cout << "ROLL NO OF STUDENT --->" << rno << endl;
          cout << "BRANCH OF STUDENT --->" << branch << endl;
    }
};

int main()
{
    student s1,s2;

    s1.name="om";
    s1.age=20;
    s1.contact=90978809;
    s1.rno=8;
    s1.branch="AI ML";

    s2.name="harshal";
    s2.age=18;
    s2.contact=90898809;
    s2.rno=17;
    s2.branch="AIDS";

    cout << "......STUDENT 1 DETAILS....." << endl;

    s1.display();
    s1.show();

    cout << ".....STUDENT 2 DETAILS ....." << endl;

    s2.display();
    s2.show();

    return 0;




}
