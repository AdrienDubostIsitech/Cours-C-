#include <iostream>

using namespace std;
int main()
{
    int GuessNumber{2};
    int PlayerAnswer{0};

    cout<< "Bienvenue au Juste Prix" << endl;
    cout<< "Devinez le prix d'un pain au chocolat : " << endl;


    while(PlayerAnswer != GuessNumber)
    {
        cin >> PlayerAnswer;
        if(PlayerAnswer < GuessNumber)
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
        }
    }

    //if(PlayerAnswer == GuessNumber)
    //{

    //}
    //else
    //{
       // cout<< " C'est perdu !"<< endl;
    //}
}
