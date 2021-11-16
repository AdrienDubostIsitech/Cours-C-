#include <iostream>
#include "constantes.h"
#include "jeu.h"
#include "Menu.h"

using namespace std;


int main()
{
    Menu();
    switch (PlayerMenuChoice())
    {
    case ChoixMenu::JOUER :
        PlayThreeParty();
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
