#include <iostream>
using namespace std;
int main() {
    std::cout << "For example" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< "This cycle will run 5 times and i will increase from 0 to 4. " << endl;
        std::cout << "i = " << i << std::endl;
    }
    for (int i = 0; i < 3; i)
    {
        cout<< "This cycle will run 3 times and i will increase in cycle" << endl;
        std::cout << "i = " << i << std::endl;
        i++;
    }
    for (int i = 0; i < 3; ++i)
    {
        cout<< "This cycle will run 3 too" << endl;
        std::cout << "i = " << i << std::endl;
    }
    
    return 0;
}