#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int dec;
    cout << "Enter a decimal number: ";
    cin>> dec ;
    cout<< "BINARY =" << bitset<8>(dec) << endl;
    cout<< "OCTAL =" << showbase  << oct << dec << endl;
    return 0;

}
