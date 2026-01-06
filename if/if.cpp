#include <iostream>
using namespace std;
int main() {
    int a, b;
    std::cout << "Please enter two numbers: ";
    std::cin >> a >> b;
    if (a<b)
    {
        std::cout << "The first number is less than the second number." << std::endl;
    }
    if (a>b)
    {
        std::cout << "The first number is greater than the second number." << std::endl;
    }
    if (a==b)
    {
        std::cout << "The first number is equal to the second number." << std::endl;
    }
    cout << "Now test if-else structure" << endl;
    cin >> a >> b;
    if (a<b)
    {
        cout << "The first number is less than the second number." << endl;
    }
    else if (a>b)
    {
        cout << "The first number is greater than the second number." << endl;
    }
    else
    {
        cout << "The first number is equal to the second number." << endl;
    }
    
    return 0;
}