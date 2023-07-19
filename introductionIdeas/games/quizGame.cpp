#include <iostream>
#include <chrono>
#include <thread>

using std::cin, std::cout, std::string;

void sleepSeconds(int seconds)
{
    // cout << "Sleeping for " << seconds << "seconds\n";
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void clear()
{
    system("cls");
}

char getChoice()
{
    bool condition = true;
    char guess;
    do
    {
        cin >> guess;
        guess = toupper(guess); // Convert the input to uppercase

        if (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D')
        {
            condition = false;
            cout << "Invalid choice. Try again: ";
        }
        else
        {
            condition = true;
        }

    } while (!condition);

    return guess;
}

int main()
{
    clear();

    string questions[] = {"1. What is the biggest city of Pakistan?: ",
                          "2. What is the capital of England?: ",
                          "3. What is the only even prime number?: ",
                          "4. What is the capital of Massachusetts?: "};

    string options[][4] = {{"A: Karachi, B: Lahore, C: Islamabad, D: Quetta"},
                           {"A: London, B: Manchester, C: Liverpool, D: Karachi"},
                           {"A: 4, B: 6 , C: 342 , D: 2"},
                           {"A: Boston, B: Worcester , C: Gloucester ,D: Amherst"}};

    char answerKey[] = {'A',
                        'A',
                        'D',
                        'A'};

    int size = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "**********************************" << std::endl;
        cout << questions[i] << std::endl;
        cout << "**********************************" << std::endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[0][0]); j++)
        {
            cout << options[i][j];
        }
        cout << std::endl
             << "Answer: ";

        guess = getChoice();

        if (toupper(guess) == answerKey[i])
        {
            cout << "Correct!";
            score++;
        }
        else
        {
            cout << "Wrong! The correct answer was : " << answerKey[i];
            sleepSeconds(1);
        }
        sleepSeconds(1);
        clear();
    }
    cout << "**********************************" << std::endl;
    cout << "Your total score: " << score << "/" << size << std::endl;
    cout << "**********************************" << std::endl;

    return 0;
}