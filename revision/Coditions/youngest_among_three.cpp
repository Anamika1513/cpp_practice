#include <iostream>
using namespace std;

int main(){
    int a ,b,c ;
    cout<<"enter the age of ram : ";
    cin>>a;

    cout<<"enter the age of shyam: ";
    cin>>b;

    cout<<"enter the age if ajay: ";
    cin>>c;

    if(a<b){  // shyam can never be youngest
        if(a<c){
            cout<<"ram is youngest";
        }
        else{ // c<a , a<b --> c<a
            cout<<"Ajay is youngest";
        }
    }
    else {   // a never be youngest
        if(b<c){   
            cout<<"shyam is youngest";
        }
        else{  // c<b , b<a --> c<b<a 
            cout<<"ajay is youngest";
        }
    }
}