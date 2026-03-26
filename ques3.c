#include <stdio.h>


void deleteElement(int arr[], int *n, int position) {
    int i;

    
    for(i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    (*n)--;
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
    int arr[20], n, i, position;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &position);


    deleteElement(arr, &n, position);

    
    display(arr, n);

    return 0;
}