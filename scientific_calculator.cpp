#include<iostream.h>  
#include<stdio.h>  
#include<conio.h>  
#include<math.h>  
#include<stdlib.h>  
void add();  
void sub();  
void multi();  
void division();  
void sqr();  
void srt();  
void exit();  
void main()  
{  
clrscr();  
int opr;  
// disp. d/t operation of the calculator  
do  
{  
cout << "Select any operation from the C++ Calculator"  
     "\n1 = Add"  
     "\n2 = Subtract"  
     "\n3 = Multiply"  
     "\n4 = Divide"  
     "\n5 = Square"  
     "\n6 = Square Root"  
     "\n7 = Exit"  
     "\n \n Make a choice: ";  
     cin >> opr;  
  
   switch (opr)  
     {  
     case 1:  
    add();   // calling add() function to find the Addition  
    break;
	  
    case 2:  
    sub();   // calling sub() function to find subtraction  
    break;
	  
    case 3:  
    multi(); // calling multi() function to find multiplication  
    break;
	  
    case 4:  
    division(); // calling division() function to find division  
    break;
	  
    case 5:  
    sqr(); // call sqr() function to find the square of a number  
    break;
	  
    case 6:  
    srt(); // call srt() function to find Square Root of given number  
    break;
	  
    case 7:  
    exit(0);   // terminating the program  
    break;
	  
    default:  
    cout <<" wrong choice!!";  
    break;  
    }  
    cout <<" \n------------------------------\n";  
    }while(opr != 7);  
    getch();  
    }  
  
void add()  
{  
int n, sum = 0, i, number;  
cout <<"How many numbers you want to add: ";  
cin >> n;  

cout << "Please enter number one by one: \n";  
for (i = 1; i <= n; i++)  
{  
cin >> number;  
sum = sum + number;  
}  
cout << "\n Sum of numbers = "<< sum;  
}
  
void sub()  
{  
int num1, num2, z;  
cout <<" \n Enter First number = ";  
cin >> num1;  
cout << "\n Enter Second number = ";  
cin >> num2;  
z = num1 - num2;  
cout <<"\n Subtraction of number = " << z;  
}
  
void multi()  
{  
int num1, num2, mul;  
cout <<" \n Enter First number = ";  
cin >> num1;  
cout << "\n Enter Second number = ";  
cin >> num2;  
mul = num1 * num2;  
cout <<"\n Multiplication of two numbers = " << mul;  
}
  
void division()  
{  
int num1, num2, div = 0;  
cout <<" \n Enter First number = ";  
cin >> num1;  
cout << "\n Enter Second number = ";  
cin >> num2;  
while ( num2 == 0)  
     {  
     cout << "\n Divisor can't be zero"  
         "\n Please enter divisor once again: ";  
         cin >> num2;  
         }  
div = num1 / num2;  
cout <<"\n Division of two numbers = " << div;  
}  
void sqr()  
{  
int num1;  
float sq;  
cout <<" \n Enter number to find the Square: ";  
cin >> num1;  
sq = num1 * num1;  
cout <<" \n Square of " << num1<< " is : "<< sq;  
}  
void srt()  
{  
float q;  
int num1;  
cout << "\n Enter number to find the Square Root:";  
cin >> num1;  
q = sqrt(num1);  
cout <<" \n Square Root of " << num1<< " is : "<< q;  
}  

