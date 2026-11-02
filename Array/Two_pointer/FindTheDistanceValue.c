#include <stdlib.h> 
#include <stdbool.h> 

bool f(int k, int* arr, int arrSize, int d) {
    for (int i = 0; i < arrSize; i++) {
        int result = abs(arr[i] - k);
        if (result <= d) {
            return false;
        }
    }
    return true;
}

int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int count = 0;
    for (int i = 0; i < arr1Size; i++) {
        bool flag = f(arr1[i], arr2, arr2Size, d);
        if (flag == true) {
            count++;
        }
    }
    return count;
}