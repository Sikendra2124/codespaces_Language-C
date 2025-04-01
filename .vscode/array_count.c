#include<stdio.h>
void main() {
    int i, j, t, arr[5];
    
    // Input elements
    for(i = 0; i < 5; i++) {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    
    // Display accepted elements
    printf("Accepted elements are: ");
    for(i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    // Sort the array in ascending order
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    
    // Count and display repetitions
    i = 0;
    while(i < 5) {
        int c = 1;  // Counter for repetitions
        for(j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                c++;
            } else {
                break;
            }
        }
        printf("%d is repeated %d times\n", arr[i], c);
        i += c;  // Skip to the next unique element
    }
}
