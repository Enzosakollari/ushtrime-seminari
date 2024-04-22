#include <stdio.h>

int numc(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int totalEven = numc(array, n);
    printf("The number of even elements in the array is: %d\n", totalEven);

    return 0;
}
