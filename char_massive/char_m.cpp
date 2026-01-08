#include <iostream>
using namespace std;    
int main() {
    std::cout << "Character array example" << std::endl;

    // Character array initialization
    const int size = 6; // 5 characters + null terminator
    char charArr[size] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // Displaying the character array
    cout << "Character array contains: " << charArr << endl;

    // Character array with user input
    char userCharArr[5];
    cout << "Enter a string (max 4 characters): ";
    cin.getline(userCharArr, 5);

    cout << "You entered: " << userCharArr << endl;
    //if user inputs more than 4 characters only first 4 will be stored, rest will be ignored without error.
    return 0;

    char anotherArr[10][5];// this is array of 10 strings each can hold 89 characters + null terminator
    for(int i=0;i<10;i++){  
        for (int y= 0; y < 5; y++)
        {
            //line-by-line filling of 2D char array
            cin>>anotherArr[i][y];
        }
        
    }                                   
}