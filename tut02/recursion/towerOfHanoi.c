#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod);

int main(void) {
    solveHanoi(3, "A", "C", "B");
}

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {
    // base case - nothing left to move
    if (numDisks == 0) return;

    // recursive case - more than one disk
    solveHanoi(numDisks - 1, fromRod, otherRod, toRod);
    printf("Move disk from rod %s to Rod %s\n", fromRod, toRod);
    solveHanoi(numDisks - 1, otherRod, toRod, fromRod);
}
