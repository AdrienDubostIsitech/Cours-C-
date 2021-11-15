#include <iostream>

enum class ChoixMenu
{
    JOUER = 'j',
    QUITTER = 'q',
    INCORRECT,
    EXIT_SUCCESS,
    EXIT_FAILURE
};

using namespace std;


const auto BORNE_MAX(10'000);
const auto BORNE_MIN(0);


void Menu()
{
    cout << "Bienvenue au juste prix" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER) << ": pour Jouer" << endl;
    cout <<  static_cast<char>(ChoixMenu::QUITTER) << ": pour Quitter" <<endl;
}


 void Play()
 {
    cout << "C'est parti ! " << endl;
        for (auto aDeviner : {208, 42, 1984})
        {
            auto proposition{0};
            auto nombreTentatives{0};
            do
            {
                cin >> proposition;
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

 }
 void Exit()
 {
    cout << "je quitte le jeu " << endl;
        system("pause");
 }





void GameChoice()
{
    auto choix{ChoixMenu::JOUER}; // autre type, apostrophe simple caractère)
    char saisiechoix;
    cin >> saisiechoix;

    if(saisiechoix == static_cast<char>(ChoixMenu::JOUER) || saisiechoix == static_cast<char>(ChoixMenu::QUITTER))
    {
        choix =static_cast<ChoixMenu>(saisiechoix);
    }
    else
    {
        choix = ChoixMenu::INCORRECT;
    }
    switch (choix)
    {
    case ChoixMenu::JOUER :
        Play();
        break;
    case ChoixMenu::QUITTER :
        Exit();
        break;
    case ChoixMenu::INCORRECT :
        break;
    }
}



int main()
{
    Menu();
    GameChoice();

}
