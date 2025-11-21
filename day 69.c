/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int visited[1001] = {0};
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;   
        }
        visited[arr[i]] = 1;
    }

    printf("No repeated element found.\n");
    return 0;
}
