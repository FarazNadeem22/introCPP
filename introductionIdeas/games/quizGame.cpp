#include <iostream>
#include <chrono>
#include <thread>

using std::cin, std::cout, std::string;

// Function to pause execution for a specified number of seconds.
// Parameters:
//   seconds: Number of seconds to sleep.
void sleepSeconds(int seconds)
{
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

// Function to clear the console screen.
void clear()
{
    system("cls");
}

// Function to get the user's choice (A, B, C, D) and validate input.
// Returns:
//   char: The user's valid choice (A, B, C, D).
char getChoice()
{
    bool condition = true;
    char guess;
    do
    {
        cin >> guess;
        guess = toupper(guess); // Convert the input to uppercase

        // Validate the user's input
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
    clear(); // Clear the console screen

    // Arrays containing quiz questions, options, and the answer key
    string questions[] = {"1. What is the biggest city of Pakistan?: ",
                          "2. What is the capital of England?: ",
                          "3. What is the only even prime number?: ",
                          "4. What is the capital of Massachusetts?: "};

    string options[][4] = {{"A: Karachi, B: Lahore, C: Islamabad, D: Quetta"},
                           {"A: London, B: Manchester, C: Liverpool, D: Karachi"},
                           {"A: 4, B: 6 , C: 342 , D: 2"},
                           {"A: Boston, B: Worcester , C: Gloucester ,D: Amherst"}};

    char answerKey[] = {'A', 'A', 'D', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]); // Calculate the number of questions

    char guess;
    int score = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "**********************************" << std::endl;
        cout << questions[i] << std::endl;
        cout << "**********************************" << std::endl;

        // Display options for the current question
        for (int j = 0; j < sizeof(options[i]) / sizeof(options[0][0]); j++)
        {
            cout << options[i][j];
        }
        cout << std::endl << "Answer: ";

        guess = getChoice(); // Get user's choice

        // Check if the user's choice matches the answer key
        if (toupper(guess) == answerKey[i])
        {
            cout << "Correct!";
            score++;
        }
        else
        {
            cout << "Wrong! The correct answer was : " << answerKey[i];
            sleepSeconds(1); // Pause for 1 second
        }
        sleepSeconds(1); // Pause for 1 second
        clear(); // Clear the console screen for the next question
    }

    // Display the final score
    cout << "**********************************" << std::endl;
    cout << "Your total score: " << score << "/" << size << std::endl;
    cout << "**********************************" << std::endl;

    return 0;
}
