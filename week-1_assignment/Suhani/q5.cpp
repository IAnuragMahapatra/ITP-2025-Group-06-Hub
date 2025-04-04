#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
	{
        cout << n << " is not a perfect square." << endl;
        return 0;
    }
    int i = 0;
    while (i * i <= n) 
	{
        if (i * i == n) 
		{
            cout << n << " is a perfect square." << endl;
            return 0;
        }
        i++;
    }

    cout << n << " is not a perfect square." << endl;
    return 0;
}