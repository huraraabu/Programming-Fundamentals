#include <iostream>
using namespace std;

string speedcheck(float speed);

int main()
{
    float speed;
    string check;

    cout << "Enter your speed: ";
    cin >> speed;

    check = speedcheck(speed);

    cout << check;
    return 0;
}

string speedcheck(float speed)
{
    string check;

    if (speed <= 10)
    {
        check = "slow";
    }
    else if (speed <= 50)
    {
        check = "average";
    }
    else if (speed <= 150)
    {
        check = "fast";
    }
    else if (speed <= 1000)
    {
        check = "ultra-fast";
    }
    else if (speed > 1000)
    {
        check = "extremely fast";
    }
    return check;
}