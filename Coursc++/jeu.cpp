#include "jeu.h"
#include "Menu.h"
#include "constantes.h"
#include <iostream>
#include <chrono>
using namespace std;


void DemanderChoix(int &proposition)
{
     cin >> proposition;
}

void PlayThreeParty(int BORNE_MIN, int BORNE_MAX, int BORNE_RANDOM)
 {
    cout << "C'est parti ! " << endl;
    bool End = false;
    while(End == false)
    {
        auto aDeviner = rand() % BORNE_RANDOM;
        PlayParty(aDeviner, BORNE_MIN, BORNE_MAX);
        RetryOrQuit(End);
    }
 }

void PlayParty(int aDeviner, int BORNE_MIN, int BORNE_MAX)
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
