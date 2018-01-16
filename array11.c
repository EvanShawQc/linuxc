

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	char		gesture [3][10] = {"scissor",
	"stone", "cloth"};
	int		human, computer, ret, result;

	srand(time(NULL));

	while (1) {
		computer = rand() % 3;
		printf("\nInput your gesture(0-scissor "
		       "1-stone 2-cloth):\n");
		ret = scanf("%d", &human);
		if (ret != 1 || human < 0 || human > 2) {
			printf("Invalid input!\n");
			return 1;
		}
		printf("You: %s\tComputer: %s\n",
		       gesture[human], gesture[computer]);

		result = (human - computer + 4) % 3 - 1;
		if (result > 0) {
			printf("You win!\n");
		} else if (result == 0) {
			printf("Draw!\n");
		} else {
			printf("You lose!\n");
		}
	}

	return 0;
}
