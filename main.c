#include <stdio.h>

    int main() {
    int number=50;
    int guess;

     printf("===number guessing game===\n");

    do {
        printf("Enter guess: ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High\n");
        else if (guess < number)
            printf("Too Low\n");
        else
            printf("Correct!\n");

    } while (guess != number);

    return 0;
}





















