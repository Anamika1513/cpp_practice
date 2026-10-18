#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout<<a<<endl;   //original value
    cout<<&a<<endl;  // address of a
    cout<<ptr<<endl;  // store the address of a
    cout<<*ptr<<endl;  // value present at that address

    return 0;

}
