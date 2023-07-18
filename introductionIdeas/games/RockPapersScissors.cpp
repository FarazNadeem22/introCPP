#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
#include <ctime>
using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

void sleepSeconds(int seconds)
{
    // cout << "Sleeping for " << seconds << " seconds\n";
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

char getUserChoice()
{
    char player;
    bool notDone = true;
    do
    {
        cout << "***********************\n";
        cout << "  ROCK PAPER SCISSORS\n";
        cout << "***********************\n";
        cout << "Rock (r):\n";
        cout << "Paper (p): \n";
        cout << "Scissors(s): \n";
        cout << "***********************\n";
        cin >> player;

        player = tolower(player);

        if ((player == 'r') || (player == 'p') || (player == 's'))
        {
            notDone = false;
        }
        else
        {
            cout << "Incorrect choice please try again.";
            sleepSeconds(1);
            system("cls");
        }

    } while (notDone);

    return player;
}

char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock.\n";
        break;

    case 'p':
        cout << "Paper.\n";
        break;

    case 's':
        cout << "Scissors.\n";
        break;

    default:
        break;
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "It's a tie \n";
        }
        else if (computer == 'p')
        {
            cout << "Paper covers rock! Computer Wins \n";
        }
        else
        {
            cout << "Rock breaks scissors! Player Wins \n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            cout << "Paper covers rock! Player Wins \n";
        }
        else if (computer == 'p')
        {
            cout << "It's a tie \n";
        }
        else
        {
            cout << "Scissors cuts paper. Computer Wins \n";
        }
        break;
    case 's':
        if (computer == 's')
        {
            cout << "It's a tie \n";
        }
        else if (computer == 'r')
        {
            cout << "Rock breaks scissors! Computer Wins \n";
        }
        else
        {
            cout << "Scissors cuts paper. Player Wins \n";
        }
        break;
    }
}

int main()
{
    system("cls");
    char player, computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    sleepSeconds(1);

    chooseWinner(player, computer);
}