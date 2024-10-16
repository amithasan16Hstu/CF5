/*Write a program to merge two sorted arrays.*/

#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            k++;
            i++;
        } else {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < size1) {
        result[k] = arr1[i];
        k++;
        i++;
    }

    while (j < size2) {
        result[k] = arr2[j];
        k++;
        j++;
    }
}

int main() {
    int size1, size2;

    printf("Enter the size of the first sorted array: ");
    scanf("%d", &size1);

    int arr1[size1];

    printf("Enter the elements of the first sorted array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second sorted array: ");
    scanf("%d", &size2);

    int arr2[size2];

    printf("Enter the elements of the second sorted array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedArray[size1 + size2];

    mergeSortedArrays(arr1, size1, arr2, size2, mergedArray);

    printf("Merged sorted array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}