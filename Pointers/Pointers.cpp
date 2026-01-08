#include<iostream>
using namespace std;
int main() {
    short unsigned int var = 20;   // actual variable declaration.
    short unsigned int *var_ptr;  // pointer variable
    var_ptr = &var; // store address of var in pointer variable
    cout << "Value of var(var): " << var << endl;
    cout << "Address of var(&var): " << &var << endl;
    cout << "Value of var_ptr (var_ptr=&var): " << var_ptr << endl;
    cout << "Value pointed to by var_ptr(*var_ptr): " << *var_ptr << endl;
    cout << "iF we change the value of *var_ptr " << endl;
    *var_ptr = 30; // changing value at address stored in var_ptr
    cout << "Now value of var(var): " << var << endl;
    

    char str[]="Hello";
    char *str_ptr;
    str_ptr=str;// equal str_ptr=&str[0];
    cout<<"First elem of str: "<< *str_ptr <<endl;
    str_ptr++;// now str_ptr points to second character.Add 4 bytes to address stored in str_ptr
    cout<<"Second elem of str: "<< *str_ptr <<endl;
    
    int arr[2][2]={1,2,
                   3,4};
    int *arr_ptr;
    arr_ptr=&arr[0][0];// point to first element of 2D array
    cout<<"First elem of arr: "<< *arr_ptr <<endl;
    arr_ptr++;// now arr_ptr points to second element of 2D array
    cout<<"Second elem of arr: "<< *arr_ptr <<endl;
    arr_ptr+=1;// now arr_ptr points to third element of 2D array
    cout<<"Third elem of arr: "<< *arr_ptr <<endl;  
    return 0;
}