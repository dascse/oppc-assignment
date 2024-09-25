#include<stdio.h>

int main() {
    int n;  
    int i;  
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];  
    int *ptr;    
    
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    
    printf("\nArray elements accessed using the pointer:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i),i+1);  
 }

}
