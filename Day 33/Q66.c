/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, i, key, pos;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];  // +1 -> to insert a new element

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter element to insert: ");
    scanf("%d", &key);

    
    for(pos = 0; pos < n; pos++) {  
        if(arr[pos] > key)      //we are looking for the first element that is greater than the element we want to insert.
            break;
    }

    
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];  // Shifting elements to the right
    }

    arr[pos] = key;
    n++;  
    
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
