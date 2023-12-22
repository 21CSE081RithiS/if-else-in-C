#include <stdio.h>
#include <string.h>

void justifySentence(char sentence[], int screenLength) {
    int len = strlen(sentence);

    if (len == 0 || screenLength <= 0) {
        printf("Invalid input.\n");
        return;
    }

    int spacesToAdd = screenLength - len;
    int spacesBetweenWords = 0;

    if (len > 1) {
        spacesBetweenWords = spacesToAdd / (len - 1);
    }

    for (int i = 0; i < len; i++) {
        if (sentence[i] == ' ' && i < len - 1) {
            for (int j = 0; j < spacesBetweenWords; j++) {
                printf("*");
            }

            spacesToAdd -= spacesBetweenWords;
        }

        printf("%c", sentence[i]);
    }

    for (int i = 0; i < spacesToAdd; i++) {
        printf("*");
    }
}

int main() {
    char sentence[100];
    int screenLength;

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the screen length: ");
    scanf("%d", &screenLength);

    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Sample Output:\n");
    justifySentence(sentence, screenLength);

    return 0;
}

