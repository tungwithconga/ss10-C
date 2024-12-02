#include <stdio.h>

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int target;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

    int left = 0, right = length - 1, mid;
    int found = 0;
    
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            printf("Phan tu %d tim thay tai vi tri %d.\n", target, mid);
            found = 1;
            break;
        }
        if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}

