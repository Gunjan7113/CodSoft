#include<iostream>
using namespace std;
int main()
{

int num1,num2,choice;
	cout<<"GARV"<<endl;
	cout<<"2410997105"<<endl;
cout<<"Enter the value of num1:-";
cin>>num1;
cout<<"Enter the value of num2:-";
cin>>num2;

cout<<"Enter 1 for addition\n";
cout<<"Enter 2 for Subtraction\n";
cout<<"Enter 3 for Multiplication\n";
cout<<"Enter 4 for division\n";
cout<<"Enter 5 for equality\n";
cout<<"Enter 6 for increment\n";
cout<<"Enter 7 for decrement\n";

cout<<"Enter your choice please\n";
cin>>choice;

switch(choice)
{
   case 1:
   	  cout<<"Addition of 2 numbers is "<<num1+num2;
   	  break;
   case 2:
   	  cout<<"Subtraction of 2 numbers is "<<num1-num2;
   	  break;
  case 3:
   	  cout<<"Multiplication of 2 numbers is "<<num1*num2;
   	  break;
  case 4:
   	  cout<<"Division of 2 numbers is "<<num1/num2;
   	  break;
case 5:
       if(num1==num2)
   	      cout<<"They are equal";
   	  else
   	      cout<<"They are not equal";
   	  break;

case 6:
     cout<<"Incremented value of num1 is "<<++num1;
     cout<<"\n Incremented value of num2 is"<<++num2;
     break;    
case 7:
     cout<<"Decremented value of num1 is"<<--num1;
     cout<<"\n Decremented value of num2 is"<<--num2;
     break;
     
     default:
     	cout<<"Kindly check your choice and press b/w 1-7";


}


}
