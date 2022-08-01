#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void game();

int main(){

cout << "Welcome to my tic tac toe game!" << endl;
system("pause");
system("cls");
string playAgain = "n";
game();
cout << "Do you want to play again? Type 'y' for yes or 'n' for no: ";
cin >> playAgain;
while (playAgain=="y"){
    game();
    cout << "Do you want to play again? Type 'y' for yes or 'n' for no: ";
    cin >> playAgain;
}


return 0;
}

void game(){
    string playerOneChoice[] = {"1","2","3","4","5","6","7","8","9"};
    string playerTwoChoice[] = {"1","2","3","4","5","6","7","8","9"};
    int playerOneActualChoice = 1;
    int playerTwoActualChoice = 2;
    int scoreA = 0;
    int scoreB = 0;
    for (int i = 0; i < 9;i++){
        if (playerOneChoice[i] =="X"){
            cout << playerOneChoice[i];
        }
        else if (playerTwoChoice[i] =="O"){
            cout << playerTwoChoice[i];
        }
        else{
            cout << i + 1;
        }

        if (!(i==2 || i==5 || i ==8)){
            cout << " | ";
        }
        if (i==2 || i==5){
            cout << endl;
        }
            }
    for (int i = 0; i < 9; i++){

        //PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPLLLLLLLLLLLLLAYYYYYYYYYYYYER 11111111111111111111111111111
        if(playerOneChoice[0] == "X" && playerOneChoice[1]=="X" && playerOneChoice[2]=="X"){
            cout << endl << endl << "PLAYER ONE WINS!" << endl;
            system("pause");
            scoreA = scoreA + 1;
            break;
                        
        }
        if(playerOneChoice[3] == "X" && playerOneChoice[4]=="X" && playerOneChoice[5]=="X"){
            cout << endl << endl << "PLAYER ONE WINS!"<< endl;
            system("pause");
            scoreA = scoreA + 1;
            break;
        }
        if(playerOneChoice[6] == "X" && playerOneChoice[7]=="X" && playerOneChoice[8]=="X"){
            cout << endl << endl << "PLAYER ONE WINS!"<< endl;
            system("pause");
            scoreA = scoreA + 1;
            break;
        }
        if(playerOneChoice[0] == "X" && playerOneChoice[3]=="X" && playerOneChoice[6]=="X"){
                    cout << endl << endl << "PLAYER ONE WINS!"<< endl;
                    system("pause");
                    scoreA = scoreA + 1;
                    break;
                }
        if(playerOneChoice[1] == "X" && playerOneChoice[4]=="X" && playerOneChoice[7]=="X"){
            cout << endl << endl << "PLAYER ONE WINS!"<< endl;
            system("pause");
            scoreA = scoreA + 1;
            break;
        }
        if(playerOneChoice[2] == "X" && playerOneChoice[5]=="X" && playerOneChoice[8]=="X"){
            cout << endl << endl << "PLAYER ONE WINS!"<< endl;
            system("pause");
            scoreA = scoreA + 1;
            break;
        }
        if(playerOneChoice[0] == "X" && playerOneChoice[4]=="X" && playerOneChoice[8]=="X"){
            cout << endl << endl << "PLAYER ONE WINS!"<< endl;
            system("pause");
            scoreA = scoreA + 1;
            break;
        }
        if(playerOneChoice[2] == "X" && playerOneChoice[4]=="X" && playerOneChoice[6]=="X"){
            cout << endl << endl << "PLAYER ONE WINS!"<< endl;
            system("pause");
            scoreA = scoreA + 1;
            break;
        }

        
        //PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPLLLLLLLLLLLLLAYYYYYYYYYYYYER 2222222222222222222222222222222222222222222222
        if(playerTwoChoice[0] == "O" && playerTwoChoice[1]=="O" && playerTwoChoice[2]=="O"){
        cout << endl << endl << "PLAYER TWO WINS!"<<endl;
        system("pause");
        scoreB = scoreB + 1;
        break;
        }
        if(playerTwoChoice[3] == "O" && playerTwoChoice[4]=="O" && playerTwoChoice[5]=="O"){
            cout << endl << endl << "PLAYER TWO WINS!"<< endl;
            system("pause");
            scoreB = scoreB + 1;
            break;
        }
        if(playerTwoChoice[6] == "O" && playerTwoChoice[7]=="O" && playerTwoChoice[8]=="O"){
            cout << endl << endl << "PLAYER TWO WINS!"<< endl;
            system("pause");
            scoreB = scoreB + 1;
            break;
        }
        if(playerTwoChoice[0] == "O" && playerTwoChoice[3]=="O" && playerTwoChoice[6]=="O"){
                    cout << endl << endl << "PLAYER TWO WINS!"<< endl;
                    system("pause");
                    scoreB = scoreB + 1;
                    break;
                }
        if(playerTwoChoice[1] == "O" && playerTwoChoice[4]=="O" && playerTwoChoice[7]=="O"){
            cout << endl << endl << "PLAYER TWO WINS!"<< endl;
            system("pause");
            scoreB = scoreB + 1;
            break;
        }
        if(playerTwoChoice[2] == "O" && playerTwoChoice[5]=="O" && playerTwoChoice[8]=="O"){
            cout << endl << endl << "PLAYER TWO WINS!"<< endl;
            system("pause");
            scoreB = scoreB + 1;
            break;
        }
        if(playerTwoChoice[0] == "O" && playerTwoChoice[4]=="O" && playerTwoChoice[8]=="O"){
            cout << endl << endl << "PLAYER TWO WINS!"<< endl;
            system("pause");
            scoreB = scoreB + 1;
            break;
        }
        if(playerTwoChoice[2] == "O" && playerTwoChoice[4]=="O" && playerTwoChoice[6]=="O"){
            cout << endl << endl << "PLAYER TWO WINS!"<< endl;
            system("pause");
            scoreB = scoreB + 1;
            break;
        }
        if (i%2 ==0){
            cout << endl << "It's players one's turn! Type where you want to place an X: " ;
            cin >> playerOneActualChoice;
            while (playerOneActualChoice > 9 || playerOneActualChoice <1 || playerOneChoice[playerOneActualChoice-1]=="X" || playerTwoChoice[playerOneActualChoice-1]=="O"){
                cout << endl << "Wrong input. Try again: ";
                cin >> playerOneActualChoice;
            }
            playerOneChoice[playerOneActualChoice - 1] = "X";
            
        }
        if (i%2 ==1){
            cout << endl << "It's players two's turn! Type where you want to place an O: " ;
            cin >> playerTwoActualChoice;
            while (playerTwoActualChoice > 9 || playerTwoActualChoice <1 || playerTwoChoice[playerTwoActualChoice-1]=="O"|| playerOneChoice[playerTwoActualChoice-1]=="X"){
                cout << endl << "Wrong input. Try again: ";
                cin >> playerTwoActualChoice;
            }
            playerTwoChoice[playerTwoActualChoice -1] = "O";
        }
        if (i == 8){
            cout << endl << endl <<"IT'S A DRAW!"<<endl;
            system("pause");
        }
        system("cls");  
            for (int i = 0; i < 9;i++){
                if (playerOneChoice[i] =="X"){
                    cout << playerOneChoice[i];
                }
                else if (playerTwoChoice[i] =="O"){
                    cout << playerTwoChoice[i];
                }
                else{
                    cout << i + 1;
                }

                if (!(i==2 || i==5 || i ==8)){
                    cout << " | ";
                }
                if (i==2 || i==5){
                    cout << endl;
                }
            }
    }
    
}
