#include <stdio.h>

int main(){
    //Declaring the array
    char secret_message[3][100];

    //Reading the user input with a validaiton scanset()
    for (int i=0; i<3; i++){
        if (i > 0) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
        //Prompting the user for input and using scanf
        printf("Enter Secret Message %d: ", i+1);
        scanf("%[A-Z]", secret_message[i]);
    }

    //Counting words and spaces in the secret messages
    for (int i = 0; i < 3; i++) {
        int space_count = 0;
        int word_count = 0;

        //Counting spaces in the secret message
        for (int j = 0; secret_message[i][j] != '\0'; j++) {
            if (secret_message[i][j] == ' ') {
                space_count++;
            }
        }

        //Counting the words based on spaces and checking if the string is not empty
        if (secret_message[i][0] != '\0') {
            word_count = space_count + 1;
        }

        printf("Secret Message %d: %s\n", i + 1, secret_message[i]);
        printf("Number of Words: %d\n", word_count);
        printf("Number of Spaces: %d\n", space_count);
    }

    return 0;


}