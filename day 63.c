/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/
#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the value of k: ");
    scanf("%d", &k);


    sort(arr, n);

    if (k > 0 && k <= n) {
        printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid value of k!\n");
    }

    return 0;
}
