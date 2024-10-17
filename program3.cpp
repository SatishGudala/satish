//C++ programming

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a positive integer (a): ";
    cin >> a;
    if (a < 1)
    {
    cout << "Please enter a positive integer." <<endl;
        return 1;
    }
    for (int i = 0; i < a; ++i)
    {
        cout << (2 * i + 1); 
        if (i < a - 1)
        {
            cout << ", "; 
        }
    }
    cout <<endl; 

    return 0;
}