#include <iostream>

// Define an enum named "Day" to represent days of the week with associated integer values.
enum Day
{
    sunday = 0,    // Sunday is assigned the value 0.
    monday = 1,    // Monday is assigned the value 1.
    tuesday = 2,   // Tuesday is assigned the value 2.
    wednesday = 3, // Wednesday is assigned the value 3.
    thursday = 4,  // Thursday is assigned the value 4.
    friday = 5,    // Friday is assigned the value 5.
    saturday = 6   // Saturday is assigned the value 6.
};                 // Don't forget the semicolon at the end of the enum definition.

int main()
{
    // Initialize a variable "today" of type Day with the value "sunday".
    Day today = tuesday;

    // Use a switch statement to check the value of "today".
    switch (today)
    {
    // Check each case and execute the corresponding block of code when it matches one of the enum values.
    case sunday:
        // Print the corresponding message for Sunday.
        std::cout << "It is Sunday";
        break;
    case monday:
        // Print the corresponding message for Monday.
        std::cout << "It is Monday";
        break;
    case tuesday:
        // Print the corresponding message for Tuesday.
        std::cout << "It is Tuesday";
        break;
    case wednesday:
        // Print the corresponding message for Wednesday.
        std::cout << "It is Wednesday";
        break;
    case thursday:
        // Print the corresponding message for Thursday.
        std::cout << "It is Thursday";
        break;
    case friday:
        // Print the corresponding message for Friday.
        std::cout << "It is Friday";
        break;
    case saturday:
        // Print the corresponding message for Saturday.
        std::cout << "It is Saturday";
        break;
    default:
        // Handle any value of "today" that doesn't match the defined enum values.
        // Print "Invalid day" if the value is not recognized.
        std::cout << "Invalid day";
        break;
    }

    return 0;
}
