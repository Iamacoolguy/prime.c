#include <stdio.h>

#include <stdbool.h>

bool isPrime(int num) {

    if (num <= 1) return false;

    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {

        if (num % i == 0 || num % (i + 2) == 0)

            return false;

    }

    return true;

}

int main() {

    int n;

    printf("Enter the number of elements: ");

    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);

    }

    int prime[n], non_prime[n];

    int p_count = 0, np_count = 0;

    for (int i = 0; i < n; i++) {

        if (isPrime(arr[i])) {

            prime[p_count] = arr[i];

            p_count++;

        } else {

            non_prime[np_count] = arr[i];

            np_count++;

        }

    }

    printf("Prime numbers: ");

    for (int i = 0; i < p_count; i++) {

        printf("%d ", prime[i]);

    }

    printf("\n");

    printf("Non-prime numbers: ");

    for (int i = 0; i < np_count; i++) {

        printf("%d ", non_prime[i]);

    }

    return 0;

}

