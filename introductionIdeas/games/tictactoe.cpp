#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <string>
#include <cstdlib>

using std::cin, std::cout, std::string, std::stoi;

void sleepSeconds(int seconds);
void clear();
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    clear();
    char spaces[9] = {' ',
                      ' ',
                      ' ',
                      ' ',
                      ' ',
                      ' ',
                      ' ',
                      ' ',
                      ' '};

    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }

        sleepSeconds(1);

        clear();
        computerMove(spaces, computer);

        drawBoard(spaces);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
    }

    return 0;
}

void sleepSeconds(int seconds)
{
    // cout << "Sleeping for " << seconds << " seconds\n";
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void clear()
{
    system("cls");
}

void drawBoard(char *spaces)
{
    cout << "     |     |     " << std::endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << std::endl;
    cout << "_____|_____|_____" << std::endl;
    cout << "     |     |     " << std::endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << std::endl;
    cout << "_____|_____|_____" << std::endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << std::endl;
    cout << "     |     |     " << std::endl;
}

void playerMove(char *spaces, char player)
{
    int number;
    std::string input;
    bool validInput = false;

    do
    {
        // Prompt the user to choose a spot
        std::cout << "Choose your spot: (1-9) ";

        // Loop to validate user input
        do
        {
            // Get user input as a string
            std::cin >> input;

            // Check if the input is a single character and a digit
            if (input.length() == 1 && std::isdigit(input[0]))
            {
                // Convert the string input to an integer
                number = std::stoi(input);

                // Mark the input as valid and exit the loop
                validInput = true;
            }
            else
            {
                // If the input is invalid, prompt the user to try again
                std::cout << "Incorrect input. Try again. Choose your spot: (1-9): ";
            }

        } while (!validInput);

        // Adjust the number to fit the array index (0-based)
        number--;

        // Reset the validInput flag for the next iteration
        validInput = false;

        // Check if the chosen spot is within the board range and not occupied
        if (number >= 0 && number <= 8 && spaces[number] == ' ')
        {
            // Mark the input as valid and place the player's symbol on the board
            validInput = true;
            spaces[number] = player;

            // Exit the loop since a valid move has been made
            break;
        }
        else
        {
            // If the chosen spot is invalid or already occupied, inform the user
            number = 0;
            std::cout << "Incorrect Input:";

            // Optionally, implement these functions to improve user experience
            // sleepSeconds(1);
            // clear();
            // drawBoard(spaces);
        }

    } while (!validInput);
}

void computerMove(char *spaces, char computer)
{
    int number;

    // Seed the random number generator with the current time
    srand(time(0));

    while (true)
    {
        // Generate a random number in the range [0, 8]
        number = rand() % 9;

        // Check if the randomly chosen spot is empty
        if (spaces[number] == ' ')
        {
            // If the spot is empty, place the computer's symbol on the board
            spaces[number] = computer;

            // Exit the loop since the computer has made a valid move
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer)
{
    // Check Across
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] != ' ')
    {
        spaces[0] == player ? cout << "YOU WIN!" : cout << "COMPUTER WINs!";
        return 1;
    }
    else if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] != ' ')
    {
        spaces[3] == player ? cout << "YOU WIN!" : cout << "COMPUTER WINs!";
        return 1;
    }
    else if (spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[6] != ' ')
    {
        spaces[6] == player ? cout << "YOU WIN!" : cout << "COMPUTER WINs!";
        return 1;
    }

    // Check up-down
    if (spaces[0] == spaces[3] && spaces[3] == spaces[6] && spaces[0] != ' ')
    {
        spaces[0] == player ? cout << "YOU WIN!" : cout << "COMPUTER WINs!";
        return 1;
    }
    else if (spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] != ' ')
    {
        spaces[1] == player ? cout << "YOU WIN!" : cout << "COMPUTER WINs!";
        return 1;
    }
    else if (spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] != ' ')
    {
        spaces[2] == player ? cout << "YOU WIN!" : cout << "COMPUTER WINs!";
        return 1;
    }

    // Check crosses
    if (spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] != ' ')
    {
        spaces[0] == player ? cout << "YOU WIN!" : cout << "COMPUTER WINs!";
        return 1;
    }
    else if (spaces[6] == spaces[4] && spaces[4] == spaces[2] && spaces[2] != ' ')
    {
        spaces[6] == player ? cout << "YOU WIN!" : cout << "COMPUTER WINs!";
        return 1;
    }

    return 0;
}

bool checkTie(char *spaces)
{
    return 0;
}