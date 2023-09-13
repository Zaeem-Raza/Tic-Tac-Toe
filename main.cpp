//* Tic tac toe game
#include "source.cpp"
int main()
{
Start:
    cout << "********************************************" << endl;
    cout << "*                                          *" << endl;
    cout << "*         Welcome to Tic Tac Toe!          *" << endl;
    cout << "*                                          *" << endl;
    cout << "********************************************" << endl;
    system("pause");
    system("CLS");

    Board game_board;

    int input;
    bool tie = 1;
    for (int i = 0; i < 5; i++)
    {
        game_board.Display();
        cout << "\n\tPlayer1: "
             << "X\t\t"
             << "Player 2: O\n";
        cout << "Player 1's turn \n";
        cout << "Enter the position (1-9): ";
        cin >> input;
        while (!(input >= 1 && input <= 9))
        {
            cout << "Invalid Input\nEnter Again: ";
        }
        game_board.mark(1, input);
        if (game_board.checkResults() == 1)
        {
            game_board.Display();
            game_board.winner(1);
            tie = 0;
            break;
        }

        cout << "\nPlayer 2's turn\n";
        cout << "Enter the position (1-9): ";
        cin >> input;
        while (!(input >= 1 && input <= 9))
        {
            cout << "Invalid Input\nEnter Again: ";
        }
        game_board.mark(2, input);
        if (game_board.checkResults() == 2)
        {
            game_board.Display();
            game_board.winner(2);
            tie = 0;
            break;
        }
        system("pause");
        system("CLS");
    }
    game_board.Display();
    if (tie)
    {

        cout << "--------DRAW--------";
    }
    char user;
    cout << "\n\nDo you Want to play Again??? (Y/N)   :";
    cin >> user;
    if (tolower(user) == 'y')
    {
        goto Start;
    }
    else
    {
        cout << "\n\t\t________________Thank you for Playing Tic Tac Toe________________";
    }

    return 0;
}