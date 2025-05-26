#include <iostream>
using namespace std;
struct student{
    string name;
    int age;
    int roll;
  };
int main(){
student student1;
student1.name="John";
student1.age=18;
student1.roll=18;
    cout<<"student details"<<endl;
cout<<"Name:"<<student1.name<<" age: "<<student1.age<<" roll: "<<student1.roll <<endl;
}