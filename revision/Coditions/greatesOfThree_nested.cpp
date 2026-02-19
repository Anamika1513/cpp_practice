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

    if(a>b){  // b can never be greatest
        if(a>c){
            cout<<"a is greater than b and c";
        }
        else{ // c>a , a>b --> c>a
            cout<<"c is gratest";
        }
    }
    else {   // a never be greates
        if(b>c){   
            cout<<"b is gratest among them";
        }
        else{  // b>a , c>b --> c>b>a 
            cout<<"c is greatest";
        }
    }
}