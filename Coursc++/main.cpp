#include <iostream>
#include "time.h"
#include "constantes.h"
#include "jeu.h"
#include "Menu.h"

using namespace std;


int main()
{
    srand(time(NULL));
    Menu();
    switch (PlayerMenuChoice())
    {
    case ChoixMenu::JOUER :
        PlayThreeParty(BORNE_MIN_MOYEN, BORNE_MAX_MOYEN, BORNE_RANDOM_MOYEN);
        break;
    case ChoixMenu::JOUER_DIFFICILE :
        PlayThreeParty(BORNE_MIN_DIFFICILE, BORNE_MAX_DIFFICILE, BORNE_RANDOM_DIFFICILE);
        break;
    case ChoixMenu::JOUER_FACILE :
        PlayThreeParty(BORNE_MIN_FACILE, BORNE_MAX_FACILE, BORNE_RANDOM_FACILE);
        break;
    case ChoixMenu::QUITTER :
        Exit();
        break;
    case ChoixMenu::INCORRECT :
        return EXIT_FAILURE;
        break;
    default:
        break;
    }
    return EXIT_SUCCESS;
}
