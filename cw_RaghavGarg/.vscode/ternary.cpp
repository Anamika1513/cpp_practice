// #include<stdio.h> 
// #include<conio.h> 
// void main() 
// { 
// int n,i,fact,j; 
// clrscr(); 
// printf("enter the number:"); 
// scanf(n); 
// for(i=1;i<=n;i++) 
// {fact=0; 
// //THIS LOOP WILL CHECK A NO TO BE PRIME NO. OR 
// for(j=1;j<=i;j++) 
// { 
// } 
// if(i%j==0) 
// fact++; 
// if(fact==2) 
// printf(i,"\t"); 
// } 
// getch( ); 
// } 

// #include <iostream>
// using namespace std;
// class student{ 
//     private : int roll; 
//     char name[30]; 
// public: 
// void get_data() { 
//     cout<<"Enter roll number and name : "; 
//     cin>>roll>>name; 
// } 
// void put_data() { 
//     cout<<"Roll number:"<<roll<<endl; 
//     cout<<"Name :"<<name ;
// } 
// };

// int main(){
//     student s;
//     s.get_data();
//     s.put_data();

//     return 0;
// }



// #include<iostream>
// using namespace std; 
// int a=5; 
// void main() 
// { 
// int a=1; 
// cout<<"Local a="<<a<<endl; 
// cout<<"Global a="<<::a<<endl; 
// }


// #include <iostream> 
// using namespace std; 
// class sample { 
// public: 
// void output(); //function declaration 
// }; 
// // function definition outside the 
// class void sample :: output() { 
// cout<< "Function defined outside the class.\n"; 
// }; 

// int main() { 

//     sample obj; 
//     obj.output(); 

// return 0; 
// }


// #include<iostream>
// using namespace std; 
// inline float mul(float x, float y) { 
//     return (x*y); 
// } 

// inline double div(double p, double q) { 
//     return (p/q); 
// } 
// int main() { 
//     float a=12.345; 
//     float b=9.82; 
//     cout<<mul(a,b); 
//     cout<<endl;
//     cout<<div(a,b); 
// return 0; 
// } 


// #include<iostream> 
// #include<conio.h> 
// using namespace std;
// class item { 
//     int m,n; 

//     public: 
//         item() { 
//             m=10; 
//             n=20; 
//         } 

//     void put(); 
// }; 

// void item::put() { 
//     cout<<m<<endl<<n; 
// } 

// void main() { 
//     item t; 
//     t.put(); 
//     getch(); 
// }


// #include<iostream>
// using namespace std;  
// class item { 
//     int m,n; 
//     public: 
//         item(int x, int y) { 
//             m=x; 
//             n=y; 
//         } 
//     };
// int main(){
//     item t(10,20);
// }


// #include<iostream>
// using namespace std;
// #include<conio.h>  

// class item  {  
//     int m,n;  
//     public:  
//         item(int x,int y) {  
//             m=x;  
//             n=y;  
//         }  
//     void put();  
// };  
// void item::put()  {  
//     cout<<m<<endl<<n;  
// }  
// int main()  {  
//     item t1(10,20);  
//     item t2=item(20,30);  
//     t1.put();  
//     cout<<endl;
//     t2.put();  
//     getch();  
// } 


//  #include<iostream>
//  using namespace std;

// class sample {  
//     int n;

//     public:  
//         sample() { 
//             n=0; 
//     } 

//     sample(int a) { 
//         n=a; 
//     } 
    
//     sample(sample &x) { 
//         n=x.n; 
//     }

//     void display() { 
//         cout<<n; 
//     } 
// }; 

// int main() { 
//     sample A(100); 
//     cout<<endl;
//     sample B(A);
//     cout<<endl; 
//     sample C=A; 
//     sample D; 

//     D=A; 
//     A.display();
//     cout<<endl; 
//     B.display();
//     cout<<endl; 
//     C.display();
//     cout<<endl; 
//     D.display();
//     cout<<endl; 

// return 0;

// } 




