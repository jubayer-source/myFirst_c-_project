#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{

    int guessNumber, randomNumber;

    while (1){

        cout<< "Enter your Guess Number between 1 to 6 :";
        cin>> guessNumber;

        randomNumber = 1 + rand()%6;

        if ( guessNumber == randomNumber)
            {
            cout << "Hurrah! You have won."<<endl;
            }

        else
            cout << "You have lost. Try again."<<endl;
            cout << "Random number was :" <<randomNumber <<endl<< endl;
    }

    return 0;

}
