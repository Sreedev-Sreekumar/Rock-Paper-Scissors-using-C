#include <stdio.h>

int main() {
    int user, computer;

    printf("Rock Paper Scissors Game\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    printf("Enter computer choice (1-3): ");
    scanf("%d", &computer);

    if (user < 1 || user > 3 || computer < 1 || computer > 3) {
        printf("Invalid choice");
    }
    else if (user == computer) {
        printf("Result: Draw");
    }
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2)) {
        printf("Result: You Win");
    }
    else {
        printf("Result: Computer Wins");
    }

    return 0;
}

