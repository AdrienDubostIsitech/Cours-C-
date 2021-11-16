#include <iostream>
#include <array>
#include "WordList.h"

using namespace std;

int main()
{
    array<std::string, NOMBRE_MOT> WordList {GestionWord, EntrepriseWord, VoitureWord, ChevalWord, CroquetteWord};

    for(int i = 0;  i < sizeof(WordList) ; i++)
    {
            cout << WordList[i] << "    ";
    }
    return 0;
}
