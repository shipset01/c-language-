/******************************************************
A program with some functions and comments
******************************************************/
#include <iostream>
using namespace std;
void line(), message(); // Prototypes
int main()
  // open files --->inputs & results
{
cout << "Hello! The program starts in main()."
<< endl;
line();
message();
line();
cout << "At the end of main()." << endl;
return 0;
}
// add function 
void line() // To draw a line.
{
cout << "--------------------------------" << endl;
}
void message() // To display a test message.
{
cout << "In function message()." << endl;
}
