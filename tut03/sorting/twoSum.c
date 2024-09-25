#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

bool hasTwoSum(int a[], int n, int v);

int main(void) {
    int a[SIZE] = {21, 19, 47, -18, -42, -4, 40, 35, 31, -30};

    // The sorted array is
    // {-42, -30, -18, -4, 19, 21, 31, 35, 40, 47}

    int target = 1;
    if (hasTwoSum(a, SIZE, target)) {
        printf("Array has a two sum that equals %d\n", target);
    } else {
        printf("Array does not have a two sum that equals %d\n", target);
    }
}

/*
e.g.
arr = {21, 19, 47, -18, -42, -4, 40, 35, 31, -30}
target = 13
*/

bool hasTwoSum (int a[], int n, int v) {

    // BRUTE FORCE SOLUTION
    // Time complexity: O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == v) {
                return true;
            }
        }
    }

    // Can we do better?

    return false;
}




for (int i = 0; i < n; i++) {
    statement;                  // n
}

for (int j = 0; j < n; j++) {
    for (int i = 0; i < n; i++) {
        statement;              // n^2
    }
}

steps: n + n^2
        -> O(n^2)


j =    0   1   2        n - 1
steps: n + n + n + ...    n
        n * n


