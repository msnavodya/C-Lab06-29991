#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], scalarSum = 0;
    int vectorSum[size];

    // Input values for the first array
    printf("Enter %d elements for Array 1:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
        scalarSum += array1[i];
    }

    // Input values for the second array
    printf("Enter %d elements for Array 2:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
        scalarSum += array2[i];
        vectorSum[i] = array1[i] + array2[i]; // Calculate vector sum
    }

    // Display scalar sum
    printf("Scalar Sum: %d\n", scalarSum);

    // Display vector sum
    printf("Vector Sum (Array1 + Array2):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    return 0;
}
