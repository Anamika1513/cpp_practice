#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};

    int *ptr = arr;

    cout<<*(ptr+1)<<endl;   // 20
    cout<<*(ptr+3)<<endl;   // 40
    ptr++;   // points 2nd index
    cout<<*ptr<<endl;  // 20

    return 0;

}
