#include <iostream>

using namespace std;

int main()
{

    cout << "Bienvenue au juste prix" << endl;
    cout << "j: jouer" << endl;
    cout << "q: quitter" << endl;
    auto choix{'j'}; // autre type, apostrophe simple caract�re
    cin >> choix;
    switch (choix)
    {
    case 'j':
        cout << "C'est parti ! " << endl;
        for (auto aDeviner : {208, 42, 1984})
        {
            auto proposition{0};
            auto nombreTentatives{0};
            do
            {
                cin >> proposition;
                if (proposition >= 0 && proposition < 10'000)
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
               cout << "partie termin�e! "<< "en " << nombreTentatives << " tentatives" << endl;
            }
            else
            {
                cout << "partie abandonn�e ";
            }
        }
        break;

        default :
        cout << "Au revoir " << endl;
            break;


    }
}
