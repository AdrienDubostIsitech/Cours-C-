#include "jeu.h"
#include "constantes.h"
#include <iostream>
using namespace std;


void DemanderChoix(int &proposition)
{
     cin >> proposition;
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
        if (proposition >= BORNE_MIN_MOYEN && proposition < BORNE_MAX_MOYEN)
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
