#include <iostream>
using namespace std;
int main() {
string arr[10]={"he","hi","she","yes"};
cout<<arr<<endl;//only printing arr will give the addres
// cout<<arr[9]<<endl;
    for (int i=0;i<10;i++) {
        cout<<arr[i]<<endl;
    }
}