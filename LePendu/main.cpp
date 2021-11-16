#include <iostream>
#include <array>
#include <time.h>
#include "WordList.h"

using namespace std;

int main()
{
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

    return 0;
}
