#include <iostream>
#include "Joc.h"
#include "MainMenu.h"
#include "GameBoard.h"
#include "UserInput.h"
#include <ctime>
using namespace std;

int main()
{
     //clock_t start = clock();
    //for(int i=185;i<215;i++)
        //printf("%c",i);

    Joc joc1;
    GameBoard board=GameBoard(1);
    UserInput input;
    MainMenu menu=MainMenu();

    while(true)
    {
      menu.afisareMeniu();
    int op;
    cout<<"Alege optiunea: ";
    cin>>op;
    switch(op)
    {
    case 1:
        joc1.start_joc();

        break;
    case 2:
        joc1.salvareJoc();
        break;
    case 3:
        joc1.incarcareJoc();
        break;
    case 4:
        menu.reguliJoc();
        break;
    case 5:
        return 0;
    default:
        cout<<"Optiunea nu exista\n\n";
        break;
    }
    }

    //clock_t end = clock();
   // double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    //std::cout << "Durata de rulare a jocului: " << duration << " secunde\n";
    return 0;
}
