#include <iostream>

using namespace std;
int main()
{

    cout<< "Bienvenue au Juste Prix" << endl;

    cout<< "Appuyez sur A pour Jouer " << endl;
    cout<< "Appuyez sur E pour Quittez" << endl;
    cout<< static_cast<char>(65) << endl;

    char Input {'Z'};
    cin>> Input;

    switch(Input)
    {
    case 'A':
        cout<<"TOP !"<<endl;
        for(int nombreParties = 0; nombreParties < 3; nombreParties++)
        {
            int aDeviner{rand() % 10 + 1};
            int proposition {0};
            int nombretentatives{0};
            do
            {
                cin >> proposition;
                //Check Player Answer
                if(proposition < 10000 && proposition >= 0)
                {
                    nombretentatives++;
                    if(proposition < aDeviner)
                    {
                        cout << "C'est plus ! " << endl;
                    }
                    else if(proposition > aDeviner)
                    {
                        cout << "C'est moins !" << endl;
                    }
                    else if( proposition == aDeviner)
                    {
                        cout<< " C'est gagne !" << endl;
                        //win = true;
                    }
                }
                else
                {
                    cout << "Ce nombre est trop grand ou trop petit pour etre considere" << endl;
                    nombretentatives++;
                    break;
                }
            }while(proposition != aDeviner);
        }
        cout<< "Vous etes le grand gagnant du juste prix ! "<<endl;
        break;
    case 'E':
        cout<<"Merci d'avoir participé au Juste Prix"<<endl;
        break;
    default :
        break;
    }

}
