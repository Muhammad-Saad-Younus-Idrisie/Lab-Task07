#include <stdio.h>
#include <string.h>

int main() {
    //Create a 2D array
    char word_grid[3][100];
    char longest_word[100] = "";
    int max_len = 0;
    int best_i = 0, best_j = 0;

    //Read each line from the user using the Scanset
    for (int i = 0; i < 3; i++) {
        //Clear the input buffer from any leftover newline character
        if (i > 0) {
            getchar();
        }
        
        printf("Enter line %d (3 space-separated words, e.g., 'cat elephant dog'): ", i + 1);
        scanf("%[^\n]", word_grid[i]);
    }

    //Write Nested Loops to tokenize/parse words from each row and evaluate lengths[cite: 1]
    for (int i = 0; i < 3; i++) {
        char temp_words[3][50];
        
        //Parse the 3 space-separated words from the current row string
        int count = sscanf(word_grid[i], "%s %s %s", temp_words[0], temp_words[1], temp_words[2]);

        //Inner loop to traverse each tokenized word in the row
        for (int j = 0; j < count; j++) {
            int len = strlen(temp_words[j]);
            
            //Identify the word with the maximum length
            if (len > max_len) {
                max_len = len;
                strcpy(longest_word, temp_words[j]);
                best_i = i; // Row Index
                best_j = j; // Column Index
            }
        }
    }

    // Output the longest word along with its specific Row Index and Column Index
    printf("Longest word: %s\n", longest_word);
    printf("Length of longest word: %d\n", max_len);
    printf("Row Index (i): %d\n", best_i);
    printf("Column Index (j): %d\n", best_j);


    return 0;
}