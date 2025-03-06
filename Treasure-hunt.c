#include <stdio.h>
int main()
{
    int path, action, bridage, puzzle_m, puzzel_r, flag = 0;
    scanf("%d", &path);

    switch (path)
    {
    case 1:
        printf("Player chooses the Left path.\n");

        scanf("%d", &action);

        if (action == 1)
        {
            printf("Poor choice, Game Over!\n");
        }
        else if (action == 2)
        {
            printf("Player found a bridge.\n");

            scanf("%d", &bridage);

            if (bridage == 1)
            {
                printf("Player crosses the bridge safely.\n");
                flag = 1;
            }
            else if (bridage == 2)
            {
                printf("Poor luck, Game Over!\n");
            }
        }
        break;

    case 2:
        printf("Player chooses the Middle path.\n");

        // printf("I am a three-digit number. My second digit is four times bigger than the third digit, my first digit is three less than the second digit, and the sum of my digits is 15. What number am I?\n");

        scanf("%d", &puzzle_m);

        if (puzzle_m == 582)
        {
            printf("Player solved the puzzle.\n");
            flag = 1;
        }
        else
        {
            printf("Foolish player, Game Over!\n");
        }
        break;

    case 3:
        printf("Player chooses the Right path.\n");

        // printf("What number comes next in the sequence: 2, 6, 12, 20, __?\n");
        scanf("%d", &puzzel_r);

        if (puzzel_r == 30)
        {
            printf("Player solved the puzzle.\n");
            flag = 1;
        }
        else
        {
            printf("Foolish player, Game Over!\n");
        }
        break;

    default:
        break;
    }

    if (flag == 1)
    {
        int chest;
        scanf("%d", &chest);

        switch (chest)
        {
        case 1:
            printf("All that glitters is not gold, Game Over!");
            break;

        case 2:
            printf("All your efforts were for nothing, Game Over!");
            break;

        case 3:
            printf("Congratulations!! You won the treasure.");

        default:
            break;
        }
    }
}