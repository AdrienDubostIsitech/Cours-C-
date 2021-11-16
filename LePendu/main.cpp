#include <iostream>
#include <array>
#include <time.h>
#include "WordList.h"

using namespace std;

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
    cout << ChoosenWord << endl;
    for(int j = 0; j < ChoosenWord.size(); j++)
    {
            cout << " -- ";
    }

    return 0;
}
