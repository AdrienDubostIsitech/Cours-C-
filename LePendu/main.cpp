#include <iostream>
#include <array>
#include <time.h>
#include "WordList.h"

using namespace std;

int NumberOfLetter {0};
int LetterFound{0};
int NumberError{0};
bool win = false;

void DessinPendu()
{
    switch(NumberError)
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
        cout << " |    /|/"<< endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 9:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " |    /|/"<<endl;
        cout << " |    / /"<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    }
}

int main()
{
    cout <<"---------------------------------------- Bienvenue au Pendu ! --------------------------------------------------"<< endl;
    cout<< "----------------------------Un mot a ete choisi voici son nombre de lettre : ------------------------------------" << endl;

    DessinPendu();
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
        int OldLetterFound = LetterFound;
        char PlayerProposition;
        cout<< "Choisissez une lettre : ";
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
        if(OldLetterFound == LetterFound)
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            NumberError++;
            DessinPendu();
        }
        if(NumberError == 9)
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
