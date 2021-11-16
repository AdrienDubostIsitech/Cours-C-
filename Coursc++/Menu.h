#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

enum class ChoixMenu
{
    JOUER = 'j',
    QUITTER = 'q',
    JOUER_DIFFICILE = 'd',
    JOUER_FACILE = 'f',
    REJOUER = 'r',
    AFFICHE_SCORES = 's'
    INCORRECT,
};

void Menu();
ChoixMenu PlayerMenuChoice();
void RetryOrQuit(bool &quit);
void Score();

#endif // MENU_H_INCLUDED
