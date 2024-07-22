/* Initialization list in Constructors in Cpp ===>>

    The initialization list in constructors is another concept of initializing the data 
    members of the class. The syntax of the initialization list in constructors is shown below.

       Syntax for initialization list in constructor:
       constructor (argument-list) : initilization-section
      {
          assignment + other code;
      }

*/
#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}

