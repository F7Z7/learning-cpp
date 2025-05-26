#include <iostream>
using namespace std;
struct student{
  string name;
  int age;
  int roll;
 float score;

    void display_marks(){
cout<<name<<" is  "<<age<<" years old and with roll no "<<roll<<" has gotten "<<score<<" in maths test"<<endl;
    }
};


int main(){
   student s1;

   cout << "Enter student name: ";
   cin >> s1.name;
   cout<<"Enter student age: ";
   cin>>s1.age;
   cout<<"Enter student roll: ";
   cin>>s1.roll;
   cout<<"Enter student score: ";
   cin>>s1.score;


s1.display_marks();
return 0;
}