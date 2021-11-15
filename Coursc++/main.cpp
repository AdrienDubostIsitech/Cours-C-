#include <iostream>

using namespace std;
int main()
{
    int GuessNumber{2};
    int PlayerAnswer{0};
    int Try{0};
    bool win = false;
    int NumberOfWinGame{0};
    int NumberOfWinAsked{3};

    cout<< "Bienvenue au Juste Prix" << endl;
    cout<< "Devinez le prix d'un pain au chocolat : " << endl;

    do
    {




        //Check If Player Win the Game
        if(NumberOfWinGame == NumberOfWinAsked)
        {
            win = true;
        }
        else
        {
           //Check Player's Try
            if(Try >= 3)
            {
                win = true;
                cout << "Votre nombre de tentatives a ete de : "<< Try << endl;
            }
            else
            {
                //Player Answer
                cin >> PlayerAnswer;
            }

        }

        if(win == false)
        {
            //Check Player Answer
            if(PlayerAnswer < 10000)
            {
                if(PlayerAnswer < GuessNumber && PlayerAnswer > 0)
                {
                    cout << "C'est plus ! " << endl;
                    Try++;
                }
                else if(PlayerAnswer > GuessNumber && PlayerAnswer > 0)
                {
                    cout << "C'est moins !" << endl;
                    Try++;
                }
                else if( PlayerAnswer == GuessNumber && PlayerAnswer > 0)
                {
                    cout<< " C'est gagne !" << endl;
                    NumberOfWinGame ++;
                    Try++;
                    cout << "Votre nombre de tentatives a ete de : "<< Try << endl;
                    Try = 0;
                    GuessNumber += 1;
                    //win = true;
                }
                else
                {
                    cout<< " Un chiffre inferieur a zero a etait soumis, vous alle etre redirige hors du jeu " << endl;
                    win = true;
                }
            }
            else
            {
                cout << "Ce nombre est trop grand pour etre considere" << endl;
                Try++;
            }
        }

    }
    while(win == false);

    cout << "Bravo vous etes le grand champion du juste prix " << endl;

}
