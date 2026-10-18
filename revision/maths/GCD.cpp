#include <iostream>
using namespace std;

// int gcd(int a , int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a = a%b;
//         }
//         else{
//             b = b%a;
//         }
//     }
//     if (a==0) return b;
//     else return a;
// }

int gcdrec(int a , int b){
    if(b==0) return a;

    return gcdrec(b , a%b);
}

int lcm(int a , int b){
    int gcd = gcdrec(a ,b);
    
    return (a*b)/gcd;
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;

    int b;
    cout<<"Enter b: ";
    cin>>b;

    cout<< gcdrec(a , b)<<endl;
    cout<< lcm(a , b)<<endl;

    return 0;
} 