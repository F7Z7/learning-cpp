#include <iostream>
using namespace std;

//classes are a new data type
class Book {
private:
    float rating;
public:
    string author;
    string name;
    int pages;
    //methods
    Book(string booK_name, string book_author, int book_pages,float b_rating) {
        name = booK_name;
        author = book_author;
        pages = book_pages;
        book_rating(b_rating);
    }
    Book() {
        name="no info";
        author="no info";
        pages=0;
    }
    //for accesing a privatre clas we make  afucntiom
    void book_rating(float b_rating) {
rating = b_rating;
    }
void print();//first initialise trhe fucntion inside adn then declare it outside
    float getRating() {
        return rating;
    }
};
void Book::print() {
    cout<<name<<" "<<author<<" "<<pages<<endl;
}

int main() {
    Book book1("Harry Potter", "Jk rowling", 300,9.8); //created objec tiwht constucitor
Book book2;
    cout<<book2.name<<endl;//will print the default bvlaue,since it isnt initialised
    // cout << book1.name << " " << book1.author << " " << book1.pages << endl;
    book1.print();
    // cout<<book1.rating//this will give an error as the rating is private class and can;t be accesd
    // book2.print();
    cout<<book1.getRating()<<endl;//now it can be acces usign gettr adn setters
    return 0;
}
