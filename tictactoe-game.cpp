//Tic Tac Toe game 

#include<iostream>
using namespace std;

char Screen[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
bool Gameover=false;

int screen_vision()
    {
        system("cls");
         cout<<"Tic Tac Toe"<<endl;
        {
             for(int i = 0; i< 3;i++)
            {
                 for (int j = 0; j<3; j++)
                {
                     cout<<Screen[i][j]<<" ";
                }
                 cout<<endl;
            }
        }
    }
int input_screen()
    {
        int input;
        cout<<"select the number in which place you want to fill in: ";
        cin>>input;
        if(input==1)
            Screen[0][0]=player;
        else if(input==2)
            Screen[0][1]=player;
        else if(input==3)
            Screen[0][2]=player;
        else if(input==4)
            Screen[1][0]=player;
        else if(input==5)
            Screen[1][1]=player; 
        else if(input==6)
            Screen[1][2]=player;
        else if(input==7)
            Screen[2][0]=player;
        else if(input==8)
            Screen[2][1]=player;
        else if(input==9)
            Screen[2][2]=player;       
    }
int Active_Player()
    {
        if (player=='X')
            player='O';
        else 
            player='X';
    }
        
char winning_declaration_X()
    {
        //1 2 3
        //4 5 6
        //7 8 9
        if(Screen[0][0]=='X' && Screen[0][1]=='X' && Screen[0][2]=='X')
        return 'X';
        if(Screen[1][0]=='X' && Screen[1][1]=='X' && Screen[1][2]=='X')
        return 'X';
        if(Screen[2][0]=='X' && Screen[2][1]=='X' && Screen[2][2]=='X')
        return 'X';
        if(Screen[0][0]=='X' && Screen[1][0]=='X' && Screen[2][0]=='X')
        return 'X';
        if(Screen[0][1]=='X' && Screen[1][1]=='X' && Screen[2][1]=='X')
        return 'X';
        if(Screen[0][2]=='X' && Screen[1][2]=='X' && Screen[2][2]=='X')
        return 'X';
        if(Screen[0][0]=='X' && Screen[1][1]=='X' && Screen[2][2]=='X')
        return 'X';
        if(Screen[0][2]=='X' && Screen[1][1]=='X' && Screen[2][0]=='X')
        return 'X';
        return '/';
    }
char winning_declaration_O()
    {
        /* 1 2 3
           4 5 6
           7 8 9   */
        if(Screen[0][0]=='O' && Screen[0][1]=='O' && Screen[0][2]=='O')
        return 'O';
        if(Screen[1][0]=='O' && Screen[1][1]=='O' && Screen[1][2]=='O')
        return 'O';
        if(Screen[2][0]=='O' && Screen[2][1]=='O' && Screen[2][2]=='O')
        return 'O';
        if(Screen[0][0]=='O' && Screen[1][0]=='O' && Screen[2][0]=='O')
        return 'O';
        if(Screen[0][1]=='O' && Screen[1][1]=='O' && Screen[2][1]=='O')
        return 'O';
        if(Screen[0][2]=='O' && Screen[1][2]=='O' && Screen[2][2]=='O')
        return 'O';
        if(Screen[0][0]=='O' && Screen[1][1]=='O' && Screen[2][2]=='O')
        return 'O';
        if(Screen[0][2]=='O' && Screen[1][1]=='O' && Screen[2][0]=='O')
        return 'O';
        return '/';
    }
        
int main()
    {
    while(!Gameover)
    {
     screen_vision();
     input_screen();
        if(winning_declaration_X()=='X')
            {
                screen_vision();
                cout<<"Player 1 is winner!!!"<<endl;
                Gameover =true;
            }
        if(winning_declaration_O()=='O')
            {
                screen_vision();
                cout<<"Player 2 is winner!!!"<<endl;
                Gameover =true;
            } 
     Active_Player();
    }
    system("pause");
     return 0;
    }
