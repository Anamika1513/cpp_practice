#include <iostream>
using namespace std;

int main(){
    int l, b ;
    cout<<"enter the value of length : ";
    cin>>l;

    cout<<"enter the value of bradth: ";
    cin>>b;
    int area = l*b;
    int peri = 2*(l+b);


    if(area>peri){
        cout<<"area is greater than perimeter"<<endl;
    }
    else if(peri>area){
        cout<<"perimeter is greater than area"<<endl;
    }
    else{
        cout<<"area is equal to perimeter";
    }
}