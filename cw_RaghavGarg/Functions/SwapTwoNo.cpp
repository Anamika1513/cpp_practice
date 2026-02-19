#include <iostream>
using namespace std;

void swap(int a , int b){
    // int temp = a;
    // a = b;
    // b = temp;

    a = a+b;
    b = a-b;
    a = a-b;

}
int main(){
    int x = 5;
    int y = 10;
    cout<<x<<" "<<y<<endl;

    swap(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}