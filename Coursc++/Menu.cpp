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
}


ChoixMenu PlayerMenuChoice()
{
    auto choix{ChoixMenu::JOUER}; // autre type, apostrophe simple caract�re)
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