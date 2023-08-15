#include <iostream>

using namespace std;

void guess_number(int random_n)
{

    bool g = 0;
    while (g == 0)
    {
        int guess;
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        if (guess > random_n)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < random_n)
        {
            cout << "Too low!" << endl;
        }
        else if (guess == random_n)
        {
            cout << "Your guess is correct!" << endl;
            g = 1;
        }
    }
}

int main()
{
    int random_number = rand() % 100 + 1;

    guess_number(random_number);
    return 0;
}
