#include <iostream>
using namespace std;

int main(){
    int marks ;
    cout<<"enter the marks in percentage: ";
    cin>>marks;

    if(marks>=81 && marks<=100){
        cout<<"very good";
    }

    else if(marks<80 && marks>=61){
        cout<<"good";
    }

    else if(marks>40 && marks<60){
        cout<<"Average";
    }
    
    else{
        cout<<"fail";
    }
    
}