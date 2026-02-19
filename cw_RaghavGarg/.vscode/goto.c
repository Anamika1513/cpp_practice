#include<stdio.h> 
int main() { 
int i ,sum = 0,n; 
printf("Enter N"); 
scanf(n); 
i=1; 
L1: 
sum = sum + i; 
i++; 
if(i<=n) goto L1; 
printf("Sum of first" , n," natural numbers is",sum);
return 0; 
} 