#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(0));
int randomNumber=(rand()%100)+1;
int no_of_guesses=0;
int guesses;
do
{
	printf("Guess the number:");
	scanf("%d",&guesses);
if (guesses < randomNumber) {
    printf("Lower number\n");
} else if (guesses > randomNumber) {
    printf("Higher number\n");
} else {
    printf("Correct! ??\n");
}

	no_of_guesses++;
}while(guesses !=randomNumber);
printf("You guessed the number in %d guesses",no_of_guesses);
return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guesses;

    printf("Random Number (for testing): %d\n", randomNumber); // Debugging line

    do {
        printf("Guess the number: ");
        scanf("%d", &guesses);

        if (guesses > randomNumber) {
            printf("Lower number\n");
        } else if (guesses < randomNumber) {
            printf("Higher number\n");
        } else {
            printf("Correct! ??\n");
        }

        no_of_guesses++;
    } while (guesses != randomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);
    return 0;
}
*/
