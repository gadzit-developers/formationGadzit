// library REALLY IMPORTANT
#include <bits/stdc++.h>
#define MAT vector< vector <char> >

using namespace std;

void print_mat(MAT& XO){
    for(int i = 0 ; i < 3 ;i++){
        for(int j =0; j < 2; j++){
            cout<<XO[i][j]<<" | ";
        } cout<<XO[i][2]<<endl;
        if(i == 2) break;
        cout<<"----------"<<endl;
    }
    cout<<endl;
}
char endgame(MAT& XO){
    char winner = '\0';
    for(int i =0 ; i < 3 ; i++){
        if(XO[i][0]== XO[i][1] && XO[i][1]==XO[i][2]){
            winner = XO[i][0];
            break;
        }
        if(XO[0][i]== XO[1][i] && XO[1][i]==XO[2][i]){
            winner = XO[i][0];
            break;
        }

    }
    if(XO[0][0]== XO[1][1] && XO[1][1]==XO[2][2]){
        winner = XO[1][1];
    }
    if(XO[2][0]== XO[1][1] && XO[1][1]==XO[0][2]){
        winner = XO[1][1];
    }

    return winner;
}


int main()
{
    MAT XO = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    bool X_turn = true;
    string input;
    bool win = false ;
    char winner = '\0';
    int pos = -1;
    for(int i = 0; i < 9 ;i++){
        winner = endgame(XO);
        if( winner == '\0'){
        if(X_turn){
            cout<<"X turn\n"<<endl;
        }else {
            cout<<"O turn\n"<<endl;
        }
        print_mat(XO);

        cout<<"Pick a valid number : ";
        cin>>input;
        if(isdigit(input[0]) && input.size() == 1){
            pos = stoi(input);
        }else {
            pos = -1;
        }
        while( pos > 9 || pos < 1  || XO[(pos-1)/3][(pos-1)%3] == 'X' || XO[(pos-1)/3][(pos-1)%3] == 'O'){
            cout<<pos<<" is not valid"<<endl;
            cout<<"Pick a valid number : ";
            cin>>input;
            if(isdigit(input[0]) && input.size() == 1){
                pos = stoi(input);
            }else {
                pos = -1;
            }
        }
        if(X_turn){
            XO[(pos-1)/3][(pos-1)%3]='X';
        }else {
            XO[(pos-1)/3][(pos-1)%3]='O';

        }
        system("cls");
        X_turn = !X_turn;
        }
        else {
            system("cls");
            win = true;
            break;
        }

    }

    if(win){
        cout<<winner<<" Won"<<endl;
    }else {
        cout<<"It's a tie."<<endl;
    }


    return 0;
}
