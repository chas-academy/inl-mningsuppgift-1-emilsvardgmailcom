#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Your code goes here
    int dice_rolls[100];
    int number_count[6] = {0};
    int sum = 0;

    for (int i=0; i<100; i++) {
        dice_rolls[i] = (rand() % 6) + 1;
        number_count[dice_rolls[i]-1]++;
        sum += dice_rolls[i];
    }

    for (int i=0; i<6; i++) {
        printf("%d\n", number_count[i]);
    }

    printf("%d\n", sum);
    printf("%.1f", sum / 100.0);

    return 0;
}
