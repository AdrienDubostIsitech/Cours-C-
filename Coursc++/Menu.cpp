#include "Menu.h"
#include<iostream>

using namespace std;


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
