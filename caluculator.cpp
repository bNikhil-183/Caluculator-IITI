#include <iostream>
using namespace std;

//Copied Square root from Chat GPT
// Simple function to calculate square root using an iterative approach
double simple_sqrt(double n) {
    if (n < 0) {
        std::cerr << "Error: Square root of a negative number is undefined." << std::endl;
        return -1; // Return an error value for negative input
    }

    double guess = n;
    double epsilon = 1e-6; // Accuracy threshold

    while ((guess * guess - n) > epsilon || (n - guess * guess) > epsilon) {
        guess = (guess + n / guess) / 2;
    }

    return guess;
}


int main() {

while (true)
{
cout<<"WELCOME TO NIKHIL'S CALUCULATOR, choose the number in the brackets to perform the action";

cout<<"\nADDITION(1)\nSUBTRACTION(2)\nMULTIPLICATION(3)\nDIVISION(4)\nMODULO FUNCTION(5)\nTRIGONOMETRIC FUNCTIONS(6)\nLOGARITHM(7)\nSQUARE ROOT(8)\nROOTS OF QUADRATIC EQUATION(9)\n";

int a;
cin>>a;

double A, B, x;

//Addition

if (a == 1){

 cout<<"\ngive two numbers by giving a space between them to add\n";

 cin>>A;
 cin>>B;
 cout<< "Sum="<<A+B;
 break;
}

//Subtraction

else if (a == 2){

 cout<<"\ngive two numbers by giving a space between them to subtract\n";
 cin>>A;
 cin>>B;
 cout<< "difference="<<A-B;
 break;
}

//Multiplication

else if (a == 3)
{
 cout<<"\ngive two numbers by giving a space between them to multiply\n";
 
 cin>>A;
 cin>>B;
 cout<< "product="<<A*B;
 break;
}

//Divison

else if(a == 4) 
{
 cout<<"\ngive two numbers by giving a space between them to divide them(make sure second number is not 0)\n";

 cin>>A;
 cin>>B;
 cout<< "quotient="<<A/B;
 break;
}

//Modulus function

else if(a == 5) 
{
 cout<<"\ngive two numbers by giving a space between them to divide and record the remainder(make sure second number is not 0)\n";

int A,B;
 cin>>A;
 cin>>B;
 cout<< "remainder="<<A % B;
 break;

}

// Trigonometric functions -- failing in few cases

else if(a == 6)
{   

cout<<"We have Sin(1), Cos(2), Tan(3), Cot(4), Cosesc(5), Sec(6) functions(all outputs are approximations)\n";
cout<<"Give the number in the bracket to call the function desired\n";
cin>>a;
double b;

if (a == 1)
  {
  cout<<"\ngive the number 'x'(in radians) for which you want Sin value\n";
  cin>>b;
  double P=b - (b*b*b)/6 + (b*b*b*b*b)/120 - (b*b*b*b*b*b*b)/5040;
  cout<<"sinx= "<<P;
  break;
  }

if (a == 2)
  {
  cout<<"\ngive the number 'x' for which you want Cos value\n";
  cin>>b;
  double Q= 1 - b*b/2 + b*b*b*b/24 - b*b*b*b*b*b/720;
  cout<<"cosx="<<Q;
  break;
  }

if (a == 3)
  {
  cout<<"\ngive the number 'x' for which you want Tan value\n";
  cin>>b;
  double P=b - (b*b*b)/6 + (b*b*b*b*b)/120 - (b*b*b*b*b*b*b)/5040;
  double Q= 1 - b*b/2 + b*b*b*b/24 - b*b*b*b*b*b/720;
  cout<<"tanx="<<P/Q;
  break;
  }

if (a == 4)
  {
  cout<<"\ngive the number 'x' for which you want Cot value\n";
  cin>>b;
  double P=b - (b*b*b)/6 + (b*b*b*b*b)/120 - (b*b*b*b*b*b*b)/5040;
  double Q= 1 - b*b/2 + b*b*b*b/24 - b*b*b*b*b*b/720;
  cout<<"cotx="<<Q/P;
  break;
  }
  
if (a == 5)
  {
  cout<<"\ngive the number 'x' for which you want Cosec value\n";
  cin>>b;
  double P=b - (b*b*b)/6 + (b*b*b*b*b)/120 - (b*b*b*b*b*b*b)/5040;
  cout<<"Cosecx="<<1/P;
  break;
  }
  
if (a == 6)
  {
  cout<<"\ngive the number 'x' for which you want Sec value\n";
  cin>>b;
  double Q= 1 - b*b/2 + b*b*b*b/24 - b*b*b*b*b*b/720;
  cout<<"Secx="<<1/Q;
  break;
  }

}

//LOGARITHM

else if (a == 7){

cout<<"\nGive x to print y=lnx 0<X<=1 \n";
cin>>x;
A=x-1;
cout<<"lnx="<<A - A*A/2 + A*A*A/3 - A*A*A*A/4 + A*A*A*A*A/5;
break;
}

//SQUARE ROOT (Copied from Chat GPT)

else if (a == 8){

cout<<"\nGive x to print square root of x\n";
cin>>x;
cout<<"Square root of "<<x<<" is "<<simple_sqrt(x);
break;
}


//Quadratic equation
else if(a == 9) 
{
 cout<<"\ngive a,b,c such that the quadratic equation is ax^2+bx+c \n";
 
double C,Z1,Z2;
 cin>>A;
 cin>>B;
 cin>>C;
 cout<<"\nthe roots of the given quadratic equation are Z1 and Z2\n";

Z1= ((-B)+simple_sqrt((B*B)-(4*A*C)))/(2*A) ;
Z2= ((-B)-simple_sqrt((B*B)-(4*A*C)))/(2*A) ;

cout<<"Z1="<<Z1<<" Z2="<<Z2;
break;
}

else
{
        cout<<"ENTER VALID INPUT\n"<<endl;
        continue;
}

}
return 0;

}