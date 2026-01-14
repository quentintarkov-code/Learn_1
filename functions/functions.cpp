#include <iostream>
using namespace std;    

void change_number(int *num_ptr) 
{
    *num_ptr = 50; // Change the value at the address pointed to by num_ptr
}

void print_array(int arr[], int size) 
{
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void print_array2(int *arr_ptr, int size) 
{
    cout << "Array elements using pointer: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << *(arr_ptr + i) << " ";
    }
    cout << endl;
}
void change_array(int *arr_ptr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        *arr_ptr = *arr_ptr + 10; // Increment each element by 10
        arr_ptr++; // Move to the next element
    }
}



int main() 
{
    int number = 10;
    int *num_ptr = &number; // Pointer to number
    cout << "Before change_number, number: " << number << endl;
    change_number(num_ptr); // Pass the address
    cout << "After change_number, number: " << number << endl;
    cout << "We changed the value of number using its pointer." << endl;
    cout << "And function nothing returned." << endl;
    
    int arr[3] = {1, 2, 3};
    print_array(arr, 3); // Pass array to function
    print_array2(arr, 3); // Pass array to function using pointer
    cout << "Now we will change the array elements by passing its pointer to function." << endl;
    change_array(arr, 3); // Change array elements  
    print_array(arr, 3); // Print changed array
    return 0;
}