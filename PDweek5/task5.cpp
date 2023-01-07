#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void printPacman(int x, int y);
char getCharAtxy(short int x,short int y);

int main()
{
int pacmanX=4,pacmanY =4;
bool gameRunning = true;
system("cls");
printMaze();
printPacman(pacmanX,pacmanY);

while(gameRunning)
{
    if(GetAsyncKeyState(VK_LEFT))
    {
        char nextPosition = getCharAtxy(pacmanX-1,pacmanY);
        if(nextPosition == ' ')
        {
            erase(pacmanX,pacmanY);
            pacmanX = pacmanX - 1;
            printPacman(pacmanX,pacmanY);
        }
    }
        if(GetAsyncKeyState(VK_RIGHT))
    {
        char nextPosition = getCharAtxy(pacmanX+1,pacmanY);
        if(nextPosition == ' ')
        {
            erase(pacmanX,pacmanY);
            pacmanX = pacmanX + 1;
            printPacman(pacmanX,pacmanY);
        }
    }
        if(GetAsyncKeyState(VK_UP))
    {
        char nextPosition = getCharAtxy(pacmanX,pacmanY-1);
        if(nextPosition == ' ')
        {
            erase(pacmanX,pacmanY);
            pacmanY = pacmanY - 1;
            printPacman(pacmanX,pacmanY);
        }
    }
        if(GetAsyncKeyState(VK_DOWN))
    {
        char nextPosition = getCharAtxy(pacmanX,pacmanY+1);
        if(nextPosition == ' ')
        {
            erase(pacmanX,pacmanY);
            pacmanY = pacmanY + 1;
            printPacman(pacmanX,pacmanY);
        }
    }
    Sleep(200);
}
}
void gotoxy(int x, int y)
{
    COORD  coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
char getCharAtxy(short int x,short int y)
{
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect  ={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy,&rect)? ci.Char.AsciiChar:' ';
}
void erase(int x,int y)
{
    gotoxy(x,y);
    cout<<" ";
}
void printPacman(int x,int y)
{
    gotoxy(x,y);
    cout<<"P";
}
void printMaze()
{
cout<<"%%%%%%%%%%%%"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%%%%%%%%%%%%"<<endl;
}