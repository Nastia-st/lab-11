#include <stdio.h>
#define SIZE1 70
#define SIZE2 80

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    system("chcp 65001");
    int x1[SIZE1];
    int x2[SIZE2];
    for (int i = 0; i < SIZE1; i++) {
        x1[i] = i + 1;
    }
    for (int i = 0; i < SIZE2; i++) {
        x2[i] = i + 2;
    }
    
    int max1 = x1[0];
    for (int i = 1; i < SIZE1; i++) {
        if (x1[i] > max1) {
            max1 = x1[i];
        }
    }
    int max2 = x2[0];
    for (int i = 1; i < SIZE2; i++) {
        if (x2[i] > max2) {
            max2 = x2[i];
        }
    }

    float z = (max1 + max2) / 2.0;
    int min1 = findMin(x1, SIZE1);
    int min2 = findMin(x2, SIZE2);

    printf("Максимальне x1: %d\n", max1);
    printf("Максимальне x2: %d\n", max2);
    printf("Мінімальне x1: %d\n", min1);
    printf("Мінімальне x2: %d\n", min2);
    printf("Значення z: %.2f\n", z);
    return 0;
}