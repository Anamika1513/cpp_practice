#include <iostream>
using namespace std;

int main(){
    int a ,b,c ;
    cout<<"enter the value of a : ";
    cin>>a;

    cout<<"enter the value of b: ";
    cin>>b;

    cout<<"enter the value of c: ";
    cin>>c;

    if(a>b && a>c){
        cout<<" a is grater than both of them";
    }

    else if(b>a && b>c){
        cout<<"b is greater than both of them";
    }

    else{
        cout<<"c is greater than a and b";
    }
}