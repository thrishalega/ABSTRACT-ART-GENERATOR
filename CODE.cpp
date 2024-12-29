#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate abstract art with random asterisks
void generateAbstractArt(int width, int height) {
    // Seed the random number generator
    srand(time(0));

    // Generate random '*' symbols
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // Randomly print '*' or space
            if (rand() % 2 == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int width, height;

    // Print the welcome message
    printf("**********************\n");
    printf("    Welcome to X Arts\n");
    printf("**********************\n\n");

    // Asking for screen size input
    printf("Enter the width of the screen: ");
    scanf("%d", &width);
    printf("Enter the height of the screen: ");
    scanf("%d", &height);

    // Generate the abstract art with random '*' symbols
    generateAbstractArt(width, height);

    return 0;
}

