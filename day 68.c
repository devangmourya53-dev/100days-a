/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    
    int expectedSum = n * (n + 1) / 2;

   
    int actualSum = 0;
    for(int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}
