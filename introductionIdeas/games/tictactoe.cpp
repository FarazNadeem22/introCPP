#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

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
    bool validInput = false;
    do
    {
        // Prompt the user to choose a spot
        cout << "Choose your spot: (1-9) ";

        // Prompt the user to choose a spot
        cin >> number;
        number--;

        if (number >= 0 && number <= 8 && spaces[number] == ' ')
        {
            validInput = true;
            spaces[number] = player;
            break;
        }
        else
        {
            number = 0;
            cout << "Incorrect Input:";
            sleepSeconds(1);
            clear();
            drawBoard(spaces);
        }

    } while (!validInput);
}

void computerMove(char *spaces, char computer)
{
}

bool checkWinner(char *spaces, char player, char computer)
{
    return 0;
}

bool checkTie(char *spaces)
{
    return 0;
}