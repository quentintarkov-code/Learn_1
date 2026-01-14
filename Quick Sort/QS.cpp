#include <iostream>
using namespace std;


void quickSort(int* arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low;
        
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[i], arr[high]);
        
        quickSort(arr, low, i - 1);
        quickSort(arr, i + 1, high);
    }
}

int main() {
    int arr[] = {9, 3, 7, 5, 6, 4, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    quickSort(arr, 0, n - 1);
    
    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}