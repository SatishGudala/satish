//C++ programming

#include <iostream>
using namespace std;

void generateOddNumbers(int a)
{
    for (int i = 0; i < a; ++i)
    {
        cout << (2 * i + 1); 
        if (i < a - 1) 
        {
            cout << ", "; 
        }
    }
    cout << endl; 
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a < 1)
    {
       cout << "Please enter a positive integer." <<endl;
    }
    else 
    {
        generateOddNumbers(a);
    }

    return 0;
}
