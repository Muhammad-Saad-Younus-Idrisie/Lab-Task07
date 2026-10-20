#include <stdio.h>

int main() {
    //Declare a 2D integer array int shifts[4][3] with extra row capacity
    int shifts[4][3];
    int target_index;

    //Prompt the user to input the initial 3x3 production data[cite: 1]
    printf("Enter initial 3x3 production data (3 workstations, 3 shifts each):\n");
    for (int i = 0; i < 3; i++) {
        printf("  Workstation %d (3 shift values separated by space): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &shifts[i][j]);
        }
    }

    //Ask the user for the target row index and input the 3 new production values[cite: 1]
    printf("\nEnter target row index where insertion should occur (0 to 2): ");
    scanf("%d", &target_index);

    int new_row[3];
    printf("Enter 3 new production values for the emergency shift: ");
    for (int j = 0; j < 3; j++) {
        scanf("%d", &new_row[j]);
    }

    //Use Nested Loops and element shifting logic to move rows from the bottom up to the target index[cite: 1]
    // We start from the last row (index 3) down to target_index + 1
    for (int i = 3; i > target_index; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j]; // shifts[i][j] = shifts[i-1][j]
        }
    }

    //Insert the new row values at the target row index
    for (int j = 0; j < 3; j++) {
        shifts[target_index][j] = new_row[j];
    }

    //Print the resulting 4x3 matrix in a clean grid format
   for (int i = 0; i < 4; i++) {
        printf("Row %d: ", i);
        for (int j = 0; j < 3; j++) {
            printf("%d\t", shifts[i][j]);
        }
        printf("\n");
    }
    return 0;
}