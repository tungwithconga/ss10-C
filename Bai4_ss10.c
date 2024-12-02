#include <stdio.h>

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

