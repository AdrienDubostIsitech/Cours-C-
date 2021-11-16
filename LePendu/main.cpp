#include <iostream>
#include <array>
#include <time.h>
#include <string>
#include "WordList.h"
#include "Jeu.h"

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
    NumberOfLetter = ChoosenWord.length();
    int LetterList[NumberOfLetter];
    for(int j = 0; j < NumberOfLetter; j++)
    {
            cout<<" -- ";
    }
    while(win == false)
    {
        int OldLetterFound = LetterFound;
        char PlayerProposition;
        cout<< "Choisissez une lettre : ";
        cin >> PlayerProposition;
        for(int i = 0; i < NumberOfLetter; i++)
        {
            if(PlayerProposition == ChoosenWord[i] && LetterList[i] != 1)
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
        if(OldLetterFound == LetterFound)
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            NumberError++;
            DessinPendu();
        }
        if(MAX_NUMBER_ERROR == 9)
        {
            win = true;
            cout << endl;
            cout << "Vous avez perdu ! "<< endl;
        }
        else if(LetterFound == NumberOfLetter)
        {
            win = true;
            cout << endl;
            cout << "Vous avez gagne ! "<< endl;
        }
    }
        return 0;
}
