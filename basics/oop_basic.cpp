#include <iostream>
using namespace std;

//classes are a new data type
class Book{
  public:
    string author;
    string name;
    int pages;
  //
};

int main(){
Book book1;
book1.name="Hp";//objects are instance of class
book1.author="John";
book1.pages=1;

  cout<<book1.name<<book1.author<<book1.pages<<endl;
  return 0;
}