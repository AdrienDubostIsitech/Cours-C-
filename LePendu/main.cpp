#include <iostream>
#include <array>
#include <time.h>
#include "WordList.h"

using namespace std;

int NumberOfLetter {0};
int LetterFound{0};
bool win = false;

int main()
{
    cout <<"---------------------------------------- Bienvenue au Pendu ! --------------------------------------------------"<< endl;
    cout<< "----------------------------Un mot a ete choisi voici son nombre de lettre : ------------------------------------" << endl;


    srand(time(NULL));
    auto ChooseWordIndex{0};
    std::string ChoosenWord;
    array<std::string, NOMBRE_MOT> WordList {GestionWord, EntrepriseWord, VoitureWord, ChevalWord, CroquetteWord};

    ChooseWordIndex = rand() % WordList.size();
    cout << endl;
    cout << WordList[ChooseWordIndex] << endl;
    cout << endl;
    ChoosenWord = WordList[ChooseWordIndex];
    NumberOfLetter = ChoosenWord.size();
    int LetterList[ChoosenWord.size()];
    for(int j = 0; j < ChoosenWord.size(); j++)
    {
            cout<<" -- ";
    }
    while(win == false)
    {
        char PlayerProposition;
        cin >> PlayerProposition;
        for(int i = 0; i < ChoosenWord.size(); i++)
        {
            if(PlayerProposition == ChoosenWord[i])
            {
                LetterList[i] = 1;
                LetterFound++;
                cout << " "<<ChoosenWord[i]<< " ";
            }
            else if (LetterList[i] == 1)
            {
                cout << " "<<ChoosenWord[i]<< " ";
            }
            else
            {
                    cout << " -- ";
            }
        }
        if(LetterFound == NumberOfLetter)
        {
            win = true;
            cout << endl;
            cout << "Vous avez gagné ! "<< endl;
        }
    }
    return 0;
}
