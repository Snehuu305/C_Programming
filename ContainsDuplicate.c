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
