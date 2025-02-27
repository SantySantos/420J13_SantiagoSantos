
#include <iostream>
#include <string>

class TimeTravel {
    
public:
    int currentYear = 2025;
    int destinationYear;

    TimeTravel() 
    {
        destinationYear = currentYear;
    }

    void setDestinationYear(int year)
    {      
        if (year < 1900 || year > 2100) {
            std::cout << "Invalid year" << std::endl;
            
        }
        
        else {
            destinationYear = year;
            std::cout << "Valid year" << std::endl;
        }
        
    }

    std::string travel() 
    {       
        currentYear = destinationYear;
        if (currentYear > 2025)
            return "Welcome to the future!";

        else 
            return "Welcome to the past! ";
        
    }
};
int main()
{
    TimeTravel *travel = new TimeTravel();
    int desiredDestination;

    std::cout << "Please set destination year: ";

    std::cin >> desiredDestination;
    travel->setDestinationYear(desiredDestination);
    std::cout << travel->travel();
    
    return 0;
}

