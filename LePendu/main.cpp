#include <iostream>
#include <array>
#include <time.h>
#include <string>
#include "WordList.h"
#include "Jeu.h"

using namespace std;


int LetterFound{0};
bool win = false;
int NumberError{0};
int NumberOfLetter{0};


int main()
{
    //J'ai préféré utiliser la fonction rand car c'est celle que je maitrise le plus
    srand(time(NULL));

    cout <<"---------------------------------------- Bienvenue au Pendu ! --------------------------------------------------"<< endl;
    cout<< "----------------------------Un mot a ete choisi voici son nombre de lettre : ------------------------------------" << endl;

    GameLoop(LetterFound, NumberOfLetter, win, NumberError);

    return 0;
}
