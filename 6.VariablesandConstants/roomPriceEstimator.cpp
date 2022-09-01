#include <iostream>
using namespace std;

int main() {
    // declare all consts here 
    int rooms;
    const int PRICE_PER_ROOM {30};
    const double TAX_RATE {0.06};
    const int EXPIRATION_TIME {30};

    cout << "Enter the number of rooms you want to book: " << endl;
    cin >> rooms;

    // calculations 
    int cost = rooms * PRICE_PER_ROOM;
    int tax = cost * TAX_RATE;
    int total_estimate = cost + tax;

    cout << "You entered " << rooms << " rooms" << endl;
    cout << "Price per room is $" << PRICE_PER_ROOM << endl;
    cout << "The total cost will be $" << cost << endl;
    cout << "You will incur a tax of $" << tax << endl;
    cout << "The total cost of your booking will be $" << total_estimate << endl;

    cout << "Please note that all estimates expire within a period of " << EXPIRATION_TIME << endl;


    return 0;


}