// Generating the Fibonacci sequence using nested loops ||
#include <iostream>
using namespace std;
int main() {
//declaring rows, number 1, number 2 and sum of numbers ::
int r,num1, num2, sum=0;
//Taking number of rows from user ::
cout<<"Please enter number of rows  : ";
cin>>r;

// outer loop for number of rows ::
 for(int i=0; i<r; i++){
 num1=0;                  //__Taking number1 =0 __
 num2=1;                  //__Taking number2 =1 __
 
 for(int j=0;j<=i;j++)    // innner loop for Fibonacci sequence ::
 {
    cout<<" "<<num1<<" ";   
    sum=num1+num2;
    num1=num2;           // __ declaring num2 as num1 __
    num2=sum;            // __ declaring sum as num2 __
 }
 cout<<endl;
 }
 return 0;
 }
