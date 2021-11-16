#include <iostream>
#include <array>
#include "time.h"
#include "constantes.h"
#include "jeu.h"
#include "Menu.h"
#include<array>

using namespace std;

std::array<int, NOMBRES_SCORES>scores{0, 0, 0};

int main()
{


    srand(time(NULL));
    Menu();
    switch (PlayerMenuChoice())
    {
    case ChoixMenu::JOUER:
        PlayThreeParty(BORNE_MIN_MOYEN, BORNE_MAX_MOYEN, BORNE_RANDOM_MOYEN);
        break;
    case ChoixMenu::JOUER_DIFFICILE :
        PlayThreeParty(BORNE_MIN_DIFFICILE, BORNE_MAX_DIFFICILE, BORNE_RANDOM_DIFFICILE);
        break;
    case ChoixMenu::JOUER_FACILE :
        PlayThreeParty(BORNE_MIN_FACILE, BORNE_MAX_FACILE, BORNE_RANDOM_FACILE);
        break;
    case ChoixMenu::AFFICHE_SCORES :
        Score();
        break;
    case ChoixMenu::QUITTER :
        Exit();
        break;
    case ChoixMenu::INCORRECT :
        return EXIT_FAILURE;
        break;
    case ChoixMenu::REJOUER :
         break;
    default:
        break;
    }
    return EXIT_SUCCESS;
}
