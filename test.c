#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    printf("Enter a string: ");
    fgets(string, 100, stdin);
    int count = 0;
    char* word = strtok(string, " ");
    while (word != NULL) {
        if (word[0] == word[strlen(word)-2] && isupper(word[0])) {
            count++;
        }
        word = strtok(NULL, " ");
    }
    printf("Number of words that start and end with the same letter: %d", count);
    return 0;
}

