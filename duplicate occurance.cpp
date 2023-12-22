#include <stdio.h>

void printFrequency(int arr[], int n) {
    if (n <= 0) {
        return;  // Empty array
    }

    int current_element = arr[0];
    int frequency = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == current_element) {
            frequency++;
        } else {
            if (frequency > 1) {
                printf("%d->%d, ", current_element, frequency);
            }

            current_element = arr[i];
            frequency = 1;
        }
    }

    // Check for the last element
    if (frequency > 1) {
        printf("%d->%d", current_element, frequency);
    }
}

int main() {
    int N = 12;
    int Array[] = {1, 1, 1, 2, 4, 4, 4, 4, 5, 6, 9, 9};

    printf("Sample Input:\nN = %d\nArray = {", N);
    for (int i = 0; i < N; i++) {
        printf("%d", Array[i]);
        if (i < N - 1) {
            printf(",");
        }
    }
    printf("}\n");

    printf("Sample Output:\n");
    printFrequency(Array, N);

    return 0;
}

