#include <iostream>
#include <time.h>
using namespace std;
int checkNum(int,int);
int main() 
{
    int A,round=0;
    srand (time(NULL));
    int random = rand()% 10 + 1;
    cout << "***Welcome to guessing number game***\n";
    cout << "Secret number has been chosen\n";
    do {
        cout << "Guess the number (1 to 10): " ;
        cin >> A;
        round++;
        checkNum(random, A);
    }while(random!=A);
    cout << "Congratulations!\n";
    cout << "The secret number is " << random << endl;
    cout << "You made " << round << " guesses" << endl;
    return 0;
}
int checkNum(int Ran,int User){
    if (Ran < User){
        cout << "The secret number is lower\n" ;}
    else if (Ran > User){
        cout << "The secret number is higher\n" ;}

    return (Ran,User);
}
