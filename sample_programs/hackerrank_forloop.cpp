#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string arr[9]={ "one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cout<<"Enter 2 numbers ";
    cin>>a;
    cin>>b;

    int num_arr[2] = {a, b};
    for(int i=0;i<2;i++){
        if(num_arr[i]%2==0){
            cout<<"even"<<endl;

        }
        else{
            cout<<"odd"<<endl;
        }
        if(num_arr[i]>=1&&num_arr[i]<=9){
            cout<<arr[num_arr[i]-1]<<endl;
        }


    }




    return 0;
}