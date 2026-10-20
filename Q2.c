#include <stdio.h>

int main(){
    //Declaring the array and the uppercase counter variable
    char logs[3][30];
    int uppercase_count = 0;

    //Prompting and taking inputs for the logs
    for (int i=0; i<3; i++){
        if (i>0){
            getchar();
        }
        printf("Enter Log %d: ", i+1);
        //Reading including commas
        scanf("%[^\n]", logs[i]);
    }

    //Counting the uppercase letters in the logs
    for (int i=0; i<3; i++){
        for (int j=0; logs[i][j] != '\0'; j++){
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z'){
                uppercase_count++;
            }
        }
    }

    //Displaying the final Uppercase letter count
    printf("Total Uppercase Letters: %d\n", uppercase_count);
    return 0;
}