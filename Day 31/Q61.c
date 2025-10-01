#include <stdio.h>

int main() {
    int n, key;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elelment to search : \n");
    scanf("%d", &key);

    int index = -1;  // default (not found) , index not less than 0.
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;  // found at position i
            break;
        }
    }

    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}
