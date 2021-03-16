#include <iostream>
#include <string>

int main() {
    int day;
    std::cout << "Choose the number of a day: ";
    std::cin >> day;
    std::string newDay;
    if (day > 0 && day < 8) {
        switch(day) {
            case 1:
                newDay = "Monday";
                break;
            case 2:
                newDay = "Tuesday";
                break;
            case 3:
                newDay = "Wednesday";
                break;
            case 4:
                newDay = "Thursday";
                break;
            case 5:
                newDay = "Friday";
                break;
            case 6:
                newDay = "Saturday";
                break;
            case 7:
                newDay = "Sunday";
                break;
        }
        std::cout << "You choose " << day << " and it's a " << newDay << "!" << std::endl;
        return 0;
    } else {
        std::cout << "A day can only be between 1 and 7." << std::endl;
        return 0;
    }

}