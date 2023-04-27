#include <iostream>
using namespace std;

float discount(int price, string day, string month);

int main()
{
    int price;
    string day, month;

    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    price = discount(price, day, month);

    cout << "Payable amount is: " << price << endl; 
    return 0;
}

float discount(int price, string day, string month)
{
    float pay = price;

    if (day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        pay = price * 0.9;
    }
    else if (day == "Monday" && (month == "November" || month == "December"))
    {
        pay = price * 0.95;
    }
    
    return pay;
}