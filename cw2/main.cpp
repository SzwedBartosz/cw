#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int column, int line){
COORD coord;
coord.X=column;
coord.Y=line;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);}
int main()
{
    int w;
    cout << "Podaj liczbe wierszy" << endl;
    cin>>w;

    for(int i=1;i<w;i++)
    {gotoxy (30,i);
        cout<<"*"<<endl;
    }

    return 0;
}
