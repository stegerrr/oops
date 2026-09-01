#include<iostream>
using namespace std;

class employee

{

 public:

string name;
int id;
int salary;
string  department;

void input()

{
cout<<"name of employee"<<endl;
cin>>name;

cout<<"employee id"<<endl;
cin>>id;

cout<<"employee salary"<<endl;
cin>>salary;

cout<<"department of employee"<<endl;
cin>>department;
}

void display()

{

cout<<"_______________employee details_________________"<<endl;
cout<<"name of employee:"<<name<<endl;
cout<<"id of employee:"<<id<<endl;
cout<<"salary of employee:"<<salary<<endl;
cout<<"department of employee:"<<department<<endl;
}

};

int main()
{

employee e1;e1.input();
e1.display();

return 0;
}




