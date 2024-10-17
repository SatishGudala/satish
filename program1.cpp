//C++ programming

#include <iostream>
#include <string>
using namespace std;

class Calculator 
{
   public:double add(double a, double b) 
   {
        return a + b;
    }
    double subtract(double a, double b)
    {
        return a - b;
    }
    double multiply(double a, double b)
    {
        return a * b;
    }
    double divide(double a, double b)
    {
        if (b != 0)
        {
            return a / b;
        } 
        else 
        {
            throw invalid_argument("Division by zero is not allowed.");
        }
    }
    double performOperation(double a, double b, const string& operation) 
    {
        if (operation == "add")
        {
            return add(a, b);
        }
        else if (operation == "subtract")
        {
            return subtract(a, b);
        }
        else if (operation == "multiply")
        {
            return multiply(a, b);
        }
        else if (operation == "divide")
        {
            return divide(a, b);
        }
        else 
        {
            throw invalid_argument("Invalid operation type.");
        }
    }
};

int main() 
{
    double a, b;
    string operation;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;
    cout << "Enter the type of operation (add, subtract, multiply, divide): ";
    cin >> operation;
    Calculator calculator;
    try 
    {
    double result = calculator.performOperation(a, b, operation);
        cout << "Result: " << result <<endl;
    } 
    catch (const std::invalid_argument& e)
    {
        cout << "Error: " << e.what() <<endl;
    }

    return 0;
}
