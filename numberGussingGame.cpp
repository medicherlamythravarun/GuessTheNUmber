#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<"\n\t\t\t\tWelcome to the 'NUMBER GUSSING GAME'"<<endl;
    cout<<endl;
    cout<<"The main aim of creating this game is for entertaining purpose and for improving the thinking skill of the user!"<<endl;
    cout<<endl;
    cout<<"You have guess the numbers from 1 to 200. You will have a limited chances based on level you choose. Good Luck!";

    while(true){
        cout<<"Enter the difficulty level: "<<endl;
        cout<<"1 for easy\t";
        cout<<"0 for ending the game"<<endl;
        int difficultyLevel;
        cout<<"Enter the number: ";
        cin>>difficultyLevel;
        srand(time(0));
        int SecretNumber = 1 + (rand() % 200);
        int playerChoice;

        if(difficultyLevel == 1){
            cout<<"You have 10 choice left for choosing the number from 1 to 200"<<endl;
            int choiceLeft = 10;
            for(int i = 1;i<=10;i++){
                cout<<"Enter the number you want to guess: "<<endl;
            cin>>playerChoice;

            if(playerChoice == SecretNumber){
                cout<<"'!Congratulations you have guessed the correct number!'"<<endl;
                cout<<"Thank you for choosing our game!"<<endl;
                cout<<"Please visit again"<<endl;
            }
            else{
                cout<<"Sorry your number"<<playerChoice<<" is a wrong guess"<<endl;
                if(playerChoice > SecretNumber){
                    cout<<"The secret number is smaller than you guess!"<<endl;
                }
                else if(playerChoice < SecretNumber){
                    cout<<"The secrete number is larger than your guess!"<<endl;
                }
                choiceLeft--;
                if(choiceLeft == 0){
                    cout<<"You have completed 10 choices, Your could'nt guess the Secret number.";
                    cout<<"The Secret number is "<<SecretNumber<<"."<<endl;
                    cout<<"Please play the game again to win!, Best of luck";
                }
            }
        }
    }
        else if(difficultyLevel == 0){
            exit(0);
        }
    }
    return 0;

}