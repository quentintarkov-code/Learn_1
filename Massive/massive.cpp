#include <iostream>
using namespace std;
int main() {

    //manual array
    std::cout << "Massive example" << std::endl;
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    for (int i = 0; i < size; i++)
    {
        cout << "Element at index " << i << " is " << arr[i] << endl;
    }

    //array with user input. Length is calculated using sizeof.int element is 4 bytes.Size of massive is 12 bytes.Divide 12/4=3
    int arr2[3];
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr2[i]; 
    }
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        cout << "Element at index " << i << " is " << arr2[i] << endl;
    }
    
    return 0;
}