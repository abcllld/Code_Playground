#include <stdio.h>

char board[10] = {'o','1', '2', '3', '4', '5', '6', '7', '8', '9'};

int winner();
int table();

int main()
{
    int player = 1, i, player_Choice;

    char mark_In_Board;

    do
    {
        table();

        player = (player % 2) ? 1 : 2;

        printf("Player %d Enter a Number : ", player);
        scanf("%d", &player_Choice);

        mark_In_Board = (player == 1) ? 'X' : 'O';

        if (player_Choice == 1 && (board[1] != 'X' && board[1] != 'O'))
        {
            board[1] = mark_In_Board;
        }

        else if (player_Choice == 2 && (board[2] != 'X' && board[2] != 'O'))
        {
            board[2] = mark_In_Board;
        }

        else if (player_Choice == 3 && (board[3] != 'X' && board[3] != 'O'))
        {
            board[3] = mark_In_Board;
        }

        else if (player_Choice == 4 && (board[4] != 'X' && board[4] != 'O'))
        {
            board[4] = mark_In_Board;
        }

        else if (player_Choice == 5 && (board[5] != 'X' && board[5] != 'O'))
        {
            board[5] = mark_In_Board;
        }

        else if (player_Choice == 6 && (board[6] != 'X' && board[6] != 'O'))
        {
            board[6] = mark_In_Board;
        }

        else if (player_Choice == 7 && (board[7] != 'X' && board[7] != 'O'))
        {
            board[7] = mark_In_Board;
        }

        else if (player_Choice == 8 && (board[8] != 'X' && board[8] != 'O'))
        {
            board[8] = mark_In_Board;
        }

        else if (player_Choice == 9 && (board[9] != 'X' && board[9] != 'O'))
        {
            board[9] = mark_In_Board;
        }

        else
        {
            printf("Enter the Correct Move\n");
            player--;
        }

        i = winner();

        player++;
    } while (i == -1);

    table();

    if (i == 1)
    {
        printf("Congratulations Player %d !! You are the Winner\n", --player);
    }
    else
    {
        printf("This Game Ends In a Draw\n");
    }

    return 0;
}

int winner()
{
    if (board[1] == board[2] && board[2] == board[3])
    {
        return 1;
    }

else if (board[4] == board[5] && board[5] == board[6])
{
return 1;
}

else if (board[7] == board[8] && board[8] == board[9])
{
    return 1;
}

else if (board[2] == board[5] && board[5] == board[8])
{
    return 1;
}

else if (board[3] == board[6] && board[6] == board[9])
{
    return 1;
}

else if (board[1] == board[5] && board[5] == board[9])
{
    return 1;
}

else if (board[3] == board[5] && board[5] == board[7])
{
    return 1;
}

else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9')
{
    return 0;
}
else
{
    return -1;
}
}

int table()
{
printf("\n\n");
printf(" %c | %c | %c \n", board[1], board[2], board[3]);
printf("---|---|---\n");
printf(" %c | %c | %c \n", board[4], board[5], board[6]);
printf("---|---|---\n");
printf(" %c | %c | %c \n", board[7], board[8], board[9]);
}
