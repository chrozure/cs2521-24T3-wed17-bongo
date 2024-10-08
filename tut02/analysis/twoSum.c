#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool twoSum(int arr[], int size, int target);

int main(void) {
    assert(twoSum((int[]){}, 0, 5) == false);
    assert(twoSum((int[]){4}, 1, 4) == false);
    assert(twoSum((int[]){4}, 1, 8) == false);
    assert(twoSum((int[]){2, 3}, 2, 4) == false);
    assert(twoSum((int[]){2, 3}, 2, 5) == true);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 8) == true);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 9) == true);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 11) == true);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 12) == true);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 17) == true);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 2) == false);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 4) == false);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 5) == false);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 15) == false);
    assert(twoSum((int[]){7, 4, 10, 4, 2}, 5, 21) == false);

    assert(twoSum((int[]){21, 19, 47, -18, -46, -4, 42, 35, 31, -30}, 10, 50) == true);
}

bool twoSum(int arr[], int size, int target) {
    // TODO
    return false;
}


/*
e.g.
arr = {21, 19, 47, -18, -46, -4, 42, 35, 31, -30}
target = 17

hasTwoSum(A, v):
	Input:  array A[0..n - 1] of integers
	        integer v
	Output: true if A contains two elements that sum to v, false otherwise

    for i going from 0 to n - 1:
        for j going from i+1 to n - 1:
            if arr[i] + arr[j] == target:
                return true

Time complexity:
    T(n) = (n - 1) + (n - 2) + ... + 3 + 2 + 1
    = 1/2 * n(n - 1)
    = 1/2 * n^2 - 1/2 * n
    -> n^2 + n
    -> O(n^2)
*/
