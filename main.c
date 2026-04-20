#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("=== Simple Quiz Program ===\n");

    printf("\n1. What is the capital of India?\n");
    printf("1) Mumbai\n2) Delhi\n3) Kolkata\n4) Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }

    printf("\n2. Which language is used in C programming?\n");
    printf("1) English\n2) Hindi\n3) Programming Language\n4) Java\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }

    printf("\n3. What is 2 + 2?\n");
    printf("1) 3\n2) 4\n3) 5\n4) 6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }

    printf("\nYour total score is: %d out of 3\n", score);

    if (score == 3) {
        printf("Excellent!\n");
    } else if (score == 2) {
        printf("Good job!\n");
    } else {
        printf("Try again!\n");
    }

    return 0;
}
