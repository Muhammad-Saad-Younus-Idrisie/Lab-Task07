#include <stdio.h>

int main() {
    //Declare a 2D character array
    char sentences[3][100];

    printf("Enter a paragraph containing 3 semicolon-separated sentences \n");
    printf("(e.g., Learn C programming; Nested loops are powerful; Practice daily):\n");

    //Read sentences using Negated Scanset %[^;] and discard semicolon with %*c
    for (int i = 0; i < 3; i++) {
        // Space before %[^;] on the first iteration clears any leading whitespace/newlines
        if (i == 0) {
            scanf(" %[^;]%*c", sentences[i]);
        } else {
            scanf("%[^;]%*c", sentences[i]);
        }
    }

    for (int i = 0; i < 3; i++) {
        int vowel_count = 0;

        // Inner loop traverses each character of the string row
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            char ch = sentences[i][j];
            
            // Check for case-insensitive vowels (a, e, i, o, u)
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel_count++;
            }
        }

        // Display individual sentence and its vowel count
        printf("Sentence %d: \"%s\"\n", i + 1, sentences[i]);
        printf("  - Vowel Count: %d\n", vowel_count);
    }

    return 0;
}