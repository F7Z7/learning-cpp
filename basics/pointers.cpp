#include <iostream>
using namespace std;
int main() {
  string food="heheh";
  string *ptr_Food=&food;

  cout<<*ptr_Food<<endl;//will print the addres
  cout<<&food<<endl;
  cout<<ptr_Food<<endl;//will print text
  if(ptr_Food== &food){
    cout<<"Yes pointersss"<<endl;
  }
}