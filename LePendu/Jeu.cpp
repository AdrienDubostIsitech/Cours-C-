#include <iostream>
#include "Jeu.h"
#include "WordList.h"

using namespace std;


void DessinPendu()
{
    switch(MAX_NUMBER_ERROR)
    {
    case 1:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout<<" -- "<<endl;
        break;
    case 2 :
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 3:
        cout <<  "------- "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 4:
       cout <<  "------- "<<endl;
        cout << " |/ "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 5:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 6:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 7:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " |     |"<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 8:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " |    /|\\"<< endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 9:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " |    /|\\"<<endl;
        cout << " |    / \\"<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    default:
        break;
    }
}
