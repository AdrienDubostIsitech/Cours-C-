#include <iostream>
#include "Jeu.h"
#include "WordList.h"
#include <array>

using namespace std;


void DessinPendu(int Error)
{
    switch(Error)
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
void PlayerPropositionFunc(char &PlayerProposition)
{
    cout<< "Choisissez une lettre : ";
    cin >> PlayerProposition;
}
void GameLoop(int LetterFound, int NumberOfLetter, bool &End, int &NumberError)
{
    std::string ChoosenWord = ChooseAWord(NumberOfLetter);
    int LetterList[NumberOfLetter];
    for(int i = 0; i < sizeof(LetterList)/sizeof(LetterList[0]); i ++)
    {
        LetterList[i] = 0;
    }
    while(End == false)
    {
        cout << ChoosenWord << endl;
        char PlayerProposition;
        PlayerPropositionFunc(PlayerProposition);
        int OldLetterFound = LetterFound;

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
            DessinPendu(NumberError);
        }
        if(NumberError == MAX_NUMBER_ERROR)
        {
            End = true;
            cout << endl;
            cout << "Vous avez perdu ! "<< endl;
        }
        else if(LetterFound == NumberOfLetter)
        {
            End = true;
            cout << endl;
            cout << "Vous avez gagne ! "<< endl;
        }

    }

}
std::string ChooseAWord(int &NumberOfLetter)
{

    auto ChooseWordIndex{0};
    std::string ChoosenWord;
    array<std::string, NOMBRE_MOT> WordList {GestionWord, EntrepriseWord, VoitureWord, ChevalWord, CroquetteWord};

    ChooseWordIndex = rand() % WordList.size();
    cout << endl;
    cout << WordList[ChooseWordIndex] << endl;
    cout << endl;
    ChoosenWord = WordList[ChooseWordIndex];
    NumberOfLetter = ChoosenWord.length();
    cout<< NumberOfLetter<<endl;

    for(int j = 0; j < ChoosenWord.length(); j++)
    {
            cout<<" -- ";
    }
    return ChoosenWord;
}
