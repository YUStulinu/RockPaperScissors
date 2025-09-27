#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int userChoice, compChoice;

    while(true) {
        cout << "\nRock(1), Paper(2), Scissors(3), Quit(0): ";
        cin >> userChoice;

        if(userChoice == 0) {
            cout << "Thanks for playing! Goodbye.\n";
            break;
        }

        if(userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice, try again.\n";
            continue;
        }

        compChoice = rand() % 3 + 1;
        cout << "Computer chose: " << compChoice << endl;

        if(userChoice == compChoice) cout << "It's a tie!" << endl;
        else if((userChoice==1 && compChoice==3) || 
                (userChoice==2 && compChoice==1) || 
                (userChoice==3 && compChoice==2))
            cout << "You win!" << endl;
        else
            cout << "You lose!" << endl;
    }

    return 0;
}
