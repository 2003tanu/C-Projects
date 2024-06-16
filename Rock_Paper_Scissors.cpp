//rock beats scissors
//scissors beats paper
//paper beats rock

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
   
    srand((unsigned int)time(NULL));
    int player_throw=0;
    int ai_throw=0;
    bool draw=false;

    do
    {
        cout<<"Select your throw."<<endl;
        cout<<"1. Rock"<<endl;
        cout<<"2. Paper"<<endl;
        cout<<"3. Scissors"<<endl;
        cout<<"Selection: ";
        cin>>player_throw;

        cout<<endl;

        //rand() ->0....999999  %3 -->0-2 +1 --> 1-3

        ai_throw=(rand()%3)+1;
        if(ai_throw==1)
        {
            cout<<"AI throws ROCK."<<endl;

        }
        else if(ai_throw==2)
        {
            cout<<"AI throws PAPER."<<endl;
        }
        else if(ai_throw==3)
        {
            cout<<"AI throws SCISSORS."<<endl;
        }
        draw = false;

        if(player_throw==ai_throw)
        {
            draw=true;
            cout<<"Draw! Play again!"<<endl;
        }
        else if(player_throw==1 && ai_throw==2)
        {
            cout<<"PAPER beats ROCK! YOU LOSS."<<endl;
        }
        else if(player_throw==1 && ai_throw==3)
        {
            cout<<"ROCK beats SCISSORS! YOU WIN."<<endl;

        }
        else if(player_throw==2 && ai_throw==1)
        {

           cout<<"ROCK beats SCISSORS! YOU WIN."<<endl;
        }
        else if(player_throw==2 && ai_throw==3)
        {
            cout<<"PAPER beats ROCK! YOU LOSS."<<endl;


        }
        else if(player_throw==3 && ai_throw==1)
        {
             cout<<"PAPER beats ROCK! YOU LOSS."<<endl;

        }
        else if(player_throw==3 && ai_throw==2)
        {
                cout<<"ROCK beats SCISSORS! YOU WIN."<<endl;
        }

    } while (draw);
    

     
}