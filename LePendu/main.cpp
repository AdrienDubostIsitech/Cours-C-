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
    cout <<" Bienvenue au Pendu ! "<< endl;
    cout<< "Un mot a été choisi voici son nombre de lettre : " << endl;
    srand(time(NULL));
    int ChooseWordIndex{0};
    std::string ChoosenWord;
    array<std::string, NOMBRE_MOT> WordList {GestionWord, EntrepriseWord, VoitureWord, ChevalWord, CroquetteWord};

    ChooseWordIndex = rand() % WordList.size();
    for(int i = 0;  i < WordList.size() ; i++)
    {
            cout << WordList[i] << "    ";
    }
    cout << endl;
    cout << WordList[ChooseWordIndex] << endl;
    ChoosenWord = WordList[ChooseWordIndex];
    int LetterList[ChoosenWord.size()];
    cout << ChoosenWord.size() << endl;
    for(int j = 0; j < ChoosenWord.size(); j++)
    {
        LetterList[j] = 0;
        cout<< LetterList[j];
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
    }
    return 0;
}
