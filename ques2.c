#include <stdio.h>


void insert(int arr[], int *n, int element, int position) {
    int i;

    
    for(i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*n)++;
}


void display(int arr[], int n) {
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[20], n, i, element, position;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &position);

    insert(arr, &n, element, position);

    
    display(arr, n);

    return 0;
}