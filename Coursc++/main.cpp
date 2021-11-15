#include <iostream>

using namespace std;
int main()
{
    int GuessNumber{2};
    int PlayerAnswer{0};
    int Try{0};
    bool win = false;

    cout<< "Bienvenue au Juste Prix" << endl;
    cout<< "Devinez le prix d'un pain au chocolat : " << endl;

    do
    {
        Try++;
        cin >> PlayerAnswer;
        if(PlayerAnswer < 10000)
        {
            if (PlayerAnswer < 0)
            {
                cout<< " Un chiffre inferieur à zero a etait soumis, vous alle etre redirige hors du jeu " << endl;
                win = true;
            }
            else if(PlayerAnswer < GuessNumber)
            {
                cout << "C'est plus ! " << endl;
            }
            else if(PlayerAnswer > GuessNumber)
            {
                cout << "C'est moins !" << endl;
            }
            else if( PlayerAnswer == GuessNumber)
            {
                cout<< " C'est gagne !" << endl;
                win = true;
            }
        }
        else
        {
            cout << "Ce nombre est trop grand pour etre considere" << endl;
        }
    }
    while(win == false);

    cout << "Votre nombre de tentatives a ete de : "<< Try << endl;
}
