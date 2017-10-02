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

    for(int i=1;i<=w;i++)
    {

        for(int j=1;j<30-i;j++){

            cout<<" ";

        }for(int z=1;z<2*i;z++){
            if(z%2==0)


              cout<<" ";
               else cout<<"*";


        }cout<<endl;
    }

    return 0;
}
