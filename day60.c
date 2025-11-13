/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;

    scanf("%d", &n);
    int arr[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    scanf("%d", &k);

   
    int dq[n];
    int front = 0, rear = -1;


    for (int i = 0; i < k; i++) {
        while (front <= rear && arr[dq[rear]] <= arr[i])
            rear--;
        dq[++rear] = i;
    }

    
    for (int i = k; i < n; i++) {


        printf("%d ", arr[dq[front]]);

        while (front <= rear && dq[front] <= i - k)
            front++;

        while (front <= rear && arr[dq[rear]] <= arr[i])
            rear--;

        dq[++rear] = i;
    }

   
    printf("%d", arr[dq[front]]);

    return 0;
}
