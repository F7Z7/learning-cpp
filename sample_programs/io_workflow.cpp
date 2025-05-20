//simple prgram to familraise with user inputs and printit in cout

#include<iostream>
using namespace std;
int main(){
  string name;
  string profession;
  int age;
  cout<<"eneter ur name:?"<<endl;//printf in c
  cin>>name;///name will be stored:similari to scanf/input()
  cout<<"enter profession:?"<<endl;
  cin>>profession;
  cout<<"enter age:?"<<endl;
  cin>>age;
  cout<<name<<" is a "<<profession<<" who is "<<age <<" years old"<<endl;
  return 0;


}