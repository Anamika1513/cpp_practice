#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5};

    cout<<*arr<<endl; //1
    cout<<*(arr+1)<<endl; //2
    cout<<*(arr+2)<<endl; //3
    cout<<*(arr+3)<<endl; //4
    cout<<*(arr+4)<<endl; //5

    int a = 10;
    int *ptr = &a;

    //increment or decrement
    cout<<ptr<<endl;;
    // ptr--;
    // cout<<ptr<<endl;  //+4


    //add or subtract no
    ptr = ptr + 2;
    cout<<ptr<<endl;  //+8


    //subtract pointer
    int *ptr1;   //if it points 100
    int *ptr2 = ptr1+2;  //then it points 108

    cout<< ptr2 - ptr1<<endl;  //2 - how many intergers can be stored



    //comaparision of two pointers
    int *ptr3;
    int *ptr4;
    cout<<ptr3<<endl;
    cout<<ptr4<<endl;
    cout<<(ptr3>ptr4)<<endl;

    return 0;
}
