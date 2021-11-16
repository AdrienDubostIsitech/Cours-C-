#include <iostream>
#include "constantes.h"
#include "jeu.h"

enum class ChoixMenu
{
    JOUER = 'j',
    QUITTER = 'q',
    INCORRECT,
};

using namespace std;

const auto BORNE_MAX {10000};
const auto BORNE_MIN {0};

void Menu();
void PlayThreeParty();
void Exit();
void PlayParty(int);
ChoixMenu PlayerMenuChoice();

void Menu()
{
    cout << "Bienvenue au juste prix" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER) << ": pour Jouer" << endl;
    cout <<  static_cast<char>(ChoixMenu::QUITTER) << ": pour Quitter" <<endl;
}

ChoixMenu PlayerMenuChoice()
{
    auto choix{ChoixMenu::JOUER}; // autre type, apostrophe simple caractère)
    char saisiechoix;
    cin >> saisiechoix;

    if(saisiechoix == static_cast<char>(ChoixMenu::JOUER) || saisiechoix == static_cast<char>(ChoixMenu::QUITTER))
    {
       return  choix =static_cast<ChoixMenu>(saisiechoix);
    }
    else
    {
       return choix = ChoixMenu::INCORRECT;
    }

}
 void PlayThreeParty()
 {
    cout << "C'est parti ! " << endl;
        for (auto aDeviner : {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1})
        {
            PlayParty(aDeviner);
        }

 }

void PlayParty(int aDeviner)
{
     auto proposition{0};
     auto nombreTentatives{0};
     do
     {
        DemanderChoix(proposition);
        if (proposition >= BORNE_MIN && proposition < BORNE_MAX)
        {
            nombreTentatives++;
            if (proposition == aDeviner)
            {
                cout << "Bravo! " << endl;
            }
            else if (proposition > aDeviner)
            {
                cout << "C'est moins ! " << endl;
            }
            else
            {
                cout << "C'est plus ! " << endl;
            }
        }
     }
            while (proposition != aDeviner);
            if (proposition == aDeviner)
            {
               cout << "partie terminée! "<< "en " << nombreTentatives << " tentatives" << endl;
            }
            else
            {
                cout << "partie abandonnée ";
            }

}
 void Exit()
 {
    cout << "je quitte le jeu " << endl;
        system("pause");
 }

int main()
{
    cout << EXIT_FAILURE << endl;
    cout << EXIT_SUCCESS << endl;
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
