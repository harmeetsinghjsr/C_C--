#include<iostream>

enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER
};

class Year {
private:
    Month month;

public:
    Year(int n) {
        if (n >= 1 && n <= 12) {
            month = static_cast<Month>(n - 1);
        } else {
            std::cout << "Invalid month input \n";
            exit(1);
        }
    }

    Month getMonth() {
        return month;
    }
};

int main() {
    int inputMonth;
    std::cin >> inputMonth;

    Year year(inputMonth);

    std::cout << "Month: ";

    switch (year.getMonth()) {
        case Month::JANUARY:
            std::cout << "JANUARY";
            break;
        case Month::FEBRUARY:
            std::cout << "FEBRUARY";
            break;
        case Month::MARCH:
            std::cout << "MARCH";
            break;
        
        default:
            std::cout << "Invalid month";
            break;
    }

    return 0; 
}




