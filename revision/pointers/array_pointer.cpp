#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    // int *p = arr;
    // cout<< *p<<endl;
    
    cout<<arr<<endl;  // pointer - indicates the memory address of 1st index
    cout<<*arr<<endl;  // value at 0th index
    

    // array pointer is a constant pointer which you cannot change throughout the programm

    return 0;

}
