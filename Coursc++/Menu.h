#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

enum class ChoixMenu
{
    JOUER = 'j',
    QUITTER = 'q',
    JOUER_DIFFICILE = 'd',
    JOUER_FACILE = 'f',
    INCORRECT,
};

void Menu();
ChoixMenu PlayerMenuChoice();
#endif // MENU_H_INCLUDED
