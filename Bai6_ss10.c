#include <stdio.h>

int main() {
    int arr[] = {34, 7, 23, 32, 7, 62, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

    int positions[length];
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            positions[count] = i;
            count++;
        }
    }

    if (count > 0) {
        printf("Phan tu %d tim thay tai vi tri: ", target);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}

