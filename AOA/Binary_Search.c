#include <stdio.h>

int main()
{
    int arr[100], size, target, low = 0, high, mid;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements in ascending order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    high = size - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            printf("%d found at index %d\n", target, mid);
            return 0;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d not found in the array\n", target);
    return 0;
}