#include <iostream>
using namespace std;

//classes are a new data type
class Book {
public:
    string author;
    string name;
    int pages;
    //methods
    Book(string booK_name, string book_author, int book_pages) {
        name = booK_name;
        author = book_author;
        pages = book_pages;
    }
    Book() {
        name="no info";
        author="no info";
        pages=0;
    }
void print();//first initialise trhe fucntion inside adn then declare it outside

};
void Book::print() {
    cout<<name<<" "<<author<<" "<<pages<<endl;
}

int main() {
    Book book1("Harry Potter", "Jk rowling", 300); //created objec tiwht constucitor
Book book2;
    cout<<book2.name<<endl;//will print the default bvlaue,since it isnt initialised
    // cout << book1.name << " " << book1.author << " " << book1.pages << endl;
    book1.print();
    // book2.print();
    return 0;
}
