#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

void sleepSeconds(int seconds)
{
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void showBalance(double balance)
{
    cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << "\n";
    sleepSeconds(1);
    system("cls");
}

double deposit()
{
    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "Incorrect entry, amount must me greater than zero. \n";
        return 0;
    }
}

double withdraw(double balance)
{
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if ((balance - amount) >= 0)
    {
        return amount;
    }
    else
    {
        cout << "Insufficent funds. \n";
        return 0;
    }
}

void menu()
{
    cout << "********************\n";
    cout << "Enter your choice: \n";
    cout << "********************\n";
    cout << "1. Show balance.\n";
    cout << "2. Deposit money.\n";
    cout << "3. Withdraw money.\n";
    cout << "4. Exit.\n";
    cout << "********************\n";
}

bool checkIsDigit(string input)
{
    bool isDigit = true;
    for (char c : input)
    {
        if (!isdigit(c))
        {
            isDigit = false;
            break;
        }
    }
    return isDigit;
}

void incorrectChoiceDisplay()
{
    system("cls");
    sleepSeconds(1);
    cout << "Incorrect entry. Your choice must be an integer between 1-4 try again.\n";
    sleepSeconds(1);
    menu();
}

int getChoice()
{
    int choice;
    string input;
    bool isDigit;
    // bool firstRun = true;

    do
    {

        // firstRun = false;
        getline(cin >> ws, input);
        isDigit = checkIsDigit(input);
        if (isDigit)
        {
            choice = stoi(input);
            if (choice > 0 && choice < 5)
            {
                continue;
            }
            else
            {
                incorrectChoiceDisplay();
                isDigit = false;
            }
        }
        else
        {
            incorrectChoiceDisplay();
        }

    } while (!isDigit);

    return choice;
}

int main()
{
    double balance = 0;
    int choice;
    do
    {
        menu();
        choice = getChoice();

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            cout << "******Good Bye*******";
            break;

        default:
            break;
        }

    } while (choice != 4);
    return 0;
}