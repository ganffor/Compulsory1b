#include <iostream>
#include <string>

char one = '1';
char two = '2';
char three = '3';
char four = '4';
char five = '5';
char six = '6';
char seven = '7';
char eight = '8';
char nine = '9';
std::string player1 = "Player 1";
std::string player2 = "Player 2";
char playerOneInput;
char playerTwoInput;
bool gameWon = false;

int calculateWinner() {

    if (one == 'O' && two == 'O' && three == 'O') {
        gameWon = true;
    }
    return 0;
}


int checkInput() {
    if (one == 'O' || one == 'X') {
        std::cout << "Please choose an unoccupied square";
    }
    if (two == 'O' || two == 'X') {
        std::cout << "Please choose an unoccupied square";
    }
    if (three == 'O' || three == 'X') {
        std::cout << "Please choose an unoccupied square";
    }
}



int main()
{
start:

    if (gameWon == false) {

        std::cout << "\033[32m" << "*** Welcome to Tic Tac Toe ***" << std::endl;
        std::cout << std::endl;
        std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
        std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
        std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
        std::cout << std::endl;
        std::cout << player1 << " - Enter a number from 1 to 9:" << std::endl;

        std::cin >> playerOneInput;

        switch (playerOneInput)
        {
        case '1':
            one = 'O';
            break;
        case '2':
            two = 'O';
            break;
        case '3':
            three = 'O';
            break;
        case '4':
            four = 'O';
            break;
        case '5':
            five = 'O';
            break;
        case '6':
            six = 'O';
            break;
        case '7':
            seven = 'O';
            break;
        case '8':
            eight = 'O';
            break;
        case '9':
            nine = 'O';
            break;
        }

        std::cout << "\033[32m" << "*** Welcome to Tic Tac Toe ***" << std::endl;
        std::cout << std::endl;
        std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
        std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
        std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
        std::cout << std::endl;
        
        calculateWinner();

    }

    if (gameWon == false){
        std::cout << player2 << " - Enter a number from 1 to 9:" << std::endl;
        std::cin >> playerTwoInput;

        switch (playerTwoInput)
        {
        case '1':
            one = 'X';
            break;
        case '2':
            two = 'X';
            break;
        case '3':
            three = 'X';
            break;
        case '4':
            four = 'X';
            break;
        case '5':
            five = 'X';
            break;
        case '6':
            six = 'X';
            break;
        case '7':
            seven = 'X';
            break;
        case '8':
            eight = 'X';
            break;
        case '9':
            nine = 'X';
            break;
        }

        calculateWinner();

        goto start;
    }

    if (gameWon == true) {
        
        std::cout << "Player One wins the game!";
    }


}


/*
int playerOneInput() {


    std::cout << "\033[32m" << "*** Welcome to Tic Tac Toe ***" << std::endl;
    std::cout << std::endl;
    std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
    std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
    std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
    std::cout << std::endl;
    std::cout << player1 << " - Enter a number from 1 to 9:" << std::endl;

    std::cin >> playerInput;

    std::cout << "debug playerOneInput";

    if (playerInput == "1") {
        one = "O";
    }
    if (playerInput == "2") {
        two = "O";
    }
    if (playerInput == "3") {
        three = "O";
    }
    if (playerInput == "4") {
        four = "O";
    }

    playerOneWin();
}

int playerTwo()
{

    std::cout << "\033[32m" << "*** Welcome to Tic Tac Toe ***" << std::endl;
    std::cout << std::endl;
    std::cout << "| " << one << " | " << "| " << two << " | " << "| " << three << " |" << std::endl;
    std::cout << "| " << four << " | " << "| " << five << " | " << "| " << six << " |" << std::endl;
    std::cout << "| " << seven << " | " << "| " << eight << " | " << "| " << nine << " |" << std::endl;
    std::cout << std::endl;
    std::cout << player1 << " - Enter a number from 1 to 9:" << std::endl;

    std::cin >> playerInput;

    playerTwoInput();
}

int playerOneWin()
{
    if (one == "O" && two == "O" && three == "O") {
        std::cout << "Player 1 wins the game!";
    }
    else {
        playerTwo();
    }

}

int playerTwoInput() {



}

int playerTwoWin()
{

    std::cout << "Player 2 wins the game!";
}









/*if (one = "O" && two = "O" && three = "O") {
playerOneWin = true;
}
*/;