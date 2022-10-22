#include<iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int main(){
    while (true)
    {
        int guess, number;
        cout<<"Enter number between 1 to 20: "<<endl<<endl<<">>>> ";
        cin>>guess;

        number = rand()%20;

        if (guess == number)
        {
            cout<<"You won the game"<<endl<<endl;
            break;
        }else
        {
            cout<<"Incorrect number... try again!"<<endl<<endl;
            cout<<"Random number was: "<<number<<endl<<endl;
        }
        
    }
    
    getch();
}
