#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] == arr[j])
                return true;
        }
    }
  return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    bool result = containsDuplicate(arr, length);
    printf("%s\n", result ? "true" : "false");

    return 0;
}