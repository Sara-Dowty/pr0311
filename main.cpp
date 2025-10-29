#include <iostream>
#include <iomanip>

using namespace std;

string prompt1 = "Enter first 4-digit hex number: ";
string prompt2 = "Enter second 4-digit hex number: ";
string space = " ";
string print1 = "Before swap (r0, r1): ";
string print2 = "After swap (r0, r1): ";

unsigned int x, y;

int main()
{
    cout << prompt1;
    cin >> hex>>x;
    cout<<endl;
    cout << prompt2;
    cin >>hex>> y;
    cout<<endl;

    //Print before the swap
    cout << print1;
    cout<<hex<<x;
    cout<<space;
    cout<<hex<<y;
    cout<<endl;
    //swap numbers
    x ^= y;
    y^=x;
    x^=y;
    //print after swap
    cout<<print2;
    cout<<hex<<x;
    cout<<space;
    cout<<hex<<y;
    cout<<endl;
    return 0;
}
