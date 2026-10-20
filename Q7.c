#include <stdio.h>

int main() {
    //Declare a 3x4 floating-point array[cite: 1]
    float sensor_data[3][4];
    int target_col;

    //Prompt the user to enter data for all 3 days and 4 sensors[cite: 1]
    printf("Enter temperature readings for 3 days (rows) across 4 sensors (columns):\n");
    for (int r = 0; r < 3; r++) {
        printf("Day %d (4 sensor values separated by spaces): ", r + 1);
        for (int c = 0; c < 4; c++) {
            scanf("%f", &sensor_data[r][c]);
        }
    }

    //Ask the user to specify the column index (0 to 3) corresponding to the defective sensor[cite: 1]
    printf("\nEnter the column index of the defective sensor to be removed (0 to 3): ");
    scanf("%d", &target_col);

    //Validate column index
    if (target_col < 0 || target_col > 3) {
        printf("Invalid column index! Please enter a value between 0 and 3.\n");
        return 1;
    }

    //Write Nested Loops to perform column deletion by left-shifting all columns beyond the target index
    for (int r = 0; r < 3; r++) {
        for (int c = target_col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    // 5. Display the updated 3x3 matrix with formatted decimal output
    for (int r = 0; r < 3; r++) {
        printf("Day %d: ", r + 1);
        for (int c = 0; c < 3; c++) {
            printf("%.2f\t", sensor_data[r][c]);
        }
        printf("\n");
    }

    return 0;
}