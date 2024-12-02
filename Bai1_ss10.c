#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int length = sizeof(arr) / sizeof(arr[0]);
    int target, found = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            printf("Phan tu %d ton tai tai vi tri index %d.\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}

