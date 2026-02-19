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

    if((a+b)>c && (a+c)>b && (b+c)>a){
        cout<<"yes the give sides is of triangle";
    }

    else{
        cout<<"the given sides are not of triangles";
    }

}