#include "Menu.h"
#include<iostream>

using namespace std;


void Menu()
{
    cout << "Bienvenue au juste prix" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER) << ": pour Jouer" << endl;
    cout <<  static_cast<char>(ChoixMenu::QUITTER) << ": pour Quitter" <<endl;
    cout <<  static_cast<char>(ChoixMenu::JOUER_DIFFICILE) << ": pour Jouer en Difficile" <<endl;
    cout <<  static_cast<char>(ChoixMenu::JOUER_FACILE) << ": pour Jouer en Facile" <<endl;
    cout << static_cast<char>(ChoixMenu::AFFICHE_SCORES << ": pour Afficher les derniers scores" << endl;
}


ChoixMenu PlayerMenuChoice()
{
    auto choix{ChoixMenu::JOUER}; // autre type, apostrophe simple caractère)
    char saisiechoix;
    cin >> saisiechoix;

    if(saisiechoix == static_cast<char>(ChoixMenu::JOUER) || saisiechoix == static_cast<char>(ChoixMenu::QUITTER) || saisiechoix == static_cast<char>(ChoixMenu::JOUER_DIFFICILE)|| saisiechoix == static_cast<char>(ChoixMenu::JOUER_FACILE))
    {
       return  choix =static_cast<ChoixMenu>(saisiechoix);
    }
    else
    {
       return choix = ChoixMenu::INCORRECT;
    }

}

void RetryOrQuit(bool &Quit)
{
    cout << static_cast<char>(ChoixMenu::REJOUER) << ": pour Rejouer" << endl;
    cout <<  static_cast<char>(ChoixMenu::QUITTER) << ": pour Quitter" <<endl;
    char saisiechoix;
    cin >> saisiechoix;
    if(saisiechoix == static_cast<char>(ChoixMenu::REJOUER))
    {
          Quit = false;
    }
    else if( saisiechoix == static_cast<char>(ChoixMenu::QUITTER))
    {
         Quit = true;
    }
    else
    {
         RetryOrQuit(Quit);
    }
}
